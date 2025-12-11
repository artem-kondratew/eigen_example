#include <iostream>
#include <numbers>

#include <Eigen/Dense>


int main() {
    // Объявляем матрицу 2x2 типа float
    Eigen::Matrix2f mat;
    mat << 1, 2,
           3, 4;

    std::cout << "Hello, Eigen World!" << std::endl;
    std::cout << "Here is the 2x2 matrix:\n" << mat << std::endl;

    // Транспонированная матрица
    std::cout << "Transpose of the matrix:\n" << mat.transpose() << std::endl;

    // Умножение матрицы на себя
    std::cout << "Matrix multiplied by itself:\n" << mat * mat << std::endl;

    Eigen::AngleAxisf rot3D(std::numbers::pi/2., Eigen::Vector3f::UnitZ());
    Eigen::Matrix3f R = rot3D.toRotationMatrix();

    std::cout << "Rotation matrix\n" << R << std::endl;
    std::cout << "Z-axis\n" << Eigen::Vector3f::UnitZ() << std::endl;

    return 0;
}
