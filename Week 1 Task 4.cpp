#include <iostream>
using namespace std;

int main() {
    int sum = 0;    
    int number = 1;  

   
    while (number <= 10) 
    {
        sum = sum + number;  
        number++;       
    }

    cout << "The sum of numbers from 1 to 10 is: " << sum << endl;

    return 0;
}
