#ifndef PESCAL_QUANTITATION_H
#define PESCAL_QUANTITATION_H

#include <vector>
#include <string>
#include <tchar.h>
#include <Windows.h>

#include "XRawfile2_x64.h"

struct peakInfo{
    double intensity;
    double area;
    int index;
};

std::vector< std::vector< std::pair<double, double> > > getXIC(std::string &fullFileName, double mz, float rt, int charge, bool boxCar);

void openRawFile(std::wstring wRawFile, IXRawfile5* &pISL);

void getTimeIntPairs(std::vector<std::pair<double, double> > &timeIntPairs, BSTR &filter, std::wstring mzRange, float rtLower, float rtUpper, IXRawfile5* &pISL, bool boxCar);

void peakHeight(std::vector <std::vector<std::pair<double, double> > > &timeIntIsotopes, peakInfo &bestPeak);

void outputTimeIntPairs(std::vector<std::pair<double, double> > &timeIntPairs, int isotopeNum);

void getError();

#endif //PESCAL_QUANTITATION_H
