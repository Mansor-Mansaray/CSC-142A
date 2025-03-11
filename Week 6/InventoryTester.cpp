// Mansor Amond-Mansaray 3/9/2025, This file declares the Inventory class. It has a private member variable, books, which is an array of Book objects. The class has a parameterized constructor that takes an integer value to set the size of the array.
// The class has a member function, addBook, that takes a Book object and adds it to the array. The class has a member function, changePrice, that takes an ISBN number and a new price, and changes the price of the book with the given ISBN number.

#include "Inventory.h.cpp"

int main() {
    Inventory inventory(10);

    inventory.addBook(Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75));
    inventory.addBook(Book("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00));
    inventory.addBook(Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84));
    inventory.addBook(Book("002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00));
    inventory.addBook(Book("1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95));
    inventory.addBook(Book("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70));

    std::cout << "Initial Inventory:" << std::endl;
    inventory.printInventory();

    std::cout << "\nUpdating Prices..." << std::endl;
    inventory.changePrice("013478796X", 50.00);
    inventory.changePrice("0143067889", 9.95);
    inventory.changePrice("0134743350", 100.00);

    std::cout << "\nFinal Inventory:" << std::endl;
    inventory.printInventory();

    return 0;
}