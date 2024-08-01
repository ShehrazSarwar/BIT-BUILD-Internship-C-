#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 5.5, double2 = 2.2;
    char char1 = 'a', char2 = 'z';

    cout << "Maximum of " << int1 << " and " << int2 << " is: " << findMax(int1, int2) << endl;
    cout << "Maximum of " << double1 << " and " << double2 << " is: " << findMax(double1, double2) << endl;
    cout << "Maximum of " << char1 << " and " << char2 << " is: " << findMax(char1, char2) << endl;

    return 0;
}
