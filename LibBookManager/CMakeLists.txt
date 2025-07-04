cmake_minimum_required(VERSION 3.31)
project(LibBookManager)

set(CMAKE_CXX_STANDARD 26)

add_executable(LibBookManager main.cpp
        Book.cpp
        Book.h)
