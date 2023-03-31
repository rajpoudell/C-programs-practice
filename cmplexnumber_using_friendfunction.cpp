#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setnumber(int x , int y){
        a=x;
        b=y;
    }
    friend complex sumData(complex , complex );
    void showData(){
        cout<<a <<" + "<<b <<"i"<<endl;
    }
};
complex sumData(complex o1,complex o2){
complex o3;
o3.setnumber((o1.a+o2.a),(o1.b+o2.b) );
return o3;
}

int main(){
    complex num1,num2,num3;
    num1.setnumber(1,3);
    num2.setnumber(1,3);
    num1.showData();
    num2.showData();
    num3   = sumData(num1 , num2);
    cout<<"_______"<<endl;
    num3.showData();
    return 0;
}