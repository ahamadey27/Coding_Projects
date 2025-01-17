#include "std_lib_facilities.h"

// Program to Find the Size of int, float, double, and char.

int main()
{
	cout << "Enter a  int, float, double and char and will determine the size of each.\n"; 
	
	int intI;
	float floatI;
	double doubleI;
	char charI;

	cin >> intI >> floatI >> doubleI >> charI; 

	cout << "The size of integer " << intI << " is: " << sizeof(intI) << ".\n";
	cout << "The size of float  " << floatI << " is: " << sizeof(floatI) << ".\n";
	cout << "The size of double  " << doubleI << " is: " << sizeof(doubleI) << ".\n";
	cout << "The size of char " << charI << " is: " << sizeof(charI) << ".\n";

	return 0;
}


