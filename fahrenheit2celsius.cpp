#include "temperature.h"

    /*
     * Some notes about the changes here:
     * There seemed to be an unnecessary method in this program, such as setc(). From my understanding,
     * the program is supposed to return if the weather is 'beautiful, hot, or cold' in terms of Celsius;
     * therefore, the need to convert from Celsius back to Fahrenheit in the setc() method seemed useless.
     * I still left it in just because there COULD be a further implementation of the project that required that
     * conversion.
     *
     *
     * -> Set the function names to follow a clearer and more descriptive convention
     * i.e.
     * -> Chose to use camelCase for naming conventions.
     * -> Set variable names to be more descriptive than just 'f'.
     */

    temperature::temperature() : temp(32) { }


// This method takes in the user's given degrees, and sets the member variable, now named 'temperature',
    // to the given degrees. This temperature is presumed to be in Fahrenheit.
    void temperature::setFahrenheit(double degrees) {
        temperature::temp = degrees;
    }

    // This method performs a Fahrenheit to Celsius conversion on the member variable 'temperature'
    // and returns the result.
    double temperature::getCelsius()  {
        // The problem here is that since both 5 and 9 were integers, we were doing integer division
        // For precision, we need at least one of these values to be a double so it returns a double
        return (temperature::temp-32)*(5.0/9);        // NEED TO FIX
    }

    // I changed the name of the method (setc) to calculateCelsiusToFahrenheit for more clarity.
    // Also, I fixed the formula for Celsius to Fahrenheit such that it actually worked.
    void temperature::convertCelsiusToFahrenheit(int c) {
        temperature::temp = (c*(9.0/5.0) + 32);
    }

    double temperature::getTemperature() {
        return temperature::temp;
    }


