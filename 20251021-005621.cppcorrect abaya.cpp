#include<iostream>
using namespace std;

int main() 
{int  price;
cout << "enter the  price" ;
cin >> price;
if( price <3000)
{cout << "10 percent off" << endl;}
else if(price>=3000&&price<=4999)
{cout << "20 percent off" << endl;}
else if (price>=5000&&price<=7999 )
{cout << "40 percent off" << endl;}
else if(price>=8000&&price<=9999)
{cout << "50 percent off" << endl;}
else
{cout << "70 percent off" << endl;}
    return 0;
}