// This program demonstrates how setprecision rounds a
// floating point value.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double quotient, number1 = 132.364, number2 = 26.91;

   quotient = number1 / number2;
   cout << quotient << endl;

   // print the value in quotient with setprecision function

   return 0;
} 