#include<iostream>
using namespace std;

int x=1;
class Test{
    public:
            Test(){
                cout<<"\n Number "<<x++<<" object created";
            }

            ~Test(){
                cout<<"\n Number "<<x--<<" object destroyed";
            }
};

int main(){
	Test t1,t2, t3;
    x--;
    cout<<endl<<"destructor will be called just before the end of program execution"<<endl;
	return 0;
}
