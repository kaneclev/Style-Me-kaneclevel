//
// Created by Kane Cleveland on 8/30/23.
//

#ifndef MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
#define MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
#include "main.cpp"

class temperature {
private:
    double temp;
public:
    temperature();
    double getTemperature();
    void setFahrenheit(double degrees);
    double getCelsius();
    void convertCelsiusToFahrenheit(int degrees);
};



#endif //MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
