#include <iostream>
#include <cstdio>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int secret = (std::rand() % 10) + 1;
    int guess;
    std::cout << " guess a number between 1 and 10";

    do {
        std::cin >> guess;

        if (guess < secret) {
            std::cout << "wrong Number, Try Again:";
        }
        if (guess > secret) {
            std::cout << "wrong Number, Try Again:";
        }
    } while ((guess - secret) * (guess - secret));

    std::cout << "You guessed the right number, congrats!";
    return 0;1
}







