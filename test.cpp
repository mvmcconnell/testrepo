#include <iostream>
#include <Eigen/Dense>
 
using Eigen::MatrixXi;
 
int main()
{
  MatrixXi m = MatrixXi::Random(100,100);
  MatrixXi n = MatrixXi::Random(100,100);

//   std::cout << m << std::endl;
//   std::cout << n << std::endl;

for (int i = 0; i < 10000; i++) {
  n = m*n;
}

  std::cout << "Here is mat*mat:\n" << n << std::endl;

}
