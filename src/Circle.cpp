#include <cmath>
#include "Circle.h"

double Circle::calcArea()
{
    return 3.14159*pow(this->radius,2);
}

double Circle::calcDiameter()
{
    return 2*this->radius;
}

double Circle::calcVolume()
{
    return (4/3)*3.14159*pow(this->radius,3);
}

double Circle::calcDensity(double mass, double volume)
{
    return mass/volume;
}
