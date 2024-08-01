#include <iostream>
#include <stdexcept>
using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Custom Exception: Something went wrong!";
    }
};

void testFunction(int x) {
    if (x < 0) {
        throw MyException();
    } else {
        cout << "Input is positive: " << x << endl;
    }
}

int main() {
    try {
        testFunction(-1);  // This will throw a custom exception
    } catch (const MyException& e) {
        cout << e.what() << endl;
    }

    return 0;
}
