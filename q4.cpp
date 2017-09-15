//Write a C++ program to check whether a number is even or odd using functions.
#include<iostream>
using namespace std;
void check(int a)
{	if(a%2==0)
		cout << a << " is even.";
	else
		cout << a << " is odd.";
}
int main()
{	int n;
	cout << "Enter Number:	";
	cin >> n;
	check(n);
	return 0;
}
