cmake_minimum_required(VERSION 3.28)
project(print_utility)

set(CMAKE_CXX_STANDARD 26)

add_library(print_utility STATIC library.cpp)
