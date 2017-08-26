int main(int argc, char **argv)
{
  if( argc != 2 )
	{
		ROS_ERROR("Send as an argument the path where to save the file");
		exit(-1);
	}
  
  // The position 0 is the name of the program
  std::string fname(argv[1]);
}
