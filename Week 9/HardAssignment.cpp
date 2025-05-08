#include <iostream>
#include <string>

enum class CharacterClass { Paliden, Sorcerer, Scout, Rogue };


struct Character {
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};


std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Paliden: return "Paliden";
        case CharacterClass::Sorcerer:    return "Sorcerer";
        case CharacterClass::Scout:  return "Scout";
        case CharacterClass::Rogue:   return "Rogue";
        default:                      return "Unknown";
    }
}

int main() {
 
    Character characters[4]{
      
        {"Aragon",  CharacterClass::Paliden, 100, 90.5f},
        {"Gandalf", CharacterClass::Sorcerer,    120, 75.0f},
        {"Legolas", CharacterClass::Scout,   85, 80.0f},
        {"Frodo",   CharacterClass::Rogue,    80, 60.5f}
    };

    std::cout << "Characters:\n------------\n";

                      for (int i = 0; i < 4; i++) {
        std::cout << "Name: " << characters[i].name << ", Type: " << classToString(characters[i].type)
                  << ", Health: " << characters[i].health
                  << ", Strength: " << characters[i].strength
                  << std::endl;
    }

    int sumHealth = 0;
    for (int i = 0; i < 4; i++) {
        sumHealth += characters[i].health;
    }
  
    float avgHealth = static_cast<float>(sumHealth) / 4.0f;
    
    std::cout << "\nAverage Health: " << avgHealth << std::endl;


    return 0;
}
