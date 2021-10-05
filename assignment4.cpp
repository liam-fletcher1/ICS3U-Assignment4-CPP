// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user input two numbers
// the program tells which number is bigger, smaller or equal

#include <iostream>
#include <string>

int main() {
    // this function uses a try statement
    std::string first_number;
    std::string second_number;
    int integerAsFirst;
    int integerAsSecond;

    // input
    std::cout << "Please enter the first number: ";
    std::cin >> first_number;
    std::cout << "" << std::endl;

        std::cout << "Please enter the second number: ";
    std::cin >> second_number;
    std::cout << "" << std::endl;

    // process & output
    try {
         integerAsFirst = std::stoi(first_number);
          integerAsSecond = std::stoi(second_number);
        if (integerAsFirst == integerAsSecond) {
            std::cout << "The two numbers are equal!";
        }
        if (integerAsFirst > integerAsSecond) {
            std::cout << "The first number is bigger than the second number!";
        }
        if (integerAsFirst < integerAsSecond) {
            std::cout << "The second number is bigger than the second number!";
        }
            std::cout << std::endl;
         } catch (std::invalid_argument) {
        std::cout << "This is an invaild number!";
    }
    std::cout << "\nDone.";
}
