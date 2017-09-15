#include <iostream>
using namespace std;

int main() {
	int x,y,sum,div,multi,sub;
	cout << "Enter any two numbers:" ;
	cin >> x;
	cin >> y;

	sum=x+y;
	div=x/y;
	sub=x-y;
	multi=x*y;

	cout <<"The Sum of two numbers is : "<< sum ;
	cout <<"\n The Division of two numbers is : "<< div  ;
	cout <<"\n The Subtraction of two numbers is :"<< sub ;
	cout <<"\n The Multiplication of two numbers is : "<< multi << endl;


	return 0;
}
