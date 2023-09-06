//
// Created by Kane Cleveland on 8/30/23.
//

#ifndef MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
#define MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
#include "main.cpp"

class temperature {
    double temp;
public:
    temperature();
    static double getFahrenheit();
    void setFahrenheit(double degrees);
    double getCelsius() const;
    void setCelsius(int degrees);
};



#endif //MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
