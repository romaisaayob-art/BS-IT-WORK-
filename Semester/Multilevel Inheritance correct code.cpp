#include<iostream>
using namespace std;
class Person{
public:
string name;
void show(){
cout << "\nEnter the name" << endl;
cin>>name;
cout << "Name=" <<name<< endl;
}};
class Employee:public Person{
public:
int salary;
void show(){
Person::show();
cout << "\nEnter the Salary" << endl;
cin >> salary;
cout << "Salary=" << salary<<endl;}};
class Manager:public Employee {
public:
string department;
void show(){
Employee::show();
cout << "\nEnter the Department" << endl;
cin >> department;
cout << "Department=" <<department <<endl;}};
int main(){
cout << "\t👾Manager Class👾" << endl;
Manager d;
d.show();
cout << "\n\t🤖Employee Class🤖" << endl;
Employee e;
e.show();
cout << "\n\t👽Person Class👽" << endl;
Person f;
f.show();}