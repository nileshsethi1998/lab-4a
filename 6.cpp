#include <iostream>
using namespace std;

int main() {

	float r,d,c,a;
	cout << "Enter the radius of Circle:" ;
	cin >> r;

	d=2*r;
	c=2*3.14*r;
	a=3.14*(r*r);

	cout <<"The diameter of the circle is : "<< d ;
	cout <<"\nThe circumference of the circle is : "<< c ;
	cout <<"\n The area of the circle is : "<< a << endl ;


	return 0;
}
