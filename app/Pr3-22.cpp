// This program demonstrates a problem that occurs
// when you mix cin >> with cin.get().
#include <iostream>
using namespace std;

int main()
{
   char ch;                        // Define a character variable
   int number;                     // Define an integer variable

   cout << "Enter a number: ";
   // From keyboard, read integer value into variable number

   cout << "Enter a character: ";
   // From keyboard, read a single character value into variable ch using cin get method

    cout << "ch= " << ch << ", Thank You!\n";
   return 0;
}