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

# AppVeyor does not have Qt version for VS2019
# So exclude Qt project for VS 2019 builds
if(NOT "${CMAKE_GENERATOR}" STREQUAL "Visual Studio 16 2019")
    add_subdirectory(CppQtGuiStarter)
endif()