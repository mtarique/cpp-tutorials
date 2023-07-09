// Program-004: Method or function defination outside of the class
#include <iostream>
using namespace std;

class MyClass {
    public: 
        void myMethod(); // Method or function declaration
}; 

// Method or function defination 
void MyClass::myMethod() {
    cout<<"Method or function defined outside of class."<<"\n"; 
}

int main() {
    MyClass myObj; 
    myObj.myMethod(); 
    return 0; 
}

