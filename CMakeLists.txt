cmake_minimum_required(VERSION 3.8)

project(hackathon)

set(CMAKE_CXX_STANDARD 17)

include_directories(./)

add_subdirectory(src)
add_subdirectory(3party/googletest)
