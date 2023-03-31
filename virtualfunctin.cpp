#include <iostream>
#include <string>
using namespace std;
class baseclass
{
public:
    int base_var=1;
    virtual void display() // by adding virtual keyword in the base class 
                          //  it tell dont run this function in the main function pointer pointing the derive object
    {
        cout << "This is the base class & the value of base var is: " << base_var;
    }
};
class deriveclass : public baseclass
{

public:
    int derive_var=2;
    void display()
    {
        cout << "This is the derive class & the value of derive var is: " << derive_var;
    }
};

int main()
{
    baseclass *basepointer;
    baseclass base_obj;
    deriveclass derive_obj;
    basepointer = &derive_obj;


    basepointer->display(); //it display the output from the base class 
    

    return 0;
}