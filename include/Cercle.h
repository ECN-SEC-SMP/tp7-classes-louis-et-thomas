#pragma once 
#include "Forme.h"

class Cercle : public Forme
{
private:
    double rayon;
    virtual std::ostream &show(std::ostream &os) const;
public:
    Cercle(Point center, double rayon);
    Cercle(double Xcenter, double Ycenter, double rayon);
    Cercle(double rayon);
    Cercle();
    ~Cercle();
    virtual double perimetre();
    virtual double surface();
};
