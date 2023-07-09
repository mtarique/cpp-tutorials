// Program-008: Constructor parameter defining constructor method outside the class
#include <iostream>
using namespace std; 

class Car {
    public: 
        string brand; 
        string model;
        int year; 
        Car(string b, string m, int y); 
}; 

Car::Car(string b, string m, int y) {
    brand = b; 
    model = m; 
    year = y; 
}

int main() {
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "mustang", 1969);

     // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0; 
}