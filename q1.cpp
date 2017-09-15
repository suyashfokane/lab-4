//Write a C++ program to find cube of any number using function.
#include<iostream>
using namespace std;
float cube(float a)
{	float cube = a*a*a;
      return cube;
}
int main()
{	float a1, cube1;
	cout << "Enter Number:	";
	cin >> a1;
	cube1 = cube(a1);
	cout << "Cube of the given number= " << cube1;
    return 0;
}
