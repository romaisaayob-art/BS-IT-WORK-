#include<iostream>
#include<string>
using namespace std;
class Employee{
private:
string name;
int monthlysalary;
public:
Employee(string x,int y){
name=x;
monthlysalary=y;}
void display(){
int yearlysalary =monthlysalary*12;
cout <<"\n"<<name;
cout << "\t" <<monthlysalary;
cout << "\t" <<yearlysalary<<"\n";}};

int main(){
Employee one("Ali",12000);
Employee Two("Ahmad",13000);
Employee three("Farhan",14000);
cout << "\nName";
cout << "\tMonthly";
cout << "\tYearly\n";
one.display();
Two.display();
three.display();
}