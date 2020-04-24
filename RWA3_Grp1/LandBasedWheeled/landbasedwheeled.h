//
// Created by thegodwithinvegeta on 4/24/20.
//

#pragma once
/**
 * @file landbasedwheeled.h
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
#include <boost/interprocess/smart_ptr/shared_ptr.hpp>

#include "../LandBasedRobot/landbasedrobot.h"

namespace rwa3
{

    class LandBasedWheeled : public LandBasedRobot
    {
    protected:
        int wheel_number;
        std::shared_ptr<std::string> wheel_type;

    public:
/**
* @brief It is a 4 parameter constructor of a class named LandBasedWheeled
* that initialises name_, x_, y_,WheelNumber
* @param name
* @param x
* @param y
* @param WheelNumber
* @return none
*/
        LandBasedWheeled(std::string name = "name",  int x = 0, int y = 0, int WheelNumber = 2):LandBasedRobot(name, x, y), wheel_number {WheelNumber}{}
/**
* @brief It is a virtual destructor of class LandBasedWheeled
* that destroys the object created
* @param none
* @return none
*/
        virtual ~LandBasedWheeled(){};
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
* @brief  It is a virtual function named Release
* that picksup the object
* @param std::string
* @return none
*/
        virtual void Release(std::string) override;
/**
* @brief It is a function named SpeedUp that increases tthe speed.
* @param int
* @return none
*/
        void SpeedUp(int);

    };//--class end
}//--namespace end


