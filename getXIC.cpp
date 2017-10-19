#include <iostream>
#include <string>
#include <fstream>
#include <wchar.h>
#include <time.h>
#include <numeric>

#include "getXIC.h"

std::vector< std::vector< std::pair<double, double> > > getXIC(std::string &fullFileName, double mz, float rt, int charge, bool boxCar){

	IXRawfile5* pISL;

	std::wstring wRawFile(fullFileName.begin(),fullFileName.end());
	wRawFile.append(1, 0);
	openRawFile(wRawFile, pISL);

	pISL->SetCurrentController ( 0, 1 ); // first MS controller

	BSTR filter = NULL;
	long scanNumber = 1;
	long nRet = pISL->GetFilterForScanNum(scanNumber,&filter);

	std::vector<double> peakAreas;

	double mzWindow = 7; // This should be user define as a parameter
	float rtWindow = 1.5; // This should be user define as a parameter

	std::vector< std::pair<double, double> > timeIntPairs;
	std::vector< std::vector< std::pair<double, double> > > timeIntIsotopes;

	// First isotope
	double mzLower = mz - (mz * mzWindow) / 1000000;
	double mzUpper = mz + (mz * mzWindow) / 1000000;
	std::cout << "Isotope 1: " << mzLower << " - " << mzUpper << "\n";
	std::wstring mzRange = std::to_wstring(mzLower);
	mzRange=mzRange+std::wstring(L"-");
	mzRange+=std::to_wstring(mzUpper);
	mzRange.append(1, 0);
	float rtLower = rt - rtWindow;
	float rtUpper = rt + rtWindow;

	getTimeIntPairs(timeIntPairs, filter, mzRange, rtLower, rtUpper, pISL, boxCar);
	timeIntIsotopes.push_back(timeIntPairs);
	timeIntPairs.clear();

	// Second isotope
	mz = mz + (1.0022 / charge);
	mzLower = mz - (mz * mzWindow) / 1000000;
	mzUpper = mz + (mz * mzWindow) / 1000000;
	std::cout << "Isotope 2: " << mzLower << " - " << mzUpper << "\n";
	mzRange = std::to_wstring(mzLower);
	mzRange=mzRange+std::wstring(L"-");
	mzRange+=std::to_wstring(mzUpper);
	mzRange.append(1, 0); 
	getTimeIntPairs(timeIntPairs, filter, mzRange, rtLower, rtUpper, pISL, boxCar);

	timeIntIsotopes.push_back(timeIntPairs);
	timeIntPairs.clear();

	// Third isotope
	mz = mz + (1.0022 / charge);
	mzLower = mz - (mz * mzWindow) / 1000000;
	mzUpper = mz + (mz * mzWindow) / 1000000;
	std::cout << "Isotope 3: " << mzLower << " - " << mzUpper << "\n";
	mzRange = std::to_wstring(mzLower);
	mzRange=mzRange+std::wstring(L"-");
	mzRange+=std::to_wstring(mzUpper);
	mzRange.append(1, 0);

	getTimeIntPairs(timeIntPairs, filter, mzRange, rtLower, rtUpper, pISL, boxCar);

	timeIntIsotopes.push_back(timeIntPairs); 


	peakInfo bestPeak;

	peakHeight(timeIntIsotopes, bestPeak);

	std::cout << "---------------- \n";
	std::cout << "Retention time: " << timeIntIsotopes[0][bestPeak.index].first << "\n";
	std::cout << "Peak area: " << bestPeak.area << "\n";

	pISL->Close();
	pISL->Release();        

	CoUninitialize();

	return timeIntIsotopes;

}

