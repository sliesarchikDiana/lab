cmake_minimum_required(VERSION 3.30)
project(projectsTest)

set(CMAKE_CXX_STANDARD 20)

add_executable(projectsTest main.cpp
        blockbuster.h
        sciFi.h
        romCom.h)
