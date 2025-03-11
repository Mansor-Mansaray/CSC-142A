#include "Book.h.cpp"

// Default constructor
Book::Book() : codeNum(""), author(""), title(""), edition(0), pubCode(""), price(0.0) {}

// Parameterized constructor
Book::Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr)
    : codeNum(cn), author(au), title(ti), edition(ed), pubCode(pc), price(pr) {}

// Accessor methods
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
int Book::getEdition() const { return edition; }
std::string Book::getISBN() const { return codeNum; }
std::string Book::getPubCode() const { return pubCode; }
double Book::getPrice() const { return price; }

// Mutator method
void Book::changePrice(double newPrice) {
    price = newPrice;
}

// Print method for displaying a book's details
void Book::printBook() const {
    std::cout << std::left << std::setw(12) << codeNum
              << std::setw(15) << author
              << std::setw(40) << title.substr(0, 35)  // Truncate title for formatting
              << std::setw(4) << edition
              << std::setw(4) << pubCode
              << "$" << std::right << std::setw(8) << std::fixed << std::setprecision(2) << price
              << std::endl;
}
