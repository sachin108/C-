#include<iostream>
#include<string>
using namespace std;

void x(int* a, int size){
    for(int i=0;i<size;i++)
        a[i]=2*a[i];
}

int main(int argc, char const *argv[])
{
    int array[]={1,2,3,5,6,5};
    for (int i = 0; i < 6; i++){
        cout<<*(array+i)<<" "<<array+i<<endl;
    }
    x(array, 6);
    for(int i:array)
        cout<<i<<"  ";
    return 0;
}
