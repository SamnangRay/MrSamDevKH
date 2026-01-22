

#include<iostream>
using namespace std;

int main(){

     system("clear");
    // cout<<"Hello World!!"<<endl;

    int hours;
    int rate;

    cout<<"===========[Salary Finder]==========="<<endl;
    cout<<"Enter Hours: "; 
    cin>>hours;
    cout<<"Enter Rate: ";
    cin>>rate;

    int salary = hours * rate;
    cout<<"Result = "<<salary<<"$"<<endl;


    return 0;
}