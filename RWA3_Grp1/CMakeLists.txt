cmake_minimum_required(VERSION 3.16)
project(RWA3_Grp1)

set(CMAKE_CXX_STANDARD 14)

add_executable(RWA3_Grp1 main.cpp LandBasedRobot/landbasedrobot.cpp LandBasedRobot/landbasedrobot.h LandBasedWheeled/landbasedwheeled.cpp LandBasedWheeled/landbasedwheeled.h LandBasedTracked/landbasedtracked.cpp LandBasedTracked/landbasedtracked.h)