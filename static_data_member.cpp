// A data member of a class can be qualified as static.
// Syntax:
    // Data type class name::static_variable Name;

#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;
    public:
    void getdata(int a)
    {
        number=a;
        count++;
    }
    void getcount()
    {
        cout<<"count is "<<count<<endl;
    }
};
int item::count;       //decleration
int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout<<"After reading data"<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}

// Characteristics of static member variable:
    // It is initialized to zero when the first object of its class is created. No other initialization is permitted.
    // Only one copy of that member is created for the entire class and is shared by all the objects of that class.
    // It is visible only within the class, but its lifetime is the entire program.
    // Static data member is defined by keyword static.