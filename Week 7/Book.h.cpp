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
    Book();

    Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr);

    std::string getISBN() const;

    void changePrice(double newPrice);

    friend std::ostream& operator<<(std::ostream& os, const Book& book);
    bool operator==(const Book& otherBook) const;
};

#endif 