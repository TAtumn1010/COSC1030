//
// Name
// Date
// Beverages Survey Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main() {
    // Initialize counters for each beverage

    int coffeeCount = 0, teaCount = 0, cokeCount = 0, ojCount = 0;
    int choice;
// display's the user choices on the survey  
    cout << "Beverage Survey" << endl;
    cout << "Enter the number corresponding to your favorite beverage:" << endl;
    cout << "1. Coffee" << endl;
    cout << "2. Tea" << endl;
    cout << "3. Coke" << endl;
    cout << "4. Orange Juice" << endl;
    cout << "Enter -1 to end the survey." << endl;

// loop to colect user inputs enter -1 to end the loop

    while (true) {
        cout << "Your choice: ";
        cin >> choice;

        if (choice == -1) {
            break;
        }

        if (choice == 1) {
            coffeeCount++;
        } else if (choice == 2) {
            teaCount++;
        } else if (choice == 3) {
            cokeCount++;
        } else if (choice == 4) {
            ojCount++;
        } else {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl; 
        }
    }
    // display the results of the survey 
    cout << "\nSurvey Results:" << endl;
    cout << "Coffee: " << coffeeCount << endl;
    cout << "Tea: " << teaCount << endl;
    cout << "Coke: " << cokeCount << endl;
    cout << "Orange Juice: " << ojCount << endl;

    return 0;
}


