#include <iostream>

using namespace std;

class baseClass{
	public:
virtual	~baseClass(){
	cout<<"baseClass"<<endl;
}
};


class derive1:public baseClass{
	public:
	~ derive1(){
	cout<<"hlo"<<endl;
}
};

class derive2: public baseClass{
	public: 
~derive2(){
	cout<<"Hlo2";
}
};

int main()
{
	baseClass *ptr  ;// baseClass *ptr = new derive1;
ptr=new derive1;
delete ptr;
}


