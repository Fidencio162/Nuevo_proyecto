cmake_minimum_required(VERSION 3.22)
project(Nuevo_proyecto)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

add_executable(Nuevo_proyecto main.cpp)
find_package(GSL REQUIRED)    # See below (2)
target_link_libraries(Nuevo_proyecto GSL::gsl GSL::gslcblas)
