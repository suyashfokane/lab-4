//Write a C++ program to print all perfect numbers between given interval using functions.
#include<iostream>
using namespace std;
void pn(int a)
{	int b,c=0;
	b=a-1;
	while(b>0)
	{	if(a%b==0)
			c = c + b;
		b--;
	}
	if(c==a)
		cout << c << endl;
}
int main()
{	int a,b;
	cout << "Enter I Number:\t ";
	cin >> a;
	cout << "Enter II Number:	";
	cin >> b;
	while( a <= b)
	{	pn(a);
		a++;
	}
     return 0;  
}     
