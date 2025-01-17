#include "std_lib_facilities.h"
//Program to swap two numbers inputed by user

int main()
{
	cout << "Please enter two numbers and we'll reverse the order of the numbers entered.\n";
	int a, b;
	cin >> a >> b; 

	cout << "You entered " << a << " and " << b << ".\n";

	int temp = a;
	a = b; 
	b = temp;

	cout << "The swaped vales are now " << a << " and " << b << ".\n";
	return 0;
}


