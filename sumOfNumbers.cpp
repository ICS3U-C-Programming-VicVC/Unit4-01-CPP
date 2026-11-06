// Copyright (c) 2026 Victor Victor-Calixte All rights reserved.
// .
// Created by: Victor Victor-Calixte
// Date: 09/16/26
// This program displays a total number
// based on the amount of times looped


#include<iostream>
#include<string>

char const ERR_MSG[] =
(" isn't a valid input. \n"
"(MUST BE A POSITIVE INTEGER!)\n");

char const INPUT_MSG[] = ("Enter the amount of times to loop: ");

char const TRACK_MSG[] = ("Looped: ");
char const FINAL_MSG[] = ("The sum number from the loop is: ");

int main() {
    // Setting needed variables
    std::string totalLoopsStr;

    int currentLoop = 0;
    int totalNum = 0;

    // Getting the amount of times to loop
    // from the user
    std::cout << INPUT_MSG;
    std::cin >> totalLoopsStr;

    // the try statement will make sure the code safely with invalid user inputs
    try {
        // Converting the input from the user
        // to an integer
        int totalLoops = std::stoi(totalLoopsStr);

        // Checking if the input is valid
        if (totalLoops <= 0) {
            std::cout
            << totalLoopsStr
            << ERR_MSG;

        } else {
            // Loop the requested amount of times
            while (currentLoop < totalLoops) {
                // Add to the counter and the sum
                currentLoop += 1;
                totalNum += currentLoop;

                // Display the amount of times looped
                std::cout
                << TRACK_MSG
                << currentLoop
                << "\n";
            }

            // Display the sum
            std::cout
            << FINAL_MSG
            << totalNum
            << "\n";
        }
    } catch(const std::invalid_argument) {
        std::cout
        << totalLoopsStr
        << ERR_MSG;
    }
}
