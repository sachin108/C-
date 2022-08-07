#include<iostream>
#include<string>
using namespace std;

class Person{
    public:                  // members are public 
        string name;                    
        int age;

        Person(){     //default constructor has no parameter
            name="Jaime";
            age=30;
        }

        Person(string Name, int Age){     //parametrized constructor
            name=Name;
            age=Age;
        }

        Person(Person &x){     //copy constructor
            name=x.name;
            age=x.age;
        }
};

int main(int argc, char const *argv[]){
    Person p1; // default constructor has been called automatically
    cout<<p1.name<<endl<<p1.age<<endl;

    Person p2("Caraxes", 145);  //parametrized constructor called
    cout<<p2.name<<endl<<p2.age<<endl;

    Person p3=p2;
    cout<<p3.name<<endl<<p3.age<<endl;

    return 0;
}
