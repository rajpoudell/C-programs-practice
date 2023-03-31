
//overloading function template
//overloaded function templates
#include<iostream>
using namespace std;
template <class T> //it should be used anywhere T is pass just like in line no 9
void showData( T argument){ //template  on  function  using function overloading 
	cout<<"this is show data: "<<argument<<endl<<endl;
}
template <class T>
void showData(T argu, int intergers){
	for(int i =0; i<intergers;i++){
	cout<<argu<<endl<<endl;
}
}
int main(){
	showData("My name is raj");
     showData("Hello guys",5);
}


