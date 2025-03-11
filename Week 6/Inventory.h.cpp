#ifndef INVENTORY_H
#define INVENTORY_H

#include "Book.h.cpp"

class Inventory {
private:
    Book* books; 
    int nextEntry; 
    int length; 

public:
    Inventory(int size);
    ~Inventory();

    bool addBook(const Book& theBook);
    void changePrice(const std::string& isbn, double newPrice);
    void printInventory() const;
};

#endif 
