#include <iostream>
using namespace std;

struct Distance {
    int meter;
};

int main() {
    Distance d1, d2, d3;

    d1.meter = 10;
    d2.meter = 20;

    d3.meter = d1.meter + d2.meter;

    cout << "Total distance = " << d3.meter << " meters";

    return 0;
}
