// SpeeqTrap.cpp, Mansor Amond-Mansaray, 2/7/2025, This program checks if a driver is speeding based on the speed limit.
   
#include <iostream>

int main() {
    // Declare variables
    int speedLimit;
    double driverSpeed;

    // Get user input
    std::cout << "Enter the speed limit (mph): ";
    std::cin >> speedLimit;

    std::cout << "Enter the vehicle's speed (mph): ";
    std::cin >> driverSpeed;

    // Check if if the speed is over or under the limit
    if (driverSpeed <= speedLimit)
        std::cout << "Your speed is legal. Drive safely!\n";
    else
        std::cout << "You are speeding! Expect a ticket.\n";
    
    return 0;
}