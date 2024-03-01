cmake_minimum_required(VERSION 3.28)
project(printer_utility)

set(CMAKE_CXX_STANDARD 26)


# Add the library
add_library(printer_utility STATIC
        src/printers.cpp
        includes/printers.h
        includes/printer.h
        includes/output_formats.h)
target_include_directories(printer_utility PUBLIC ${CMAKE_SOURCE_DIR}/includes)


# Add the cli
add_executable(cli
        cli/main.cpp
        ${CMAKE_SOURCE_DIR}/vendors/cclip/cclip/includes/options_manager.h
    ${CMAKE_SOURCE_DIR}/vendors/cclip/cclip/src/options_manager.cpp)

target_include_directories(cli PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_link_libraries(cli printer_utility)


# Link CCLIP library to the cli
target_include_directories(cli PUBLIC ${CMAKE_SOURCE_DIR}/vendors/cclip/cclip/includes)

