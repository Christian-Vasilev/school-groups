cmake_minimum_required(VERSION 3.24)
project(SchoolGroups)

set(CMAKE_CXX_STANDARD 11)

add_executable(SchoolGroups main.cpp Student.cpp Group.cpp Game.cpp Idea.cpp)
