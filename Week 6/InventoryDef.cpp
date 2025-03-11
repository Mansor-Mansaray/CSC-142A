#include "Inventory.h.cpp"

// Constructor
Inventory::Inventory(int size) : nextEntry(0), length(size) {
    books = new Book[length];  // Allocate dynamic array
}

// Destructor
Inventory::~Inventory() {
    delete[] books;  // Free dynamically allocated memory
}

// Method to add a book to the inventory
bool Inventory::addBook(const Book& theBook) {
    if (nextEntry < length) {
        books[nextEntry] = theBook;
        nextEntry++;
        return true;
    }
    return false;  // Inventory full
}

// Method to change the price of a book by ISBN
void Inventory::changePrice(const std::string& isbn, double newPrice) {
    for (int i = 0; i < nextEntry; i++) {
        if (books[i].getISBN() == isbn) {
            books[i].changePrice(newPrice);
            return;
        }
    }
}

// Method to print the inventory
void Inventory::printInventory() const {
    std::cout << "-------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "ISBN        AUTHOR          TITLE                                    ED  PUB      PRICE" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------" << std::endl;
    for (int i = 0; i < nextEntry; i++) {
        books[i].printBook();
    }
    std::cout << "-------------------------------------------------------------------------------------------------" << std::endl;
}
