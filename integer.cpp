// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Oct 2022
// This program identifies your integer

#include <iomanip>
#include <iostream>

int main() {
    // This function determines what your type of integer is.
    int userNumber;

    // input
    std::cout << "Enter any integer: ";
    std::cin >> userNumber;
    std::cout << "" << std::endl;

    // process
    if (userNumber < 0) {
        // output
        std::cout << userNumber << "is a negative integer.";
    } else if (userNumber > 0) {
        // output
        std::cout << userNumber << "is a positive integer.";
    } else(userNumber == 0) {
        // output
        std::cout << userNumber << "is just equal to zero.";
    }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
