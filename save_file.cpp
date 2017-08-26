#include <fstream>

std::ofstream file("/home/andrestoga/ros_Map_Merging/corner_data/breaking_points.txt", std::ofstream::out);

for (int i = 0; i < vector.size(); ++i)
{
  file << i << " " << vector[ i ] << std::endl;
}

file.close();

if ( ! file )
{
    //  Error handling.  Most important, do _not_ return 0 from
    //  main, but EXIT_FAILUREl.
}
