#include <iostream>
using namespace std;

enum Signal { Red, Yellow, Green };

int main() {
    Signal s = Red;

    if (s == Red) {
        cout << "Stop";
    }
    else if (s == Yellow) {
        cout << "Wait";
    }
    else {
        cout << "Go";
    }

    return 0;
}
