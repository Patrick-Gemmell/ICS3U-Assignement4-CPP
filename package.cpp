// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: September 2019
// This Program sees if a package can be processed

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    // This function sees if a package can be processed
    // variables and constants
    const float WEIGHT = 27;
    const float SIZE = 10000;
    std::string weightAsString;
    std::string lengthAsString;
    std::string widthAsString;
    std::string heightAsString;
    int weightAsInt = 0;
    int lengthAsInt = 0;
    int widthAsInt = 0;
    int heightAsInt = 0;
    int volume = 0;

    while (true) {
        // inputs
        std::cout << "Input the weight: ";
        std::cin >> weightAsString;
        try {
            weightAsInt = std::stoi(weightAsString);
            // process and output
            if (weightAsInt > WEIGHT) {
                std::cout << "Your package cannot be processed as the maximum \
weight is 27 kg, and yours is " << weightAsInt << std::endl;
                continue;
            } else {
                std::cout << "input length: ";
                std::cin >> lengthAsString;
                lengthAsInt = std::stoi(lengthAsString);
                std::cout << "input width: ";
                std::cin >> widthAsString;
                widthAsInt = std::stoi(widthAsString);
                std::cout << "input height";
                std::cin >> heightAsString;
                heightAsInt = std::stoi(heightAsString);
                volume = heightAsInt * widthAsInt * lengthAsInt;
            }
            if (volume > SIZE) {
                std::cout << "Your package cannot be processed as the maximum \
volume is 10, 000cm^3, but yours is " << volume << std::endl;
            } else {
                std::cout << "Your package can be processed" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "invalid integer" << std::endl;
        }
    }
}
