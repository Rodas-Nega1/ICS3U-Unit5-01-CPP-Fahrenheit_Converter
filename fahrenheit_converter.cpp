// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program asks the user for the temperature in celsius
// then converts it into fahrenheit


#include <iostream>


void FahrenheitConversion() {
    // convert user celsius to fahrenheit

    std::string userTemperature;
    int userTemperatureInt;
    int convertFahrenheit;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> userTemperature;
    std::cout << std::endl;

    // process & output
    try {
        userTemperatureInt = std::stoi(userTemperature);

        convertFahrenheit = (userTemperatureInt * 9) / 5 + 32;

        std::cout << userTemperatureInt << "°C is equal to "
        << convertFahrenheit << "°F";
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid integer.";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}

int main() {
    // this function calls the precedent function

    // call a function
    FahrenheitConversion();
}
