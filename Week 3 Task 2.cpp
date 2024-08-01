#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("names.txt");

    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string name;
    while (getline(inFile, name)) {
        cout << name << endl;
    }

    inFile.close();

    return 0;
}
