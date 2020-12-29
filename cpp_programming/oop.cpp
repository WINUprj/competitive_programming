#include <iostream> 
#include <string> 

using namespace std; 

class Box {
    public: 
        double length; 
        double breadth; 
        double height; 
}; 

// inheritence 
class ChristmasBox: public Box {
    public: 
        int getArea(){
            return (length * height); 
        }
}; 

int main(){
    // create an instance 
    Box box1; 

    box1.length = 50; 
    box1.breadth = 10; 
    box1.height = 5; 

    // cout the volume of box 
    double volume = box1.length * box1.breadth * box1.height;
    cout << "volume of box is: " << volume << endl; 
    return 0; 
}