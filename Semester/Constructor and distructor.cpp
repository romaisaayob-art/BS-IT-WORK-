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
~Employee(){
cout << "object destroyed" << endl;}
void display(){

cout<<name<<" "<<salary<<endl;}
};
int main(){
Employee obj1("Ahmad",15000);
Employee obj2("Ali",16000);
cout << "The details of Employees!" << endl;
cout << "Name" <<" "<<"Salary"<<endl;
obj1.display();
obj2.display();}
