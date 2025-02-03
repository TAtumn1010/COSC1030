
// Tatumn chavez
// 02/2/25
// Ocean Levels Programming Project
// COSC 1030

# include <iostream>
using namespace std;

int main(){
// Constants for the ocean level rate per year. (millimeters)
    double rate = 1.5;
   
// calculate the ocean level. 
    double x = rate * 5;
    double y = rate * 7;
    double z = rate * 10;


// display the amount the ocean level rose.
 cout << " the ocean rose: " << x << " millimeters in 5 years."<<endl;
 cout << " the ocean rose: " << y << " millimeters in 7 years."<<endl;
 cout << " the ocean rose: " << z << " millimeters in 10 years."<<endl;
 
return 0;
}



