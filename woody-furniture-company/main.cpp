//
// Name
// Date
// Woody Furniture Company Programming Project
// COSC 1030
//
# include <iostream>
# include <iomanip>
using namespace std;

int main()
{

// constantants for Chair style price.

const double AMERICAN_COLONIAL_PRICE  = 85.00 ;
const double MODERN_PRICE = 57.50;
const double FRENCH_CLASSICAL_PRICE  = 127.75;

// varibles 
int americanColonial; // Number of american Colonial chair sold
int modern; // Number of modern chairs sold
int frenchClassical; // Number of French Classical chairs sold
double total;  // total revenue from chair styles sold

// Read the number of american Colonial chairs sold.
cout << " Enter number of american Colonial chairs sold ";
cin >> americanColonial;
// Read the number of  modern chair sold.
cout << " Enter number of modern chairs sold ";
cin >> modern;
// Read the number of.french Classical chairs sold
cout << " Enter number french Classical chairs sold ";
cin >> frenchClassical;

// Calculate the total revnue from chair sales.
total = (americanColonial * AMERICAN_COLONIAL_PRICE)+
        (modern *  MODERN_PRICE)+
        (frenchClassical * FRENCH_CLASSICAL_PRICE);

// Dispaly total revenue from ticket sales.
cout << "The total revenue from chair sales is $"
    << setprecision(2)<< fixed << total << endl;

return 0;
}



