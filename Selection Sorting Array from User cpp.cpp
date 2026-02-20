#include<iostream>
using namespace std;
int main(){
int arry[5];
int n=5;
cout << "Enter the Number;" << endl;
for(int i=0;i<5;i++){
cin >> arry[i];}
cout << "The Original Numbers" << endl;
for(int i=0;i<5;i++)
cout << arry[i]<< endl;
for(int i=0;i<n-1;i++)
{int mindex=i;
for(int j=i+1;j<n;j++)
{if(arry[j]<arry[mindex])
{mindex=j;}}
int temp=arry[i];
arry[i]=arry[mindex];
arry[mindex]=temp;}
cout << "Selection Sorting Array:" << endl;
for(int i=0;i<5;i++)
{cout << arry[i] << endl;}}