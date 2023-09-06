//
// Created by Kane Cleveland on 8/30/23.
//

#ifndef MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
#define MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
#include "main.cpp"
// Define class in the header file.
class temperature {
    double temp; // Private double temp.
public: // Public methods; getters and setters. Changed the names of the methods for clarity.
    temperature();
    static double getFahrenheit();
    void setFahrenheit(double degrees);
    double getCelsius() const;
    void setCelsius(int degrees);
};



#endif //MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
