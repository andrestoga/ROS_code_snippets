#include "ros/ros.h"
#include <eigen3/Eigen/Eigenvalues>
#include <eigen3/Eigen/Dense>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "helloWorld");
  ros::NodeHandle n;

Eigen::EigenSolver<Eigen::MatrixXf> es;
Eigen::MatrixXf A = Eigen::MatrixXf::Random(4,4);
es.compute(A);
std::cout << "The eigenvalues of A are: " << es.eigenvalues().transpose() << std::endl;
es.compute(A + Eigen::MatrixXf::Identity(4,4)); // re-use es to compute eigenvalues of A+I
std::cout << "The eigenvalues of A+I are: " << es.eigenvalues().transpose() << std::endl;

  /*Eigen::MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;*/

  return 0;
}

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
# include
  ${catkin_INCLUDE_DIRS} ${Eigen_INCLUDE_DIRS}
)
