// This program demonstrates using the getline function
// to read character data into a string object.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string city;

	cout << "Please enter your name: ";
	// From keyboard, reading characters until encountering whitespace character and set this
	// sequence of chars into string variable name using getline() function


	cout << "Enter the city you live in: ";
	// From keyboard, reading characters until encountering whitespace character and set this
	// sequence of chars into string variable city using getline() function


	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	return 0;
}