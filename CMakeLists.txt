cmake_minimum_required(VERSION 3.26)
project(hashing)

set(CMAKE_CXX_STANDARD 17)

add_executable(hashing main.cpp
        sha1.h
        sha1.cc)
