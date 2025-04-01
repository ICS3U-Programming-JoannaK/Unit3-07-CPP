// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 31, 2025
// This program casts a string to an integer
// then asks the user to enter their age and the program
// tells you if you can date their grandchild.

#include <iostream>
#include <string>

int main() {
    // declare variables
    std::string ageString;
    int ageInteger;

    // get user's age
    std::cout << "Enter your age: ";
    std::cin >> ageString;

    // CAST a string into an integer
    try {
        // casts the user's age to an integer
        ageInteger = std::stoi(ageString);

        // check if user's guess is correct
        if (ageInteger > 25 && ageInteger < 40) {
            std::cout << "You are of age, you can date my grandchild !";
        } else {  // if user's age is not between 25 and 40
            std::cout << "You are too young, you cannot date my grandchild !";
        }
    } catch (std::invalid_argument) {
        // The user did not enter a number
        std::cout << ageString << " is not a number.\n";
    } finally : std::cout << "Thank you for playing !";
}

