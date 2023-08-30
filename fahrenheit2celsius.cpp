#include "temperature.h"

    double f;
temperature::temperature() : fahrenheit(32) { }
    // This is okay; constructor?
    /*
     * Some notes about the changes here:
     * Set the function names to follow a clearer and more descriptive convention; also camelCase use


     */

    double temperature::getFahrenheit() {
        // The problem here is that since both 5 and 9 were integers, we were doing integer division
        // For precision, we need at least one of these values to be a double so it returns a double
        return (f-32)*(5.0/9);        // NEED TO FIX
    }

    // Same problem here. When dividing, one must be a double for precision.
    // Also, this is not the correct formula for conversion.
    static double calculateFahrenheit(int c) {
        return (c*(9.0/5)+32);
    }


