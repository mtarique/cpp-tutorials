// Program-013: Multiple inheritance
#include <iostream>
using namespace std; 

class MyClass {
    public: 
        void myFunction() {
            cout<<"Some content in parent class.\n"; 
        }
}; 

class MyOtherClass {
    public: 
        void myOtherFunction() {
            cout<<"Some content in another class."; 
        }
}; 

class MyChildClass: public MyClass, public MyOtherClass {

}; 

int main() {
    MyChildClass myObj; 
    myObj.myFunction(); 
    myObj.myOtherFunction(); 
    return 0; 
}