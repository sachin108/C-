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

    char *chPtr;
    chPtr=(char*)pointer;   // typecasting
    
    cout<< chPtr<<endl;
    cout<< *chPtr<<endl;
    return 0;
}
