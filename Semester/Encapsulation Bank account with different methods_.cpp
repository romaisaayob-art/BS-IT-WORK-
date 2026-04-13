#include<iostream>
#include<string>
using namespace std;  
class Bankaccount{
private:
int accountnumber;
string name;
int balance;
int pin;
public:
Bankaccount(int s, string t,int u,int v){
accountnumber=s;
name=t;
balance=u;
pin=v;}
void deposit(int amount){
if(amount>0){
balance+=amount;
cout << "Deposit Successful" << endl;
cout << "New Balance:" <<balance <<"\n";}
else
cout << "Invalid Deposit Amount" << endl;
}
void withdraw(int amount,int pin){
if(pin!=this->pin)
{cout << "Wrong Pin"<< "\n"<<"Try Again Later" << endl;
return ;}
if (balance-amount<1000)
{cout << "Your balance is Insufficient after with drawl!" << endl;
return ;}
if(balance>amount){
balance-=amount;
cout << "Successfully Withdrawal" << endl;
cout << "New Balance:" <<balance <<endl;
}
else
{cout << "Insufficient Balance:" << endl;}
}
void Transferfund(Bankaccount &receiver, int amount,int pin)
{if(pin!=this->pin)
{cout << "Incorrect pin try later" << endl;
return;}
if(balance-amount<1000)
{cout << "Balance is Insufficient after Transfer Amount" << endl;
return;}
if(balance>=amount)
{balance-=amount;
receiver.balance+=amount;
cout << "Transfer Successfully" <<"\nYousuf Balance Is increased by transfer:"<<receiver.balance<<endl;}}
void display(){
cout << "\t\nAccount Detail!" << endl;
cout << "Name:" <<name<<endl;
cout << "Account Number:" <<accountnumber<<endl;
cout << "Balance:" <<balance<<"\n";}
};
int main(){
Bankaccount Account1(13578,"Yousaf",12000,1357);
Bankaccount Account2(14976,"Rehman",15000,2468);
Account1. display();
Account2. display();
cout << "\nDeposit in Rehman Account:" << endl;
Account2. deposit(3000);
cout << "\n Withdrawal in Yousaf Account:" << endl;
Account1.withdraw(2000,1357);

cout << "\nTransfer Fund from Rehman to Yousaf:" << endl;

Account2.Transferfund(Account1,2000,2468);
cout << "\n****Final Details***" << endl;
Account1.display();
Account2.display();
return 0;
}
    