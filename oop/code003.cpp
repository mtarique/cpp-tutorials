// Program-003: Method or function defination inside the class
#include <iostream>
using namespace std; 

class MyClass {
    public: 
        void myMethod() {
            cout<<"Hello World!"; 
        }
}; 

int main() {
    MyClass myObj; 
    myObj.myMethod(); 

    return 0;
}