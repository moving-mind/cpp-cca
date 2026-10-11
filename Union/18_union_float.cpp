#include <iostream>
using namespace std;

union Data {
    int number;
    float decimal;
};

int main() {
    Data d;

    d.decimal = 5.5;

    cout << "Decimal = " << d.decimal;

    return 0;
}
