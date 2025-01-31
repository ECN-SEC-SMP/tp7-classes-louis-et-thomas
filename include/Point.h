#pragma once
#include <iostream>

class Point
{
private:
    double x, y;

public:
    Point(double x, double y);
    Point();
    Point(const Point &other);
    ~Point();
    void translater(const Point &other);
    void translater(double dx, double dy);
    double getX();
    double getY();
    void setX(double new_x);
    void setY(double new_y);
    friend std::ostream &operator<<(std::ostream &os, const Point &p);
    void operator+=(const Point &a);
};

std::ostream &operator<<(std::ostream &os, const Point &p);