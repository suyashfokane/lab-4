//Write a C++ program to print all strong numbers between given interval using functions.
#include<iostream>
using namespace std;
void pn(int a)
{	int b = a, c = 0,d,e=1;
	while( b>0 )
	{	d = b%10;
		if(d==0)
			e=1;
		else
		{	while( d>0)
			{	e = e*d;
				d--;			 
			}
		}	
		c = c+e;
		b = b/10;
		e = 1;
	}
	if(a==c)
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
