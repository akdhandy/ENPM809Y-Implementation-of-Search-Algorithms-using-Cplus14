#include <iostream>
#include <string>

#include "landbasedrobot.h"


void rwa3::LandBasedRobot::GoUp(int x, int y)
{
    std::cout << "LandBasedRobot::GoUp is called" << std::endl;
}

void rwa3::LandBasedRobot::GoDown(int x, int y)
{
    std::cout << "LandBasedRobot::GoDown is called" << std::endl;
}

void rwa3::LandBasedRobot::TurnLeft(int x, int y)
{
    std::cout << "LandBasedRobot::TurnLeft is called" << std::endl;
}

void rwa3::LandBasedRobot::TurnRight(int x, int y)
{
    std::cout << "LandBasedRobot::TurnRight is called" << std::endl;
}

void rwa3::LandBasedRobot::PickUp(std::string)
{
    std::cout << "LandBasedRobot::PickUp is called" << std::endl;
}

void rwa3::LandBasedRobot::Release(std::string)
{
    std::cout << "LandBasedRobot::Release is called" << std::endl;
}//
// Created by thegodwithinvegeta on 4/24/20.
//

