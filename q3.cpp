//Write a C++ program to find maximum and minimum between two numbers using functions.
#include<iostream>
using namespace std;
float max(float a, float b)
{	float m;
	if (a > b)
		m = a;
	else
		m = b;
      return m;
}
float min(float a, float b)
{       float m;
        if (a < b)
                m = a;
        else
                m = b;
      return m;
}
int main()
{	float a,b,mx,mn;
	cout << "Enter any two numbers:	";
	cin >> a >> b;
	mx = max(a,b);
	mn = min(a,b);
	cout << mx << " is max." << endl << mn << " is min."; 
    return 0;
}
	

