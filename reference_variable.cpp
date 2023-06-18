// A reference variable provides an alias for a previously defined variable.
// Syntax :
    // data_type & reference_variable = variable_name

#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int &j=i;
    int s=0;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    while(j<=n)
    {
        s=s+i;
        i++;
    }
    cout<<"sum = "<<s<<endl;
    return 0;
}