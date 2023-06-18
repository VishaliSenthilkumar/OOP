// An unary operator means, an operator which works on single operand. 
// For example, ++ is an unary operator, it takess single operand (c++).

#include<iostream>
using namespace std;
class space
{
    int x,y,z;
    public:
    void getdata(int a,int b,int c);
    void display();
    void operator-();
};
void space :: getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void space :: display()
{
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
}
void space :: operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    space s;
    s.getdata(10,-20,30);
    s.display();
    -s;
    cout<<"after negation\n";
    s.display();
}

