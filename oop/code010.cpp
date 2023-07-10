// Program-010: Encapsulation 
#include <iostream>
using namespace std; 

class Employee {
    private: 
        int salary;
    public: 
        /*void setSalary(int s) {
            salary = s; 
        } */

        void setSalary(int s); 

        int getSalary() {
            return salary; 
        }
}; 

void Employee::setSalary(int s) {
    salary = s; 
}

int main() {
    Employee myObj;
    myObj.setSalary(50000); 
    cout<<myObj.getSalary()<<endl; 
    return 0; 
}

