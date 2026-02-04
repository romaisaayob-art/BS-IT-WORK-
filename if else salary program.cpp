#include<iostream>
using namespace std;
int main(){
int salary ;
int grade;
int bonous;
cout << "Enter the salary" << endl;
cin>>salary;
cout << "Enter the Grade" << endl;
cin >> grade;
if(grade>15)
bonous=salary*50/100;
else
bonous=salary*25/100;
cout << "Total salary=";
salary=salary+bonous;
cout << salary << endl;
}