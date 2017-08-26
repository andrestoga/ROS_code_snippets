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

// In a launch file
<arg name="robot_points_file" default="/home/andrestoga/Dropbox/MapsToMerge/maps_1/robot_poses.txt"/>
<node name="save_robot_points" pkg="adaptive_corner_detection" type="save_robot_points" args="$(arg robot_points_file)"
	output="screen" />
