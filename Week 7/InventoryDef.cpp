#include "Inventory.h.cpp"


Inventory::Inventory(int size) : nextEntry(0), length(size) {
    books = new Book[length];  
}

// Destructor
Inventory::~Inventory() {
    delete[] books;  
}

bool Inventory::addBook(const Book& theBook) {
    if (nextEntry >= length) {
        return false;  
    }

    for (int i = 0; i < nextEntry; i++) {
        if (books[i] == theBook) {  
            return false;
        }
    }

    books[nextEntry] = theBook;
    nextEntry++;
    return true;
}


void Inventory::changePrice(const std::string& isbn, double newPrice) {
    for (int i = 0; i < nextEntry; i++) {
        if (books[i].getISBN() == isbn) {
            books[i].changePrice(newPrice);
            return;
        }
    }
}

void Inventory::printInventory() const {
    std::cout << "-----------------------------------------------------------------------------------------\n";
    std::cout << "ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE\n";
    std::cout << "-----------------------------------------------------------------------------------------\n";
    for (int i = 0; i < nextEntry; i++) {
        std::cout << books[i] << std::endl;
    }
    std::cout << "-----------------------------------------------------------------------------------------\n";
}
