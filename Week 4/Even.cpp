// Even.cpp, 2/12/2025, Mansor Amond-Mansaray, This code checks the first 1000 random numbers and determines the number of even and odd numbers generated.

#include <iostream>
#include <fstream>
#include <ctime>

// This function is to check if the number is even
bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    std::srand(std::time(0)); 
    const int TOTAL_NUMBERS = 1000;
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < TOTAL_NUMBERS; ++i) {
        int randomNumber = std::rand() % 101;
        if (isEven(randomNumber)) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    std::cout << "==============================\n";
    std::cout << "     RANDOM NUMBER GENERATOR     \n";
    std::cout << "==============================\n";
    std::cout << "Total numbers generated: " << TOTAL_NUMBERS << "\n";
    std::cout << "Even numbers count: " << evenCount << " (" << (evenCount * 100.0 / TOTAL_NUMBERS) << "%)\n";
    std::cout << "Odd numbers count:  " << oddCount << " (" << (oddCount * 100.0 / TOTAL_NUMBERS) << "%)\n";
    std::cout << "==============================\n";

    return 0;
}