// Hybrid inheritance is combination of two or more inheritances such as single,multiple,multilevel or Hierarchical inheritances.

#include<iostream>
using namespace std;
class arithmetic
{
    public:
    int num1, num2;
    void getdata()
    {
        cout<<"For Addition:";
        cout<<"\nEnter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
    }
};
class Plus:public arithmetic
{
    public:
    int sum;
    void add()
    {
        sum=num1+num2;
    }
};
class Minus
{
    public:
    int n1,n2,diff;
    void sub()
    {
        cout<<"For Subtraction:";
        cout<<"\nEnter the first number: ";
        cin>>n1;
        cout<<"Enter the second number: ";
        cin>>n2;
        diff=n1-n2;
    }
};
class result:public Plus, public Minus
{
public:
    void display()
    {
        cout<<"\nSum of "<<num1<<" and "<<num2<<" = "<<sum;
        cout<<"\nDifference of "<<n1<<" and "<<n2<<" = "<<diff;
    }
};
int main()
{
    result z;
    z.getdata();
    z.add();
    z.sub();
    z.display();
    return 0;
}
