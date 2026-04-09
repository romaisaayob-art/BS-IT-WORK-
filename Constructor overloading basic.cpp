#include<iostream>
#include<string>
using namespace std;
class Car{
public:
string model;
string brand;
Car(){
model="unknown";
brand="unknown";
}
Car(string x,string y)
{model=x;
brand=y;}
void display(){
cout <<"Car:"<<model<<" "<<brand<<endl;}
};
int main(){
Car car1;
Car car2("Suzuki","toyata");
Car car3("Corolla","heaven");
car1. display();
car2. display();
car3. display();}