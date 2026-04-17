#include<iostream>
#include<string>
using namespace std;  
class Vechile{
public:
int vechilenumber;
string ownername;
string vechilename;
void getdata(){
cout << "Enter the VechileNumber:" << endl;
cin >> vechilenumber;
cout << "Enter the VechileName:" << endl;
cin >> vechilename;
cout << "Enter the OwnerName:" << endl;
cin >> ownername;}};
class BMW :public Vechile{
public:
int vechilespeedlimit;
void getdataBMW(){
getdata();
cout << "Enter the Vechile Speed Limit:" << endl;
cin >>vechilespeedlimit;
}
void display(){
cout << "\nThe Vechile Detail!" << endl;
cout << "\nVechile Number:" <<vechilenumber<< endl;
cout << "Vechile Name:" <<vechilename<< endl;
cout << "Owner Name:" <<ownername<< endl;
cout << "Speed limit:" <<vechilespeedlimit<<endl;}
};
int main(){
BMW b1;
b1.getdataBMW();
b1. display();}