#include<iostream>
using namespace std;
int main(){
int n;
int arry[10]={10,20,30,40,50,60,70,80,90,100};
int loc=-1;
int start=0;
int End=9;
cout << "Enter the number to find:" << endl;
cin >> n;
while(start<=End){
int mid=(start+End)/2;
if(arry[mid]==n)
{loc=mid;
break;}
else if(arry[mid]>n)
{End=mid-1;}
else
{start=mid+1;}}

cout << "Binary Search of Desired Number:" << endl;
if(loc==-1)
{cout << "Number not Found😐" << endl;}
else
{cout << "Number Found☺️ at index 👉" << loc<<endl;}}