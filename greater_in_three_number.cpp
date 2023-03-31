#include<iostream>
using namespace std;
int main(){
    int  a,b,c;
    cout<<"Enter three integer: ";
    cin>>a>>b>>c;
    cout<<"Entered three integers are : "<< " a: "<<a<<"\t"<<" b: "<<b<<"\t"<<" c: "<<c<<endl<<endl;
    if (a==b && a==c && b==c)
    {
        cout<<"You entered all three integer of equal values."<<endl;
    }
    else if(a==b){
        cout<<"You enter a and b of same value";
        if (a<c)
        {
            cout<<"a and b is less than c";
        }
        else{
            cout<<"a and b is greater than c";
        }
        
    }
    else if(a==c){
        cout<<"You enter a and c of same value"<<endl;
        if (a<b)
        {
            cout<<"a and c is less than b";
        }
        else{
            cout<<"a and c is greater than b";
        }
        
    }
    else if(b==c){
        cout<<"You enter b and c of same value"<<endl;
        if (b<a)
        {
            cout<<"B and c is less than a";
        }
        else{
            cout<<"b and c is greater than a ";
        }
        
    }
    //greater than each other
    else if(b>a){
        // cout<<"b is greater than a"<<endl;
        if (b>c)
        {
            cout<<"b is greater than all ";
        }
        else{
            cout<<"c is greater than all";
        }
    }
    else if(c>a){
        // cout<<"c is geater than a"<<endl;
        if (b>c)
        {
            cout<<"b is greater than all ";
        } 
        else{
            cout<<"c is greater than all";
        } 
    }
    else if(b>a){
        // cout<<"b is geater than a"<<endl;
        if (b>c)
        {
            cout<<"b is greater than all ";
        } 
        else{
            cout<<"c is greater than all";
        } 
    }



    return 0;  
}