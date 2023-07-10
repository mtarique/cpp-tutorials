// Program-011: Inheritance
#include <iostream>
using namespace std; 

// Base or parent class
class Vehicle {
    public: 
        string brand = "Ford"; 
        void honk() {
            cout<<"Tuut, Tuut! \n"; 
        }
}; 

// Derived or child class
class Car: public Vehicle {
    public: 
        string model = "Mustang"; 
}; 

int main() {
    Car myCar; 
    myCar.honk(); 
    cout<<myCar.brand+" "+myCar.model; 
    return 0; 
}
