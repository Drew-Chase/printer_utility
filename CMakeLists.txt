cmake_minimum_required(VERSION 3.28)
project(printer_utility)

set(CMAKE_CXX_STANDARD 26)


# Add the library
add_library(printer_utility STATIC
        src/printers.cpp
        includes/printers.h
        includes/printer.h
        includes/output_formats.h)
target_include_directories(printer_utility PUBLIC ./includes)


# Add the cli
add_executable(cli cli/main.cpp)
target_include_directories(cli PUBLIC ./includes)
target_link_libraries(cli printer_utility)
target_include_directories(cli PUBLIC ./vendors/cclip/includes)
target_link_libraries(cli cclip)
