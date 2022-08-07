#include<iostream>
#include<string>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int a=10, b=67;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    swap(&a, &b);
    cout<<"a = "<<a<<" b = "<<b;
    return 0;
}
