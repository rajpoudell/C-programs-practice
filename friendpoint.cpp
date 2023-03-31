#include<iostream>
using namespace std;
class point {
	private:
		int a,b;
	public:
		void getpoint(){
		cout<<"xco="; 
         cin>>a;
		cout<<"yco="; 
        cin>>b;
		}
		void putpoint(){
		cout<<"x,y=("<<a<<","<<b<<")"<<endl;

		}
		friend point addpoint(point,point);
};
point addpoint (point p1,point p2){
	point p3;
	p3.a=p1.a+p2.a;
	p3.b=p1.b+p2.b;
	return p3;
}
int main()
{
	point p1,p2,p3;
	p1.getpoint();
	p1.putpoint();
	p2.getpoint();
	p2.putpoint();
	p3=addpoint(p1,p2);
	p3.putpoint();
	return 0;
}
