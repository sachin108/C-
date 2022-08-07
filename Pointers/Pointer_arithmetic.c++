#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    int *pointer;
    number=108;
    pointer=&number;
    cout<<sizeof(int)<<endl;

    cout<< pointer<<endl; // address of var pointer points to
    cout<< pointer+1<<endl; // (address of var pointer points to)+4 bcz sizeof integer=4 bytes 

    cout<< &pointer<<endl; // address of pointer variable
    cout<< *pointer<<endl; // value of var pointer points (dereferencing)

    cout<< number<<endl; 
    cout<< &number;     // address of number in memory

    return 0;
}
