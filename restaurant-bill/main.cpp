//
// Tatumn chavez
// 02/2/25
// Restaurant Bill Programming Project
// COSC 1030

# include <iostream>
using namespace std;

int main(){
// Constants for the tax rate and tip percentage
    double meal = 88.67;
    double tax  = meal * 0.0675;
// Get the amount of the purchase.
    double  subtotal = meal + tax;
// Calculate the sales tax.
    double tip = subtotal * 0.20;
// Calculate the total of the sale.
    double total = subtotal + tip;

// display the charges.
 cout << "meal cost: " << meal << endl;
 cout << "tax: " << tax << endl;
cout << "tip: " << tip << endl;
cout << "total: " << total << endl;

return 0;
}
