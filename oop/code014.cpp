// Program-014: Inheritance access specifiers (protected)
#include <iostream>
using namespace std; 

class Employee {
    protected: 
        int salary; 
}; 

class Programmer: public Employee {
    public: 
        int bonus; 
        void setSalary(int s) {
            salary = s; 
        }

        int getSalary() {
            return salary; 
        }
}; 

int main() {
    Programmer myObj; 
    myObj.setSalary(50000); 
    myObj.bonus = 15000; 
    myObj.getSalary();
    cout<<"Salary: "<<myObj.getSalary()<<"\n"; 
    cout<<"Bonus:  "<<myObj.bonus;
    return 0; 
}