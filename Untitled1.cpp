#include<iostream>
using namespace std;
class Test{
int a;
public:
void setdata(int x)
{ a=x; //or this->a=x;
cout<<"Address of my object is :"<<this<<endl;
}
void showdata()
{ // normal way.
cout<<"Data accessed normally:"<<a<<endl;
cout<<"Address of object in showdata():"<<this<<endl;
// data access through this 
cout<<"this->a:"<<this->a;
}
};
int main()
{
Test myobj;
myobj.setdata(20);
myobj.showdata();
}
