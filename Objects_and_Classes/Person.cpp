#include<iostream>
#include<string>
using namespace std;

class Person{
    public:                  // members are public 
        string name;                    
        int age;

    private:                // members can't be accessed outside class
        string id;
    
    public:
        void initID(string Id){     //parameter name should not be same as class field
            id=Id;
        }
        string info(){
            return "name = "+name+" age = "+to_string(age)+" id = "+id;
        }
};

int main(int argc, char const *argv[]){
    Person p1;
    p1.name="Rhenys";
    p1.age=14;
    p1.initID("CFXsunFyre");
    cout<<p1.info();
    return 0;
}
