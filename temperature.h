//
// Created by Kane Cleveland on 8/30/23.
//

#ifndef MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
#define MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
#include "main.cpp"
class temperature {
private:
    double fahrenheit;
public:
    temperature();
    double getFahrenheit();
    void setFahrenheit(int degrees);
    double getCelsius();
    // NOTE: the setCelsius function is unnecessary since getCelsius already returns the Fahrenheit conversion
    // but we will implement it anyway because it is a part of the original code, EXCEPT we will fix the
    // temperature conversion, which was not correct.
    void setCelsius(int degrees);

};



#endif //MGM1_STYLE_ME_KANECLEV_TEMPERATURE_H
