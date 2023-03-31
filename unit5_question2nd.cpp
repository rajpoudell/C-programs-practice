#include <iostream>
#include <string>
using namespace std;
class lecture {
    public:
    int id;
    string lectures;
    void readData(){
        cout<<"\n Enter the Id number of the lectures: ";
        cin>>id;
        cin.ignore();
        cout<<"\n Enter the name  of the lectures: ";
        getline(cin,lectures);
    }
    void printData(){
        cout<<"Id number: "<<id<<endl;
        cout<<" name : "<<lectures<<endl; 
    }

};

class partTime:public lecture{
    float payperhr;
    public:
    void getData(){
    lecture::readData();
    cout<<"Enter the salary for the part time job in dollor: ";
    cin>>payperhr;
    }
    void showData(){
    lecture::printData();
        cout<<"The salary of the fulltime job is: $"<<payperhr;
    }
    

};
class fullTime:public lecture{
    float paypermonth;
    public:
    void getData(){
	lecture::readData();
    cout<<"Enter the salary for the full time job in dollor: ";
    cin>>paypermonth;
    
    }
    void showData(){
        lecture::printData();
        cout<<"The salary of the fulltime job is: $"<<paypermonth;
    }
};

int main(){
    //for part time class
    partTime parttime_obj;
    parttime_obj.getData();
//
    parttime_obj.showData();


    fullTime fulltime_obj;
    fulltime_obj.getData();
    fulltime_obj.showData();

    return 0;
}





















// #include <iostream>
// #include <string>

// using namespace std;

// class Lecture {
// protected:
//     string ID;
//     string name;

// public:
//     virtual void read_data() {
//         cout << "Enter lecture ID: ";
//         getline(cin, ID);
//         cout << "Enter lecture name: ";
//         getline(cin, name);
//     }

//     virtual void print_data() {
//         cout << "Lecture ID: " << ID << endl;
//         cout << "Lecture name: " << name << endl;
//     }
// };

// class PartTime : public Lecture {
// private:
//     float pay_per_hr;

// public:
//     void read_data() override {
//         Lecture::read_data();
//         cout << "Enter pay per hour: ";
//         cin >> pay_per_hr;
//         cin.ignore(); // consume newline character
//     }

//     void print_data() override {
//         Lecture::print_data();
//         cout << "Pay per hour: " << pay_per_hr << endl;
//     }
// };

// class FullTime : public Lecture {
// private:
//     float pay_per_month;

// public:
//     void read_data() override {
//         Lecture::read_data();
//         cout << "Enter pay per month: ";
//         cin >> pay_per_month;
//         cin.ignore(); // consume newline character
//     }

//     void print_data() override {
//         Lecture::print_data();
//         cout << "Pay per month: " << pay_per_month << endl;
//     }
// };

// int main() {
//     // create a PartTime object and read its data from the user
//     PartTime pt;
//     pt.read_data();
    
//     // display the PartTime object's data
//     cout << "\nPart-time lecture data:\n";
//     pt.print_data();
    
//     // create a FullTime object and read its data from the user
//     FullTime ft;
//     ft.read_data();
    
//     // display the FullTime object's data
//     cout << "\nFull-time lecture data:\n";
//     ft.print_data();

//     return 0;
// }
