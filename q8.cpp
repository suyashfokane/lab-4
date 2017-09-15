//Write a C++ program to print all Armstrong numbers between given interval using functions.
#include<iostream>
#include<cmath>
using namespace std;
void pn(int a)
{	int b = a,c=0;
	while( b>0 )
	{	c = c + pow(b%10,3);
		b = b/10;
	}
	if(c==a)
		cout << a << endl ;
}
int main()
{	int a,b;
	cout << "Enter I Number:	";
	cin >> a;
	cout << "Enter II Number:	";
	cin >> b;
	while( a <= b)
	{	pn(a);
		a++;
	}
     return 0;  
}     
