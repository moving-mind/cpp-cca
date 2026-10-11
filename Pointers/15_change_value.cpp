#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    *p = 50;

    cout << "Value of a = " << a;

    return 0;
}
