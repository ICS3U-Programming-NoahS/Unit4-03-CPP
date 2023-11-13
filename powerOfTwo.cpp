// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 13th, 2023
// This program asks the user to enter a whole number
// then tells the user every number squared from 0 to that number
#include <iostream>

int main() {
    // Declare variables
    int userNumInt, counter, power;
    std::string userNumString;

    // get the user number as a string
    std::cout << "Enter a whole number: ";
    std::cin >> userNumString;
    std::cout << std::endl;

    try {
        // convert the user's guess to an int
        userNumInt = std::stoi(userNumString);

        // Check if the user's number is negative
        if (userNumInt < 0) {
            std::cout << userNumInt;
            std::cout << " is not a whole number." << std::endl;
        } else if (userNumInt == 0) {
            std::cout << "0^2 = 0" << std::endl;
        } else {
            // For loop to find the powers
            for (counter = 0; (counter - 1) < userNumInt; counter++) {
                power = counter * counter;
                std::cout << counter << "^2 = " << power << std::endl;
            }
        }
    } catch (std::exception) {
        // The user did not enter an integer
        std::cout << userNumString << " is not an integer!\n";
    }
}
