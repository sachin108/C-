#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    int *pointer;
    cout<< pointer<<endl; // pointing to some random memory location
    cout<< &pointer<<endl; // address of pointer variable
    cout<< *pointer<<endl; // garbage value of memory location pointer pointing to
    cout<< number<<endl; // garbage value
    cout<< &number<<endl;     // address of number in memory

    number=108;
    pointer=&number;

    cout<< pointer<<endl; // address of var pointer points to
    cout<< &pointer<<endl; // address of pointer variable
    cout<< *pointer<<endl; // value of var pointer points (dereferencing)

    *pointer = 11; // changes value of number 
    cout<< number<<endl; 
    cout<< &number;     // address of number in memory

    return 0;
}
