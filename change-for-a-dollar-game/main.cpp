//
// Name Tatumn Chavez
// Date 3/2/25
// Change for a Dollar Game Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const double PENNIES = 0.01;
    const double NICKELS = 0.05;
    const double DIMES = 0.10;
    const double QUARTERS = 0.25;

    // Variables 
    int numberOfPennies; 
    int numberOfNickels; 
    int numberOfDimes; 
    int numberOfQuarters; 
    double total;

    // Explain the objective to the user.
    cout << "Enter the number of coins required to make exactly one dollar." << endl;

    // Read the number of pennies.
    cout << "Enter number of pennies: ";
    cin >> numberOfPennies;

    // Read the number of nickels.
    cout << "Enter number of nickels: ";
    cin >> numberOfNickels;

    // Read the number of dimes.
    cout << "Enter number of dimes: ";
    cin >> numberOfDimes;

    // Read the number of quarters.
    cout << "Enter number of quarters: ";
    cin >> numberOfQuarters;

    // Calculate the total value
    total = (numberOfPennies * PENNIES) + (numberOfNickels * NICKELS) + 
            (numberOfDimes * DIMES) + (numberOfQuarters * QUARTERS);

    // Display the total value
    cout << "Total value: $" << fixed << setprecision(2) << total << endl;

    // Check if the total is exactly one dollar
    if (total == 1.00)
    {
        cout << "Congratulations! You win. The total is exactly one dollar." << endl;
    }
    else
    {
        cout << "You lost. The total is not one dollar." << endl;
    }

    return 0;
}