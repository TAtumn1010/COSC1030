//
// Name Tatumn Chavez 
// Date 02-23-25
// Calories Burned Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main()
{
 // Constantants for calories per minute 

 const double CALS_PER_MINUTE = 3.9;

 int minutes;   // number of minutes 
 double calories; //  calories burned 

 for(minutes =10; minutes <= 30; minutes += 5)
 {
    calories = minutes * CALS_PER_MINUTE;
    cout <<"After "<<minutes<<" minutes you burned "
    <<calories<< " calories./n";
 }

 return 0;
}