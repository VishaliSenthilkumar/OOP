// We can access the private members of a class by a non member function using friend function.
// declaration shoild be preceeded by friend keyword.

#include<iostream>
using namespace std;

class XYZ;                                    // forward declaration

class ABC
{
    int a;
    public:
    void setvalue(int i)
    {
        a = i;
    }
    friend void max(ABC , XYZ );               // function declaration
};

class XYZ                         
{
    int b;
    public:
    void setvalue(int i)
    {
        b = i;
    }
    friend void max(ABC , XYZ );               // function declaration
};

void max(ABC obj1, XYZ obj2)                   // function definition
{
    if(obj1.a>=obj2.b)
    {
        cout<<"Object 1 is greater"<<endl;
    }
    else
    {
        cout<<"Object 2 is greater"<<endl;
    }
}

int main()
{
    ABC obj1;
    obj1.setvalue(3);
    XYZ obj2;
    obj2.setvalue(2);
    max(obj1,obj2);
    return 0;
}
