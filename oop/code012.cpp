// Program-012: Multilevel inheritance
#include <iostream>
using namespace std; 

class ParentClass {
    public: 
        string question; 
}; 

class ChildClass: public ParentClass {
    public: 
        string answer;
}; 

class GrandChildClass: public ChildClass {
    public: 
        void printQandA() {
            cout<<question<<endl; 
            cout<<answer<<endl; 
        }
}; 

int main() {
    GrandChildClass obj; 
    obj.question = "What is multilevel inheritance?"; 
    obj.answer = "A class can also be derived from one class, which is already derived from another class."; 
    obj.printQandA(); 
    return 0; 
}