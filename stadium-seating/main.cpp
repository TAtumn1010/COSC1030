//
// Tatumn chavez
// 02/9/25
// Stadium Seating Programming Project
// COSC 1030
//
# include <iostream>
# include <iomanip>
using namespace std;

int main()
{

// constantants for the ticket prices 
const double CLASS_A_PRICE = 15.00;
const double CLASS_B_PRICE = 12.00;
const double CLASS_C_PRICE = 9.00;

// varibles 
int classATickets; // Number of class A tickets sold
int classBTickets; // Number of class Btickets sold
int classCTickets; // Number of class C tickets sold
double total;   // total revenue from ticket sales

// Read the number of class A tickets sold.
cout << " Enter number of class A tickets sold.";
cin >> classATickets;
// Read the number of class B tickets sold.
cout << " Enter number of class B tickets sold.";
cin >> classBTickets;
// Read the number of class C tickets sold.
cout << " Enter number of class C tickets sold.";
cin >> classCTickets;

// Calculate the total revnue from ticket sales.
total = (classATickets * CLASS_A_PRICE)+
        (classBTickets * CLASS_B_PRICE)+
        (classCTickets * CLASS_C_PRICE);

// Dispaly total revenue from ticket sales.
cout << "The total revenue from ticket sales is $"
    << setprecision(2)<< fixed << total << endl;

return 0;
}

