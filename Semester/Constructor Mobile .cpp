#include<iostream>
#include<string>
using namespace std;  
class Mobile{
public:
string brand;
string model;
Mobile(string s,string y){
brand = s;
model = y;}
void display(){

cout << "Brand:" <<" "<<brand<<" "<<"Model:"<<model<<endl;}
};
int main(){
Mobile obj1("Oppo","OppoA5");
Mobile obj2("Iphone","Iphone A16");
cout << "The details of Mobiles 📲" << endl;
obj1.display();
obj2.display();}
