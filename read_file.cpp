#include <fstream>

string path_size = curr_dir + "/" + fileName_size;

//Getting the size of the maps
std::fstream myfile( path_size.c_str(),  std::ios_base::in );
int r;
int c;
myfile >> r;
myfile >> c;
myfile.close();
