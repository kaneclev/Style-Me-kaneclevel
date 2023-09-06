#include <iostream>
#include "temperature.h"

using namespace std;
int main() {
    // Initialize some variables for us to use and create a temperature object
    int userChoice = 0;
    string junk;
    int userTemp;
    temperature TempConversion;

    // Loops to gather user input.
    while (!(cin >> userChoice)) {
        cin.clear();
        getline(cin, junk);
    }
    while (!(cin >> userTemp)) {
        cin.clear();
        getline(cin, junk);
    }
    // Confusing ternary operation that clouds the purpose of the program.
    // Changed instead to an actual if statement for clarity.
    if (userChoice == 1) {
        TempConversion.setFahrenheit(userTemp);
    } else {
        TempConversion.setCelsius(userTemp);
    }
    userTemp = TempConversion.getFahrenheit();

    string weather;
    if (TempConversion.getCelsius() < 32) {
        weather = "cold";
    }
    else if (TempConversion.getCelsius() > 86) {
        weather = "hot";
    }
    else {
        weather = "beautiful";
    }

    cout << "Hello, " << weather << " World!" << endl;
    return 0;

}