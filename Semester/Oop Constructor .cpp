#include<iostream>
#include<string>
using namespace std;
class Car{
public:
string brand;
string model;
int year;
Car(string x,string y,int z)
{brand=x;
model=y;
year=z;}
void display(){
cout << "Brand:" <<brand<< endl;
cout << "Model:" <<model<< endl;
cout << "Year:" <<year<<endl;}
};
int main(){
Car s1("BMW","expiry",2013);
Car s2("Corolla","Griffy",2014);
 s2.display();
}
    