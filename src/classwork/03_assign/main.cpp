//write includes statements

#include<iostream>

//write using statements for cin and cout

using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/

int main() 
{
		int i, num = 1;

		cout << "Enter a positive integer: ";
		cin >> num;

		for (i = 1; i <= num; ++i) 
		{
			factorial *= i;
		}
		cout << "Factorial of " << num << " = " << factorial;

		return 0;
}