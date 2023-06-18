// one derived class inherits from only one base class. 
// It is the most simplest form of Inheritance.

            // A 
            // |
            // |
            // B 

#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    void get()
    {
        cout<<"Enter any two Integer values"<<endl;
        cin>>a>>b;
    }
};
class B:public A
{
    int c;
    public:
    void add()
    {
        c=a+b;
        cout<<a<<"+"<<b<<"="<<c;
    }
};
int main()
{
    B b;
    b.get();
    b.add();
}
