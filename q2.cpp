#include<iostream>
float dia(float rad)
{	float d = 2*rad;
      return d;
}
float cir(float rad)
{	float circum = 2*3.14*rad;
      return circum;
}
float ar(float rad)
{	float area = 3.14*rad*rad;
      return area;
}
using namespace std;
int main()
{	float r,d,c,a;
	cout << "Enter radius:	";
	cin >> r;
	d = dia(r);
	c = cir(r);
	a = ar(r);
	cout << "Diameter = " << d << endl << "Circumference = " << c << endl <<"Area = " << a;
    return 0;
}
