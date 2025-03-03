//
// Name Tatumn Chavez
// Date 3/2/25
// Hotel Occupancy Programming Project
// COSC 1030
//


#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int numberOfFloors;
    int totalRooms = 0;
    int totalOccupiedRooms = 0;

    // Ask the user for the number of floors
    
    cout << "Enter the number of floors in the hotel: ";
    cin >> numberOfFloors;

    // validation for the number of floors

    while (numberOfFloors < 1) {
        cout << "The number of floors must be at least 1. Please try again: ";
        cin >> numberOfFloors;
    }

    // Loop for the floors

    for (int floor = 1; floor <= numberOfFloors; floor++) {
        // Skip the 13th floor
        if (floor == 13) {
            continue;
        }

        int roomsOnFloor;
        int occupiedRoomsOnFloor;

        // Ask user for number of rooms on the floor

        cout << "Enter the number of rooms on floor " << floor << ": ";
        cin >> roomsOnFloor;

        // validation for the number of rooms on the floor

        while (roomsOnFloor < 10) {
            cout << "The number of rooms on a floor must be at least 10. Please try again: ";
            cin >> roomsOnFloor;
        }

        // Ask the user for the number of occupied rooms on the floor

        cout << "Enter the number of occupied rooms on floor " << floor << ": ";
        cin >> occupiedRoomsOnFloor;

        // Accumulate the total number of rooms and occupied rooms
        totalRooms += roomsOnFloor;
        totalOccupiedRooms += occupiedRoomsOnFloor;
    }

    // Calculate the number of unoccupied rooms and occupancy rate

    int totalUnoccupiedRooms = totalRooms - totalOccupiedRooms;
    double occupancyRate = (static_cast<double>(totalOccupiedRooms) / totalRooms) * 100;

    // Display the results

    cout << "\nTotal number of rooms: " << totalRooms << endl;
    cout << "Total number of occupied rooms: " << totalOccupiedRooms << endl;
    cout << "Total number of unoccupied rooms: " << totalUnoccupiedRooms << endl;
    cout << "Occupancy rate: " << fixed << setprecision(2) << occupancyRate << "%" << endl;

    return 0;
}
