//Write a C++ program to find all prime numbers between given interval using functions.
#include<iostream>
using namespace std;
void pn(int a)
{	int b = 1,c=0;
	while( b<=a )
	{	if(a%b==0)
			c++;
		b++;
	}
	if(c==2)
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
