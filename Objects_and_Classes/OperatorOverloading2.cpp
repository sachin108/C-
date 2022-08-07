// BINARY OPERATOR OVERLOADING

#include<iostream>
#include<string>
using namespace std;

class Complex{
    private:
        float real, imag;

    public:
        Complex(){
            real=0;
            imag=0;
        }

        void input(){
            cout<<"enter real and imaginary parts respectively"<<endl;
            cin>>real;
            cin>>imag;
        }

        Complex operator + (const Complex &obj){
            Complex temp;
            temp.real=real+obj.real;
            temp.imag=imag+obj.imag;
            return temp;
        }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
