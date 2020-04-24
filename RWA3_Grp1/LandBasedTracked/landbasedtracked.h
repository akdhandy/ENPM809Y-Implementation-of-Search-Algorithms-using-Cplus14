//
// Created by thegodwithinvegeta on 4/24/20.
//
#pragma once
/**
 * @file landbasedtracked.h
 * @authors
 * Group 1
*
*
* @section DESCRIPTION
*
* This is a concrete class that is derived from the base class (LandBasedRobot)
*
*/
#include <iostream>
#include <string>
#include <memory>
#include "../LandBasedRobot/landbasedrobot.h"

namespace rwa3
{

    class LandBasedTracked : public LandBasedRobot
    {

    public:
/**
* @brief This is a 3 parameter constructor of the class named LandBasedTracked
* and it initialises name_, x_, y_
* @param name
* @param x
* @param y
* @return none
*/
        LandBasedTracked(std::string name="None", int x='0', int y='0'): LandBasedRobot(name, x, y){}
/**
* @brief It is a virtual destructor of class LandBasedTracked
* that destroys the object created
* @param none
* @return none
*/
        virtual ~LandBasedTracked() {};
/**
* @brief It is a virtual function named GoUp
* that increments the y coordinate
* @param int
* @param int
* @return none
*/
        virtual void GoUp(int, int) override;
/**
* @brief It is a virtual function named GoDown
* that decrements the y coordinate
* @param int
* @param int
* @return none
*/
        virtual void GoDown(int, int) override;
/**
* @brief It is a virtual function named TurnLeft
* that decrements the x coordinate
* @param int
* @param int
* @return none
*/
        virtual void TurnLeft(int, int) override;
/**
* @brief It is a virtual function named TurnRight
* that increments the x coordinate
* @param int
* @param int
* @return none
*/
        virtual void TurnRight(int, int) override;
/**
* @brief  It is a virtual function named Pickup
* that picksup the object
* @param std::string
* @return none
*/
        virtual void PickUp(std::string) override;
/**
* @brief  It is a virtual function named Pickup
* that picksup the object
* @param std::string
* @return none
*/
        virtual void Release(std::string) override;
/**
* @brief  It is a virtual function named Release
* that releases the object
* @param std::string
* @return none
*/
    protected:
        std::shared_ptr<std::string> track_type;
    };//--class end
}//--namespace end