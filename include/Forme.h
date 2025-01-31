#pragma once
#include "Point.h"

class Forme
{
protected:
    Point center;
private:
    virtual std::ostream &show(std::ostream &os) const = 0;
public:     
    Forme();
    Forme(double xCenter, double yCenter);
    Forme(const Point a);
    ~Forme() = default;
    friend std::ostream &operator<<(std::ostream &os, const Forme &f);
    void operator+=(const Forme &f);
    virtual double perimetre() = 0;
    virtual double surface() = 0;
};

std::ostream &operator<<(std::ostream &os, const Forme &f);