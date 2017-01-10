cmake_minimum_required(VERSION 3.6)
project(Complex-Cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp Complex.cpp Complex.h Square.cpp Square.h)
add_executable(Complex-Cpp ${SOURCE_FILES})