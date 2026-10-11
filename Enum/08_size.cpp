#include <iostream>
using namespace std;

enum Size { Small = 1, Medium, Large };

int main() {
    Size s = Medium;

    cout << "Size value = " << s;

    return 0;
}
