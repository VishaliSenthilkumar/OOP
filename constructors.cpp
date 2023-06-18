// A constructor is a special member function whose task is to initialize the objects of its class. 
// It is special because its name is the same name as the class name. 
// The constructor is invoked whenever an object of its associated class is created. 
// It is called constructor because it constructs the values of data members of the class.

// CHARACTERISTICS OF CONSTRUCTOR
    // They should be declared in the public section.
    // They are invoked automatically when the objects are created.
    // They do not have return type, not even void.
    // They cannot be inherited, though a derived class can call the base class constructor. 
    // Like other c++ functions, they can have default arguments.
    // Constructors cannot be virtual.
    // We cannot refer to their addresses.
    // They make „implicit calls‟ to the operators new and delete when memory allocation is required

// Constructors are of 3 types:
    // 1. Default Constructor
    // 2. Parameterized Constructor
    // 3. Copy Constructor

#include<iostream>
using namespace std;

class sample
{
    int n; 
    public:
    sample()              // default constructor
    {
        n=0;
    }
    sample(int a)        // parameterized constructor
    {
        n=a;
    }
    sample(sample &x)    // copy constructor
    {
        n=x.n;
    }
    void display()
    {
        cout<<n<<endl;
    }
};
int main()
{
    sample E;
    sample A(100);
    sample B(A);
    sample C=A;
    sample D;
    D=A;
    E.display();
    A.display();
    B.display();
    C.display();
    D.display();
    return 0;
}
