#include <iostream>
using namespace std;

class MyClass {
    public: 
        int myNum; 
        string myString; 
};

int main() {
    MyClass obj1; // Create an object of MyClass

    // Access attributes
    obj1.myNum = 15; 
    obj1.myString = "Hello World!"; 

    // Print attribute value
    cout<<obj1.myNum<<endl; 
    cout<<obj1.myString<<endl; 

    return 0;
}



