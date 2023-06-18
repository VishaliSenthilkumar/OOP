// In this type of inheritance the derived class inherits from a class, which in turn inherits from some other class. 
// The Super class for one, is sub class for the other.

                // A 
                // |
                // B 
                // |
                // C 

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
    public:
    int c;
    void add()
    {
        c=a+b;
    }
};

class C:public B
{
    public:
    void show()
    {
        cout<<a<<"+"<<b<<"="<<c;
    }
};

int main()
{
    C c;
    c.get();
    c.add();
    c.show();
}

