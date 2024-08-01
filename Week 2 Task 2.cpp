#include <iostream>
#include <string>
using namespace std;

class Vehicle 
{
protected:
    string make;
    string model;

public:
    // Constructor
    Vehicle(const string &make, const string &model) : make(make), model(model) {}

    virtual void displayInfo() const 
    {
        cout << "Make: " << make << ", Model: " << model << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle 
{
private:
    int numberOfDoors;

public:
    // Constructor
    Car(const string &make, const string &model, int numberOfDoors): Vehicle(make, model), numberOfDoors(numberOfDoors) {}

    void displayInfo() const
    {
        cout << "Make: " << make << ", Model: " << model << ", Number of Doors: " << numberOfDoors << endl;
    }
};

int main() 
{
    Vehicle *BossCar = new Car("Shehraz KI", "Mehran", 4);

    BossCar->displayInfo();

    // Clean up memory or we can say deallocation
    delete BossCar;

    return 0;
}
