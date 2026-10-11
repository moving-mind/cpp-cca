#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int *p = &a;
    int *q = &b;

    cout << "Sum = " << *p + *q;

    return 0;
}
