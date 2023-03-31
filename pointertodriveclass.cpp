#include <iostream>
#include <string>
using namespace std;
class baseclass
{
public:
    int base_var;
    void display()
    {
        cout << "This is the base class & the value of base var is: " << base_var;
    }
};
class deriveclass : public baseclass
{

public:
    int derive_var=212;
    void display()
    {
        cout << "This is the base class & the value of derive var is: " << derive_var;
    }
};

int main()
{
    baseclass *basepointer;
    baseclass base_obj;
    deriveclass derive_obj;
    basepointer = &derive_obj;


    basepointer->base_var = 32;
    basepointer->display(); //it display the output from the base class 
    // basepointer->derive_var =211;    //will throw an error for cause basepointer is pointed to derive's object
    cout<<endl;
    derive_obj.display();
    return 0;
}