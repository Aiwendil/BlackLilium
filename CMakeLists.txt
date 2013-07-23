project(blacklilium)

cmake_minimum_required(VERSION 2.8)

# TODO - adding search for SDL2 (manual setting of SDL2 include directory for now)
include_directories(BEFORE ../sdl/SDL/include)


add_subdirectory(src)
add_subdirectory(doc)