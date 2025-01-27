//
// Tatumn Chavez
// 01/26/25
// Fix the Errors #3 Programming Project
// COSC 1030
//

// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.

#include <iostream>
using namespace std;

int main()
{

	float firstNumber;
	float secondNumber;

	// Prompt user to enter the first number.
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Prompt user to enter the second number.
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		<< " and " << secondNumber << endl;

	// Now we will swap the values.
    firstNumber = firstNumber + secondNumber; // Add the numbers
    secondNumber = firstNumber - secondNumber; // Subtract the original second number from the sum to get the orginal first number
    firstNumber = firstNumber - secondNumber; // Subtract the new second numberfrom the sum to get original second number

    // Output the values.
    cout << "After swapping, the values of the two numbers are " << firstNumber << " and " << secondNumber << endl;



	
}
