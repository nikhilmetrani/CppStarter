cmake_minimum_required(VERSION 3.0)
project(CppStarter) # define top level project() to fix warning -
                  #    CMake no longer defines WIN32 on Cygwin!

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(CppDllStarter)
add_subdirectory(CppExeStarter)
add_subdirectory(CppGoogleTestStarter)
add_subdirectory(CppQtGuiStarter)