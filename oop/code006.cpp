// Program-006: Constructor 
// Constructor is a speacial method that is automatically 
// called when an object of a class is created
#include <iostream>
using namespace std; 

class MyClass {
    public: 
        // Constructor
        MyClass() {
            cout<<"A constructor is a speacial method that is automatically called when an object is called."<<endl; 
            cout<<"Note: The constructor has the same name as class, it is public, and it does not have any return value."<<endl;
        }
}; 

int main() {
    MyClass myObj; 
    return 0;
}