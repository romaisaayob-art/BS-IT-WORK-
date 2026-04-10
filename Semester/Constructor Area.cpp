#include<iostream>
#include<string>
using namespace std;
class Rectangle {
public:
int length;
int width;
Rectangle(int x,int y){
length=x;
width=y;}
void area(){
cout << "Area:" <<length*width<< endl;}};
int main(){
Rectangle s1(4,5);
s1.area();
}
    