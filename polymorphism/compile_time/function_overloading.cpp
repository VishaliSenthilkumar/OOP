// Polymorphism means the ability to take more than one form.
// Overloading refers to the use of the same thing for different purposes.
// same function name for variety of different tasks.
// also known as finctional polymorphism


#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"fun 1"<<endl;
    return a+b;
}

double sum(int a, double b)
{
    cout<<"fun 2"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"fun 3"<<endl;
    return a+b+c;
}

int main()
{
    cout<<sum(1,2)<<endl;
    cout<<sum(1.2,2.1)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2.1)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1.2,2.1,3.2)<<endl;
}