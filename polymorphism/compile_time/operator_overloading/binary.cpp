// An binary operator means, an operator which works on two operands. 
// For example, + is an binary operator, it takes single operand (c+d).

#include<iostream>
using namespace std;
class complex
{
    float real,img;
    public:
    complex(){ }
    complex(float x, float y)
    {
        real=x;
        img=y;
    }
    complex operator+(complex c);
    void display();
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}
void complex::display()
{
    int imag=img;
    if(img<0)
    {
        imag=-imag;
        cout<<real<<"-i"<<imag;
    }
    else
        cout<<real<<"+i"<<img;
}
int main()
{
    complex c1,c2,c3;
    c1=complex(2.5,3.5);
    c2=complex(1.6,2.7);
    c3=c1+c2;
    c3.display();
    return 0;
}
