#include <iostream>
#include <iomanip>
#include "BookDef.cpp"

using namespace std;

void printBooks(const Book &b1, const Book &b2, const Book &b3) {
    cout << "----------------------------------------------------------------------------------------\n";
    cout << left << setw(13) << "ISBN" << setw(15) << "AUTHOR" << setw(45) << "TITLE" 
         << setw(4) << "ED" << setw(6) << "PUB" << right << setw(8) << "PRICE" << endl;
    
    cout << left << setw(13) << b1.getISBN() << setw(15) << b1.getAuthor() 
         << setw(45) << b1.getTitle().substr(0, 42) << setw(4) << b1.getEdition() 
         << setw(6) << b1.getPubCode() << right << setw(8) << fixed << setprecision(2) 
         << "$ " << b1.getPrice() << endl;

    cout << left << setw(13) << b2.getISBN() << setw(15) << b2.getAuthor() 
         << setw(45) << b2.getTitle().substr(0, 42) << setw(4) << b2.getEdition() 
         << setw(6) << b2.getPubCode() << right << setw(8) << fixed << setprecision(2) 
         << "$ " << b2.getPrice() << endl;

    cout << left << setw(13) << b3.getISBN() << setw(15) << b3.getAuthor() 
         << setw(45) << b3.getTitle().substr(0, 42) << setw(4) << b3.getEdition() 
         << setw(6) << b3.getPubCode() << right << setw(8) << fixed << setprecision(2) 
         << "$ " << b3.getPrice() << endl;

    cout << "----------------------------------------------------------------------------------------\n";
}

int main() {

    Book book1("013478796X", "Tony Gaddis", 
               "Starting Out With Java: From Control Structures through Data Structures", 
               4, "PE", 118.30);
    
    Book book2("0321409493", "John Lewis", 
               "Java Software Solutions: Foundations of Program Design", 
               5, "AW", 94.05);

    Book book3("0134743350", "Harvey Deitel", 
               "Java How to Program, Early Objects", 
               12, "PE", 134.84);

 
    printBooks(book1, book2, book3);

    cout << "Changing book1 price from $ 118.30 to $ 145.68\n";
    book1.changePrice(145.68);

    cout << "Changing book2 price from $ 94.05 to $ 117.79\n";
    book2.changePrice(117.79);

    cout << "Changing book3 price from $ 134.84 to $ 59.99\n";
    book3.changePrice(59.99);

    
    printBooks(book1, book2, book3);

    return 0;
}
