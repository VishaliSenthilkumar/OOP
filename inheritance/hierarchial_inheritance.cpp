// Inheriting is a method of inheritance where one or more derived classes is derived from common base class.

                //         A
                //         |
                // -----------------      
                // |       |       |
                // B       C       D
                
#include<iostream>
using namespace std;
class A  // Base class
{
public:
    int a,b;
    void getnumber()
    {
        cout<<"\nEnter Number : ";
        cin>>a;
    }
};
class B : public A //Derived Class 1
{
public:
    void square()
    {
        getnumber(); 
        cout<<"Square of the number : "<<(a*a)<<endl;
    }
};
class C :public A //Derived Class 2
{
public:
    void cube()
    {
        getnumber(); 
        cout<<"Cube of the number : "<<(a*a*a)<<endl;
    }
};
int main()
{
    B b1; 
    b1.square(); 
    C c1; 
    c1.cube(); 
    return 0;
}
