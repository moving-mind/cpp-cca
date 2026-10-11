#include <iostream>
using namespace std;

struct Student {
    int roll;
    int marks;
};

int main() {
    Student s;

    s.roll = 1;
    s.marks = 85;

    cout << "Roll number = " << s.roll << endl;
    cout << "Marks = " << s.marks;

    return 0;
}
