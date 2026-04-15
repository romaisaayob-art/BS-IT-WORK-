#include<iostream>
#include<string>
using namespace std;
class Bankaccount{
private:
int accountnumber ;
string name ;
double balance;
public:
Bankaccount (int x, string y, double z)
{accountnumber =x;
name =y;
balance =z;}
void deposit(double amount){
balance+=amount ;}
void withdraw(double amount){
if(balance>=amount){
balance-=amount;}
else
{cout << "Insufficient balance" << endl;}}
void display(){
cout << "Name:" <<name<<endl;
cout << "Account Number:" <<accountnumber<< endl;
cout << "Total Balance:" <<balance<<endl;}};
int main(){
Bankaccount s1(1234,"Ali",5000);
double dep,with;
cout << "Enter the deposit amount" << endl;
cin >> dep;
s1.deposit(dep);
cout << "Enter the withdraw amount" << endl;
cin >>with;
s1. withdraw(with);
s1.display();
}