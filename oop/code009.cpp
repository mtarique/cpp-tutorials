// Program-009: Access specifiers
#include <iostream>
using namespace std; 

class MyClass {
    public:
        int x; 
    private:
        int y;
}; 

int main() {
    MyClass myObj; 
    myObj.x = 25; // Alowed public
    myObj.y = 50; // Not allowed (private)
    return 0; 
}