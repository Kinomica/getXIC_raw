# getXIC




# compilation 

g++ ./*.cpp -o getXIC.exe -m64 -std=c++17 -lz -lcomdlg32 -lole32 -loleaut32 -static -fopenmp -O3



# running example
.\getXIC.exe 1 C:\data\kinomica\Projects\IUK\PP\RAW\K0003_PP_S037.raw 649.3312 32.3 2 7


.\getXIC.exe boxcar raw_file_path mass/z RT charge mztolerance
