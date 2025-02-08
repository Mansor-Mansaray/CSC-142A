#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream inFile("maryLamb.txt");
    if (!inFile) {
        std::cerr << "Error: Unable to open file!\n";
        return 1;
    }

    std::string line;
    int lineNumber = 1;

    while (std::getline(inFile, line)) {
        std::cout << lineNumber << ": " << line << std::endl;
        lineNumber++;
    }
    
    inFile.close();
    return 0;
}
