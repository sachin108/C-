#include<iostream>
#include<string>
using namespace std;

class Room{
    public:
        int length, breadth, height;

        int areaOfRoom(){
            return length*breadth;
        }

        int volumeOfRoom(){
            return length*breadth*height;
        }
};

int main(int argc, char const *argv[]){
    Room r1, r2;
    r1.length=10, r1.breadth=15, r1.height=5;
    r2.length=11, r2.breadth=14, r2.height=6;
    cout<<r1.areaOfRoom()<<endl;
    cout<<r2.volumeOfRoom()<<endl;
    return 0;
}
