#include <iostream>
#include <iomanip>
#include "RectangleDefinitions.cpp"

using namespace std;

int main() {

    Rectangle kitchen, bedroom, livingRoom;

    double length, width;

    cout << "Enter the length of the kitchen: ";
    cin >> length;
    cout << "Enter the width of the kitchen: ";
    cin >> width;
    kitchen.setLength(length);
    kitchen.setWidth(width);

    cout << "Enter the length of the bedroom: ";
    cin >> length;
    cout << "Enter the width of the bedroom: ";
    cin >> width;
    bedroom.setLength(length);
    bedroom.setWidth(width);

    cout << "Enter the length of the living room: ";
    cin >> length;
    cout << "Enter the width of the living room: ";
    cin >> width;
    livingRoom.setLength(length);
    livingRoom.setWidth(width);

    cout << fixed << setprecision(2);
    
    cout << "\nRoom Details:\n";
    cout << "Kitchen: " << kitchen.getLength() << " x " << kitchen.getWidth() 
         << " = " << kitchen.getArea() << " sq units\n";
    cout << "Bedroom: " << bedroom.getLength() << " x " << bedroom.getWidth() 
         << " = " << bedroom.getArea() << " sq units\n";
    cout << "Living Room: " << livingRoom.getLength() << " x " << livingRoom.getWidth() 
         << " = " << livingRoom.getArea() << " sq units\n";


    double totalArea = kitchen.getArea() + bedroom.getArea() + livingRoom.getArea();
    cout << "Total apartment area: " << totalArea << " sq units\n";

    return 0;
}