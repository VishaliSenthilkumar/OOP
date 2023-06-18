// A destructor, is used to destroy the objects that have been created by a constructor.
// Like a constructor, the destructor is a member function whose name is the same as the class name but is preceded by a tilde.

    // 1. A destructor never takes any argument nor does it return any value.
    // 2. It will be invoked implicitly by the compiler upon exit from the program to clean up storage that is no longer accessible.
    // 3. It is a good practice to declare destructors in a program since it releases memory space for future use.

#include<iostream>
using namespace std;
class Marks
{
    public:
    int maths;
    int science;
    //constructor
    Marks() 
    {
        cout << "Inside Constructor"<<endl;
        cout << "C++ Object created"<<endl;
    }
    //Destructor
    ~Marks() 
    {
        cout << "Inside Destructor"<<endl;
        cout << "C++ Object destructed"<<endl;
    }
};
int main( )
{
    Marks m1;
    Marks m2;
    return 0;
}

