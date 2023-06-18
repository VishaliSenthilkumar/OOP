// A static function can have access to only other static members (functions or variables) declared in the same class.
// A static member function is to be called using the class name (instead of its objects) as follows: 
    // class-name :: function-name

#include<iostream>
using namespace std;

class test
{
    int code;
    static int count;
    public:
        void setcode()
        {
            code=++count;
        }
        void showcode()
        {
            cout<<"object number "<<code<<endl;
        }
        static void showcount()
        {
            cout<<"count "<<count<<endl;
        }
};

int test::count;

int main()
{
    test t1,t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}
