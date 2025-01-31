#pragma once

#include "Rectangle.h"

class Carre : Rectangle
{
private:
    virtual std::ostream &show(std::ostream &os) const;
public:
    Carre();
    Carre(Point center, double size);
    Carre(double Xcenter, double Ycenter, double size);
    Carre(double size);
    Carre(const Carre &c);
    ~Carre();
};

