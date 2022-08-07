#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    int *pointer;
    number=108;
    pointer=&number;
 
    cout<< *pointer<<endl; // value of var pointer points (dereferencing)
    cout<< pointer<<endl;

    void *vp;
    vp= &number;

    // vp and pointer referring to same memory location

    cout<< vp<<endl;
    return 0;
}
// void pointers can store address of any kind of variable
// void pinters can't be derefrenced
// can't perform arithmetic ops with them