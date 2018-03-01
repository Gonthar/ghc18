cmake_minimum_required(VERSION 3.9)
project(GHC18)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/..)

add_executable(ghc18 src/main.cpp src/RidePlanner.cpp src/RidePlanner.h src/Ride.cpp src/Ride.h)