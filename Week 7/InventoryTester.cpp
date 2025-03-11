// Mansor Amond-Mansaray 3/9/2025, This file declares the Inventory class. It has a private member variable, books, which is an array of Book objects.
// The class has a parameterized constructor that takes an integer value to set the size of the array. The program is set to reject books when the capacity of the array is reached.

#include "Inventory.h.cpp"

int main() {
    // Step 1: Create Inventory object with size 10
    Inventory inventory(10);

    // Step 2: Create and add books
    struct BookEntry {
        std::string isbn, author, title, pubCode;
        int edition;
        double price;
    };

    BookEntry bookList[] = {
        {"013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75},
        {"0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00},
        {"0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84},
        {"002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00},
        {"1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95},
        {"0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70},
        {"0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95},
        {"0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95},
        {"013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 145.38},  // Duplicate
        {"1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38},
        {"0134802217", "Tony Gaddis", "Starting Out With Java: From Control Structures through Objects", "7", "PE", 188.95},
        {"0134462017", "Tony Gaddis", "Starting Out With Java: Early Objects", 6, "PE", 58.50}
    };

    for (const auto& b : bookList) {
        Book book(b.isbn, b.author, b.title, b.edition, b.pubCode, b.price);
        if (!inventory.addBook(book)) {
            std::cout << "ERROR adding this book: " << b.isbn << std::endl;
        }
    }

    // Step 3: Print initial inventory
    std::cout << "\nInitial Inventory Report:\n";
    inventory.printInventory();

    // Step 4: Change book prices
    struct PriceChange {
        std::string isbn;
        double newPrice;
    };

    PriceChange priceChanges[] = {
        {"013478796X", 50.00},
        {"0143067889", 9.95},
        {"0134743350", 100.00}
    };

    for (const auto& p : priceChanges) {
        std::cout << "Changing price of " << p.isbn << " to $" << std::fixed << std::setprecision(2) << p.newPrice << std::endl;
        inventory.changePrice(p.isbn, p.newPrice);
    }

    // Step 5: Print final inventory
    std::cout << "\nFinal Inventory Report:\n";
    inventory.printInventory();

    return 0;
}
