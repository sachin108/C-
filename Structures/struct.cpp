#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    int age;
    string natioanlity;
};

int main(int argc, char const *argv[]){
    Person p1;
    cout<<"Enter name of person";
    cin>>(p1.name);
    cout<<"Enter age of person";
    cin>>(p1.age);
    cout<<"Enter nationality of person";
    cin>>(p1.natioanlity);
    cout<<p1.name<<endl<<p1.age<<endl<<p1.natioanlity<<endl;
    return 0;
}
