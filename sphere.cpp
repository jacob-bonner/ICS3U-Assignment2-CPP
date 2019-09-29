// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program can calulate the volume of a sphere

#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
#include <iomanip>

int main() {
    // This function can calculate the volume of a sphere

    // Variables
    const float pi = M_PI;
    float radius;
    float volume;

    // Input
    std::cout << "Enter the radius of your sphere here (cm): " << std::endl;
    std::cin >> radius;

    // Process
    volume = (4*pi*(pow(radius, 3)))/3;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The volume of the sphere is " << std::fixed
    << std::setprecision(2) << std::setfill('0')
    << volume << "cm" << std::endl;
}