void openRawFile(std::wstring wRawFile, IXRawfile5* &pISL){

	HRESULT hr;

	SetLastError(0);

	wchar_t* const clsid_MSFileReader_str = (wchar_t *)L"{1D23188D-53FE-4C25-B032-DC70ACDBDC02}";
	wchar_t* const iid_IXRawfile_str = (wchar_t *)L"{11B488A0-69B1-41FC-A660-FE8DF2A31F5B}";

	CLSID clsid_MSFileReader;
	CLSID clsid_IXRawfile;    

	CLSIDFromString(clsid_MSFileReader_str, &clsid_MSFileReader);
	CLSIDFromString(iid_IXRawfile_str, &clsid_IXRawfile);

	DWORD dw = GetLastError();
	if(dw!=0){
		std::cout << "CLSIDFromString error: " << dw << ". ";
		getError();
		SetLastError(0);
		dw = 0;
	}

	//hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
	hr=CoInitialize(NULL);

	if(SUCCEEDED(hr)){
		std::cout << "CoInitialize success" << std::endl;  

		hr = CoCreateInstance ( clsid_MSFileReader,		// CLSID of coclass
								NULL,					// not used - aggregation
								CLSCTX_INPROC_SERVER,	// type of server
								clsid_IXRawfile,		// IID of interface
								(void**) &pISL );		// Pointer to our interface pointer

		if ( SUCCEEDED ( hr ) ){

			std::cout << "CoCreateInstance success" << std::endl;

			wchar_t* wcharRawFile = (wchar_t*)wRawFile.c_str();
			std::wcout << wcharRawFile << std::endl;
			long nRet = pISL->Open( wcharRawFile );

			if(nRet != 0){
				std::cout << "Open error : " << nRet << ". " << std::endl;
				dw = GetLastError();
				if(dw!=0){
					getError();
					SetLastError(0);
					dw = 0;
				}
			}

			std::cout << "Opened RAW file" << std::endl;
		}
		else{
			std::cout << "CoCreateInstance failure" << std::endl;
			dw = GetLastError();
			if(dw!=0){
				std::cout << "CoCreateInstance error: " << dw << ". ";
				getError();
				SetLastError(0);
				dw = 0;
			}          
			// Couldn't create the COM object.  hr holds the error code.
		}

	} else {
		std::cout << "CoInitialize failure" << std::endl;

		dw = GetLastError();
		if(dw!=0){
			std::cout << "CoInitialize error: " << dw << ". ";
			getError();
			SetLastError(0);
			dw = 0;
		}  
	}
}

void getTimeIntPairs(std::vector<std::pair<double, double> > &timeIntPairs, BSTR &filter, std::wstring mzRange, float rtLower, float rtUpper, IXRawfile5* &pISL, bool boxCar){

	wchar_t* wcharMzRange = &mzRange[0];
	VARIANT varChroData;
	VariantInit(&varChroData);
	VARIANT varPeakFlags;
	VariantInit(&varPeakFlags);
	long nArraySize = 0;
	double dStartTime = double(rtLower);
	double dEndTime = double(rtUpper);
	long smoothingType = 0;
	long smoothingValue = 0;
	if(boxCar){
		smoothingValue = 9;
		smoothingType = 1;
	}

	long nRet = pISL->GetChroData ( 0,
									0,
									0,
									filter,
									wcharMzRange,
									NULL,
									0.0,
									&dStartTime,
									&dEndTime,
									smoothingType, //Boxcar chromatogram smoothing
									smoothingValue, //Smoothing value between 3-15 (must be odd)
									&varChroData,
									&varPeakFlags,
									&nArraySize );

	if( nArraySize ){
		// Get a pointer to the SafeArray
		SAFEARRAY FAR* psa = varChroData.parray;

		double* spectrumData;

		SafeArrayAccessData( psa, (void**)(&spectrumData) );
		std::pair<double, double> retrievedPair;
		for( long j=0; j<2*nArraySize; j=j+2 ){
			retrievedPair.first = spectrumData[j];
			retrievedPair.second = spectrumData[j+1];

			timeIntPairs.push_back(retrievedPair);
		}
		// Release the data handle
		SafeArrayUnaccessData( psa );

		SafeArrayDestroy(psa);
		psa = NULL;
	}

}


