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
cout << "Balance:" <<balance<<endl;}};
int main(){
Bankaccount s1(1234,"Ali",5000);
s1. deposit(2000);
s1. withdraw(3000);
s1. display();}