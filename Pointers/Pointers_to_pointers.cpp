#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    int number=10;
    int *pointer;
    pointer=&number;

    int **ptr; // pointer to a pointer
    ptr=&pointer;

    int ***ptr3; // pointer to pointer to a pointer
    ptr3=&ptr;
    //dereferencing
    cout<<  *pointer<<endl;
    cout<<  **ptr<<endl;
    cout<<  ***ptr3<<endl;

    cout<< &pointer<<endl; //address of pointer
    cout<< ptr<<endl;       // address of var ptr pointing
    cout<< *ptr3<<endl;           

    ***ptr3=16;
    cout<<*pointer;

    return 0;
}
