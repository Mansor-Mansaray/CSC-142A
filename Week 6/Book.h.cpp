#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <iomanip>

class Book {
private:
    std::string codeNum;
    std::string author;
    std::string title;
    int edition;
    std::string pubCode;
    double price;

public:
    // Default constructor
    Book();

    // Parameterized constructor
    Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr);

    // Accessor methods
    std::string getTitle() const;
    std::string getAuthor() const;
    int getEdition() const;
    std::string getISBN() const;
    std::string getPubCode() const;
    double getPrice() const;

    // Mutator method
    void changePrice(double newPrice);

    // Print method for displaying a book's details
    void printBook() const;
};

#endif // BOOK_H
