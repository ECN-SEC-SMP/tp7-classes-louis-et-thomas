#pragma once

#include "Forme.h"

class Rectangle : public Forme
{
protected:
    double lenght;
    double height;
private:
    virtual std::ostream &show(std::ostream &os) const;
public:    
    Rectangle();
    Rectangle(double xCenter, double yCenter, double lenght, double height);
    Rectangle(Point center, double lenght, double height);
    Rectangle(double lenght, double height);
    Rectangle(const Rectangle &r);
    ~Rectangle();
    virtual double perimetre();
    virtual double surface();
};
