#pragma once
#include "Point.h"

class Forme
{
private:
    Point center;
    virtual std::ostream &show(std::ostream &os) const;
public:     
    Forme();
    Forme(double xCenter, double yCenter);
    Forme(const Point a);
    ~Forme();
    friend std::ostream &operator<<(std::ostream &os, const Forme &f);
    void operator+=(const Forme &f);
    virtual double perimetre();
    virtual double surface();
};

std::ostream &operator<<(std::ostream &os, const Forme &f);