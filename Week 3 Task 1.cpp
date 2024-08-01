#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("names.txt");

    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    outFile << "Shehraz\n";
    outFile << "Moiz\n";
    outFile << "Wasiq\n";

    outFile.close();
    cout << "Names have been saved." << endl;

    return 0;
}
