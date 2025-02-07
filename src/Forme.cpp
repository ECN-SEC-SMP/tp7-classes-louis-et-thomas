#include "Forme.h"

Forme::Forme(const Point a)
{
    this->center = a;
}

Forme::Forme(double xCenter, double yCenter)
{
    this->center = Point(xCenter, yCenter);
}

Forme::Forme()
{
    this->center = Point();
}

std::ostream &operator<<(std::ostream &os, const Forme &f)
{
    return f.show(os);
}

void Forme::operator+=(const Forme &f)
{
    this->center += f.center;
}