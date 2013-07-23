
include_directories(../engine)

add_executable(engineTest engineTest.cpp)
target_link_libraries(engineTest engine)