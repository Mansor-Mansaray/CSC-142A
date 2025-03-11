#include "Book.h.cpp"

#include "Book.h.cpp"

Book::Book() : codeNum(""), author(""), title(""), edition(0), pubCode(""), price(0.0) {}


Book::Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr)
    : codeNum(cn), author(au), title(ti), edition(ed), pubCode(pc), price(pr) {}


std::string Book::getISBN() const {
    return codeNum;
}

void Book::changePrice(double newPrice) {
    price = newPrice;
}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << std::left << std::setw(12) << book.codeNum
       << std::setw(15) << book.author.substr(0, 14) 
       << std::setw(40) << book.title.substr(0, 39)  
       << std::setw(4) << book.edition
       << std::setw(4) << book.pubCode
       << "$" << std::right << std::setw(8) << std::fixed << std::setprecision(2) << book.price;
    return os;
}

bool Book::operator==(const Book& otherBook) const {
    return this->codeNum == otherBook.codeNum;
}
