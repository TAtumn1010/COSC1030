//
// Tatumn Chavez
// 16/02/25
// Time Calculator Programming Project
// COSC 1030
//

# include <iostream>
using namespace std;

int main()
{

// Constants

const double SECONDS_PER_MINUTE = 60.0; // seconds in a minute
const double SECONDS_PER_HOUR = 3600.0; // seconds in a hour
const double SECONDS_PER_DAY = 86400.0; // seconds in a day

// Variable to hold the number of seconds 

int seconds;

// get the number of seconds 
cout << "Enter the number of seconds.";
cin >> seconds;

// display the number of minutes in that many seconds

if ( seconds >= SECONDS_PER_MINUTE)
{ 
    double minutes = seconds / SECONDS_PER_MINUTE;
    cout << " There are " << minutes
         << "minutes in "<< seconds
         << " seconds./n";
         
}
// display the number of hours in that many seconds

if ( seconds >= SECONDS_PER_HOUR)
{ 
    double minutes = seconds / SECONDS_PER_HOUR;
    cout << " There are " << minutes
         << " hours in "<< seconds
         << "seconds./n";
         
}

// display the number of days in that many seconds

if ( seconds >= SECONDS_PER_DAY)
{ 
    double minutes = seconds / SECONDS_PER_DAY;
    cout << " There are " << minutes
         << " days in "<< seconds
         << "seconds./n";
         
}
return 0;
}