//
// Name Tatumn Chavez
// Date 3/3/25
// Pennies for Pay Programming Project
// COSC 1030

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Constants
    const double PENNY = 0.01;

    // Variables
    int numberOfDaysWorked;
    
    // Read the number of days worked.
    cout << "Enter the number of days worked: ";
    cin >> numberOfDaysWorked;

    // Input validation
    while (numberOfDaysWorked < 1) {
        cout << "The number of days must be at least 1. Please try again: ";
        cin >> numberOfDaysWorked;
    }

    // Variables for calculation
    double dailySalary = PENNY; // Initial salary in dollars
    double totalPay = 0.0;

    // Display the salary table
    cout << "Day\tDaily Salary\tTotal Accumulated\n";
    cout << "-------------------------------------------\n";

    for (int day = 1; day <= numberOfDaysWorked; day++) {
        totalPay += dailySalary;
        cout << day << "\t$" << fixed << setprecision(2) << dailySalary << "\t\t$" << totalPay << endl;
        dailySalary *= 2; // Double the salary for the next day
    }

    // Display the total pay at the end of the period
    cout << "-------------------------------------------\n";
    cout << "Total pay at the end of the period: $" << fixed << setprecision(2) << totalPay << endl;

    return 0;
}