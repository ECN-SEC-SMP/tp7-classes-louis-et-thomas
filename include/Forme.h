#pragma once
#include "Point.h"

class Forme
{
private:
    Point center;
    virtual std::ostream &show(std::ostream &os) const;
public:     
    Forme(const Point a);
    ~Forme();
    friend std::ostream &operator<<(std::ostream &os, const Forme &f);
    void operator+=(const Forme &f);
    virtual int perimetre();
    virtual int surface();
};

std::ostream &operator<<(std::ostream &os, const Forme &f);