project(blacklilium)

cmake_minimum_required(VERSION 2.8)

# TODO - adding search for SDL2 (manual setting of SDL2 include directory for now)
include_directories(BEFORE ../sdl/SDL/include)

# enabling c++11 flags for gcc
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")


add_subdirectory(src)
add_subdirectory(doc)