cmake_minimum_required(VERSION 3.15)
project(TDD)

set(CMAKE_CXX_STANDARD 20)

add_executable(TDD Bowling.cpp catch.hpp Tests.cpp Bowling.hpp)