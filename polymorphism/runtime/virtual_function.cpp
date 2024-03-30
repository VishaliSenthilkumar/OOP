// It would be nice if the appropriate member function could be selected while the program is running. This is known as runtime polymorphism. 
// C++ supports a mechanism known as virtual function to achieve run time polymorphism.
// At the runtime, when it is known what class objects are under consideration, the appropriate version of the function is invoked. 
// Since the function is linked with a particular class much later after the compilation, this process is termed as late binding. 
// It is also known as dynamic binding because the selection of the appropriate function is done dynamically at run time.

// Polymorphism refers to the property by which objects belonging to different classes are able to respond to the same message, but different forms. 
// An essential requirement of polymorphism is therefore the ability to refer to objects without any regard to their classes.
// When we use the same function name in both the base and derived classes, the function in the base class is declared as virtual using the keyword virtual preceding its normal declaration.
// When a function is made virtual, C++ determines which function to use at runtime based on the type of object pointed to by the base pointer, rather than the type of the pointer. 
// Thus, by making the base pointer to point to different objects, we can execute different versions of the virtual function.

// **Function Overriding** occurs when a derived class has a definition for one of the member functions of the base class.

#include<iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
        cout<<"Display Base"<<endl;
    }
    virtual void show()
    {
        cout<<"Show Base"<<endl;
    }
};
class Derived : public Base
{
    public:
    void display()
    {
        cout<<"Display Derived"<<endl;
    }
    void show() //override    <---use virtual in base class or use override keyword in derived class if you want to achieve overriding using pointer--->
    {
        cout<<"show derived"<<endl;
    }
};
int main()
{
    Base b;
    Derived d;
    Base *ptr;
    cout<<"ptr points to Base"<<endl;
    ptr=&b;
    ptr->display(); //calls Base
    ptr->show(); //calls Base
    cout<<"ptr points to derived"<<endl;
    ptr=&d;
    ptr->display(); //calls Base
    ptr->show(); //class Derived

    cout<<"Base class object"<<endl;
    b.display(); //calls Base
    b.show(); //calls Base
    cout<<"Derived class object"<<endl;
    d.display(); //calls Derived
    d.show(); //class Derived
    return 0;
}

// Rules For Virtual Functions:
    // 1. The virtual functions must be members of some class.
    // 2. They cannot be static members.
    // 3. They are accessed by using object pointers.
    // 4. A virtual function can be a friend of another class.
    // 5. A virtual function in a base class must be defined, even though it may not be used.
    // 6. The prototypes of the base class version of a virtual function and all the derived class versions must be identical. 
    //    C++ considers them as overloaded functions, and the virtual function mechanism is ignored.
    // 7. We cannot have virtual constructors, but we can have virtual destructors.
    // 8. While a base pointer points to any type of the derived object, the reverse is not true. i.e. we cannot 
    //    use a pointer to a derived class to access an object of the base class type.
    // 9. When a base pointer points to a derived class, incrementing or decrementing it will not make it to point to the next object of the derived class. 
    //    It is incremented or decremented only relative to its base type. Therefore we should not use this method to move the pointer to the next object.
    // 10.If a virtual function is defined in the base class, it need not be necessarily redefined in the derived class. 
    //    In such cases, calls will invoke the base function
