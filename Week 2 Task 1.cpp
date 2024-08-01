#include<iostream>
using namespace std;


class person{
    private:
    int age = 19;
    string name = "Shehraz";
    public:
    void display(){
        cout <<"The Name of the person is: " << name << endl;
        cout <<"The age of the person is: " << age << endl;
    }
};


int main()
{
    person p1;
    p1.display();

    return 0;
}