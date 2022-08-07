//UNARY OPERATOR OVERLOADING

#include<iostream>
#include<string>
using namespace std;

class Room{
    public:                         // all members are public 
        int length, breadth, height;

        Room(){
            length=10;
        }
        
        // Overload ++ when used as prefix
        int operator ++(){
           return --length;
        }   // sign is ++ but it will work like --

        // Overload ++ when used as postfix
        void operator ++ (int) {
            length++;
        }
};

int main(int argc, char const *argv[]){
    Room r1;
    cout<<"BEFORE : Length of room = "<<r1.length<<endl;

    int x=++r1; // will call prefix
    cout<<"AFTER : Length of room = "<<x<<endl;
    
    return 0;
}
