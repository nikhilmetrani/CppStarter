cmake_minimum_required(VERSION 3.0)
project(CppExeStarter)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/source/*.cpp)

add_executable(CppExeStarter ${SRC_FILES})

target_link_libraries(CppExeStarter CppDllStarter)
