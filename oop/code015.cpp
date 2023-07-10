// Program-015: Polymorphism ilustration 
#include <iostream>
using namespace std; 

class Animal{
    public:
        void animalSoud() {
            cout<<"The animal makes a sound\n"; 
        }
}; 

class Pig {
    public: 
        void animalSound() {
            cout<<"The pig says: wee wee \n"; 
        }
};

class Dog {
    public: 
        void animalSound() {
            cout<<"The dog says: bhaow bho \n"; 
        }
};

int main() {
    Animal myAnimal; 
    Pig myPig; 
    Dog myDog; 

    myAnimal.animalSoud(); 
    myPig.animalSound();
    myDog.animalSound();

    return 0;  
}