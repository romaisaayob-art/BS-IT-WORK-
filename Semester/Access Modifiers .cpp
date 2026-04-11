#include<iostream>
using namespace std;
class Demo{
private:
int a;
protected:
int b;
public:
int c;
void set(){
a=10;
b=20;
c=30;}
void show(){
cout <<a<<" "<<b<<" "<<c << endl;}
};
class child :public Demo{
public:
void acess(){
b=20;
c=30;}
};
int main(){
Demo d;
d. set();
d. show();
d. c=15;
cout <<d.c<< endl;}