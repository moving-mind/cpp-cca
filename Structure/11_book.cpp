#include <iostream>
using namespace std;

struct Book {
    int pages;
    float price;
};

int main() {
    Book b;

    b.pages = 200;
    b.price = 150;

    cout << "Pages = " << b.pages << endl;
    cout << "Price = " << b.price;

    return 0;
}
