//
// Tatumn chavez
// Date 16/02/25
// University of Guiness Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main() {
    // Constants
    const double IN_STATE_TUITION = 3000.0; // Tuition for instate students
    const double OUT_OF_STATE_TUITION = 4500.0; // Tuition for out of state students
    const double IN_STATE_ROOM_BOARD = 2500.0; // Room and board for in  state students
    const double OUT_OF_STATE_ROOM_BOARD = 3500.0; // Room and board for out-of-state students

    // Variables
    char response;
    double totalCost = 0.0;

    // Get yes or no for in-state
    cout << "Are you an in-state student? (y/n): ";
    cin >> response;

    if (response == 'y' || response == 'Y') {
        totalCost += IN_STATE_TUITION;
    }
    if (response == 'n' || response == 'N') {
        totalCost += OUT_OF_STATE_TUITION;
    }
    if (response != 'y' && response != 'Y' && response != 'n' && response != 'N') {
        cout << "Invalid response." << endl;
        return 1; // Exit the program due to invalid input
    }

    // Get yes or no for room and board
    cout << "Do you need room and board? (y/n): ";
    cin >> response;

    if (response == 'y' || response == 'Y') {
        if (totalCost == IN_STATE_TUITION) {
            totalCost += IN_STATE_ROOM_BOARD;
        }
        if (totalCost == OUT_OF_STATE_TUITION) {
            totalCost += OUT_OF_STATE_ROOM_BOARD;
        }
    }
    if (response != 'y' && response != 'Y' && response != 'n' && response != 'N') {
        cout << "Invalid response." << endl;
        return 1; // Exit the program due to invalid input
    }

    // Display the total cost
    cout << "The total cost is $" << totalCost << endl;

    return 0;
}

