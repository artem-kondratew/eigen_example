project(helloworld LANGUAGES C CXX)
cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

add_executable(executable main.cpp)

target_link_libraries (executable Eigen3::Eigen)
