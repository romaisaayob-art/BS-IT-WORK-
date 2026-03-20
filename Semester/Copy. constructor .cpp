#include<iostream>
#include<string>
using namespace std;  
class Car{
public:
string brand;
int price;
Car(string s,int y){
brand=s;
price=y;}
Car(const Car &obj)
{brand=obj.brand;
price =obj.price;
}
void display()
{cout << "Brand:" <<brand<< endl;
cout << "Price:" <<price<< endl;
cout << "   " << endl;}
};
int main(){
Car obj1("Toyota",1200000);
Car obj2=obj1;
obj1.display();
obj2.display();}

    