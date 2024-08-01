#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() 
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Vector elements:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    numbers.push_back(6);
    numbers.pop_back();

    map<int, string> idToName;
    idToName[1] = "Shehraz";
    idToName[2] = "Moiz";
    idToName[3] = "Wasiq";

    cout << "Map elements:" << endl;
    for (const auto &pair : idToName) 
    {
        cout << "ID: " << pair.first << ", Name: " << pair.second << endl;
    }

    return 0;
}
