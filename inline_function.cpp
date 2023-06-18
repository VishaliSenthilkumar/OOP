// An inline function is a function that is expanded in line when it is invoked. 
// Inline expansion makes a program run faster because the overhead of a function call and return is eliminated. 
// It is defined by using key word “inline”

#include<iostream>
using namespace std;

inline float mul(float x, float y)
{
    return (x*y);
}
inline double div(double p, double q)
{   
    return (p/q);
}
int main()
{
    float a=12.345;
    float b=9.82;
    cout<<mul(a,b)<<endl;
    cout<<div(a,b)<<endl;
    return 0;
}


// Situations where inline does not work:
    // A function that is returning value , if it contains switch ,loop or both then it is treated as normal function.
    // if a function is not returning any value and it contains a return statement then it is treated as normal function
    // If function contains static variables then it is executed as normal function
    // If the inline function is declared as recursive function then it is executed as normal function.

// Inline expansion makes a program run faster because the overhead of a function call and return is eliminated.
// It takes the program more memory because the statement that define the inline function are reproduced at each point where the function is called.

