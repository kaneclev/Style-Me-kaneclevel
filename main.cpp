#include <iostream>
using namespace std;

class temp {
    double f;
public:
    // This is okay; constructor?
    temp() : f(32) {}

    /*
     * Some notes about the changes here:
     * Set the function names to follow a clearer and more descriptive convention; also camelCase use


     */

    static double calculateCelsius(int f) {
        // The problem here is that since both 5 and 9 were integers, we were doing integer division
        // For precision, we need at least one of these values to be a double so it returns a double
        return (f-32)*(5.0/9);        // NEED TO FIX
    }

    // Same problem here. When dividing, one must be a double for precision.
    static double calculateFahrenheit(int c) {
        return (c*(9.0/5)+32);} //BUGGY
};

int main() {
    // Let's say that choice = 0 means we are calculating Fahrenheit to Celsius
    int choice = 0;
    double celsius;
    double fahrenheit;
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
        getline(cin, junk);
    }
    // Confusing ternary operation that clouds the purpose of the program.
    //
    if (choice == 1) {
        fahrenheit = temp::calculateFahrenheit(t);
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
        celsius = temp::calculateCelsius(t);
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