# CMakeFiles.txt inside "CLI_Arduino" folder
cmake_minimum_required(VERSION 3.5)
idf_component_register(SRCS "src/CLI.cpp" "src/HexHelpers.cpp"
                    INCLUDE_DIRS "src/." "."
                    REQUIRES "arduino" # Library requires Arduino
                    )

project(CLI_Arduino)