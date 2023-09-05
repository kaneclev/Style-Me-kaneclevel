#include <iostream>
#include "temperature.h"

using namespace std;



int main() {
    // Let's say that choice = 0 means we are calculating Fahrenheit to Celsius
    int choice = 0;
    int userTemp;
    string a;


    while (!(cin >> choice)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    int t = 0;
    while (!(cin >> t)) {
        cin.clear();
        string junk;
        double givenTemp = getline(cin, junk);
    }
    // Confusing ternary operation that clouds the purpose of the program.
    //
    if (choice == 1) {
        fahrenheit = temperature::calculateFahrenheit(t);
        if (fahrenheit < 32)
            a = "cold";
        else if (fahrenheit > 86)
            a = "hot";
        else
            a = "beautiful";
        cout << "Hello, " << a << " World!" << endl;
        return 0;
    }
    if (choice == 0) {
        temperature::setFahrenheit()
        celsius = temperature::getCelsius(t);
        if (celsius < 0)
            a = "cold";
        else if (celsius > 30)
            a = "hot";
        else
            a = "beautiful";
        cout << "Hello, " << a << " World!" << endl;
        return 0;
    }
//    if (choice == 1)
//        mytemp.setf(t);
//    else
//        mytemp.setc(t);

}