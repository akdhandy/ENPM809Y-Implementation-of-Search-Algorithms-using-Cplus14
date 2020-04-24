//
// Created by thegodwithinvegeta on 4/24/20.
//

#include <iostream>
#include <string>

#include "landbasedtracked.h"


void rwa3::LandBasedTracked::GoUp(int x, int y)
{
    std::cout << "LandBasedTracked::GoUp is called" << std::endl;
}

void rwa3::LandBasedTracked::GoDown(int x, int y)
{
    std::cout << "LandBasedTracked::GoDown is called" << std::endl;
}

void rwa3::LandBasedTracked::TurnLeft(int x, int y)
{
    std::cout << "LandBasedTracked::TurnLeft is called" << std::endl;
}

void rwa3::LandBasedTracked::TurnRight(int x, int y)
{
    std::cout << "LandBasedTracked::TurnRight is called" << std::endl;
}

void rwa3::LandBasedTracked::PickUp(std::string a)
{
    std::cout << "LandBasedTracked::PickUp is called" << std::endl;
}

void rwa3::LandBasedTracked::Release(std::string a)
{
    std::cout << "LandBasedTracked::Release is called" << std::endl;
}