#pragma once

#include "Forme.h"

class Rectangle : public Forme
{
private:
    double lenght;
    double height;
    virtual std::ostream &show(std::ostream &os) const;
public:
    Rectangle(double xCenter, double yCenter, double lenght, double height);
    Rectangle(Point center, double lenght, double height);
    Rectangle();
    Rectangle(double lenght, double height);
    Rectangle(const Rectangle &f);
    ~Rectangle();
    virtual double perimetre();
    virtual double surface();
};
