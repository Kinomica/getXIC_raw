#include "getXIC.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {

	if(argc<7){
		std::cout << "Not enough arguments\n";

		return 0;
	} else{

		bool boxCar = std::atoi(argv[1]);
		std::string fullFileName = argv[2];
		double mz = std::stod(argv[3]);
		float rt = std::stof(argv[4]);
		int charge = std::stoi(argv[5]);
		float mzTolerance = std::stoi(argv[6]);

		std::string outputCsvName;
		if(argc==8){
			outputCsvName = argv[7];
		}

		std::vector< std::vector< std::pair<double, double> > > timeIntIstopoes = getXIC(fullFileName, mz, rt, charge, boxCar, mzTolerance);


		if(argc<8){
			for(int i=0; i<3; ++i){
				std::string fileName = "istope" + std::to_string(i) + ".csv";

				std::ofstream file(fileName);

				for(int j=0, size=timeIntIstopoes[i].size(); j<size; ++j){
					file << timeIntIstopoes[i][j].first << "," << timeIntIstopoes[i][j].second << "\n";
				}
			}
		} else{
			for(int i=0; i<3; i++){
				std::string fileName = outputCsvName + "Iso" + std::to_string(i+1) + ".csv";

				std::ofstream file(fileName);

				for(int j=0, size=timeIntIstopoes[i].size(); j<size; ++j){
					file << timeIntIstopoes[i][j].first << "," << timeIntIstopoes[i][j].second << "\n";
				}
			}
		}
	}

	return 0;

}