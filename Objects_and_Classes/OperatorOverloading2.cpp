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

        void output(){
            if(imag<0){
                cout<<"Output  complex number: "<<real<<imag<<"i"<<endl;
            }
            else{
                cout<<"Output  complex number: "<<real<<"+"<<imag<<"i"<<endl;
            }
        }
};

int main(int argc, char const *argv[])
{
    /* code */
    Complex c1, c2;
    c1.input();
    c2.input();
    Complex c3=c1+c2;
    c3.output();
    return 0;
}
