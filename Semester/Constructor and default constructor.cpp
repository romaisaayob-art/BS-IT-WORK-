#include<iostream>
#include<string>
using namespace std;  
class Employee {
public:
string name;
int salary;
Employee (string s,int y){
name = s;
salary = y;}
Employee(){
name="unknown";
salary=0;}
void display(){

cout<<name<<" "<<salary<<endl;}
};
int main(){
Employee obj2("Ali",16000);
Employee obj1;
obj1.name="Ahmad";
obj1.salary=15000;
cout << "The details of Employees!" << endl;
cout << "Name" <<" "<<"Salary"<<endl;
cout <<obj1.name<<" " <<obj1.salary<< endl;
obj2.display();}
