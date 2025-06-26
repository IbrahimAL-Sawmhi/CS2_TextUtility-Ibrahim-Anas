cmake_minimum_required(VERSION 3.10)

project(CS2_TextUtility-Ibrahim-Anas)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(SOURCES text_utility.cpp main.cpp)

add_executable(TextUtility ${SOURCES})