void peakHeight(std::vector< std::vector<std::pair<double, double> > > &timeIntIsotopes, peakInfo &bestPeak){
	std::vector<std::pair<double, double> > &isotope1 = timeIntIsotopes[0];

	int numIndices = isotope1.size();

	std::vector<int> listOfPeaks;

	for(int slidingWindowIndex=6; slidingWindowIndex<numIndices-6; slidingWindowIndex++){	//
		int higherThan = 0;																	//
		for(int index=slidingWindowIndex-6; index<slidingWindowIndex; index++){				//
			if(isotope1[slidingWindowIndex].second > isotope1[index].second){				//
				higherThan++;																//
			}																				//  Create list of indices corresponding to found peaks.
		}																					//
		if(higherThan>5){																	//
			higherThan=0;																	//
			for(int index=slidingWindowIndex+1; index<=slidingWindowIndex+6; index++){		//  A peak is deemed found if the central intensity is greater
				if(isotope1[slidingWindowIndex].second > isotope1[index].second){			//  than any of the 6 intensities below AND greater than any of the
					higherThan++;															//  6 intensities above.
				}																			//
			}																				//
			if(higherThan>5) listOfPeaks.push_back(slidingWindowIndex);						//
		}																					//
	}																						//

	int numPeaks = listOfPeaks.size();
	double bestArea = 0;
	double bestIntensity = 0;
	int bestIndex = 0;

	for(int peakIndex=0; peakIndex<numPeaks; peakIndex++){

		std::vector<double> peakAreas;

		for(int isotopeIndex=0; isotopeIndex<3; isotopeIndex++){

			int intensityIndex = listOfPeaks[peakIndex];
			double peakIntensity = timeIntIsotopes[isotopeIndex][intensityIndex].second;
			while(timeIntIsotopes[isotopeIndex][intensityIndex].second>peakIntensity/2 && intensityIndex>0){
				intensityIndex--;
			}
			int lowerIndex = intensityIndex;

			intensityIndex = listOfPeaks[peakIndex];
			while(timeIntIsotopes[isotopeIndex][intensityIndex].second>peakIntensity/2 && intensityIndex<numIndices){
				intensityIndex++;
			}
			int upperIndex = intensityIndex;

			double peakWidth = (upperIndex-lowerIndex)*60;
			double peakArea = peakWidth*timeIntIsotopes[isotopeIndex][listOfPeaks[peakIndex]].second;

			peakAreas.push_back(peakArea);
		}

		double totalArea = peakAreas[0] + peakAreas[1] + peakAreas[2];
		if(totalArea>bestArea && (peakAreas[1] > (peakAreas[0]*0.2)) ){
			bestArea=totalArea;
			bestIntensity = isotope1[listOfPeaks[peakIndex]].second;
			bestIndex = listOfPeaks[peakIndex];
		}
	}

	bestPeak.intensity = bestIntensity;
	bestPeak.area = bestArea;
	bestPeak.index = bestIndex;

}

void outputTimeIntPairs(std::vector<std::pair<double, double> > &timeIntPairs, int isotopeNum){
		std::ofstream datFile;
		std::string csvFileName = "timeInt"+std::to_string(isotopeNum)+".csv";
		const char *csvFileNameChar = csvFileName.c_str();
		datFile.open (csvFileNameChar);

		datFile << "time,int\n";
		for(int i=0; i<timeIntPairs.size(); i++){
			datFile << timeIntPairs[i].first << "," << timeIntPairs[i].second << "\n";
		}
		datFile.close();
}

void getError(){

	//Returns the last Win32 error, in string format. Returns an empty string if there is no error.

	//Get the error message, if any.
	DWORD errorMessageID = ::GetLastError();
	if(errorMessageID == 0)
		std::cout << "No error" << std::endl;

	LPSTR messageBuffer = NULL;
	size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
								 NULL, errorMessageID, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&messageBuffer, 0, NULL);

	std::string message(messageBuffer, size);

	//Free the buffer.
	LocalFree(messageBuffer);

	std::cout << message << std::endl;

}
