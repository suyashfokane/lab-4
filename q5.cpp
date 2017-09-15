//Write a C++ program to check whether a number is prime, Armstrong or perfect number using functions.
#include<iostream>
#include<cmath>
using namespace std;
void pn(int a)
{	int b = 1,c=0;
	while( b<=a )
	{	if(a%b==0)
			c++;
		b++;
	}
	if(c==2)
		cout << a << " is a prime number.";
	else
		cout << a << " is not a prime number.";
}
void an(int a)
{	int b = a, c = 0;
	while(b>0)
	{	c = c + pow(b%10,3);
		b = b/10;
	}
	if(a==c)
		cout << a << " ia an armstrong number.";
	else
		cout << a << " is not an armstrong number.";
}
void pft(int a)
{	int b=1,c=0;
	while(b<a)
	{	if(a%b==0)
			c = c+b;
		b++;
	}
	if(a == c)
		cout << a << " is a perfect number.";
	else
		cout << a << " is not a perfect number.";	
}
int main()
{	int n;
	cout << "Enter Number:	";
	cin >> n;
	pn(n);
	cout << endl;
	an(n);
	cout << endl;
	pft(n);
    return 0;
}
