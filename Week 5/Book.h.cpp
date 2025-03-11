#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string codeNum;
    std::string author;
    std::string title;
    int edition;
    std::string pubCode;
    double price;

public:
    Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr);

    std::string getTitle() const;
    std::string getAuthor() const;
    double getPrice() const;
    int getEdition() const;
    std::string getISBN() const;
    std::string getPubCode() const;

    void changePrice(double newPrice);
};

#endif
