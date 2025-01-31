#include "Point.h"

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point::Point(const Point &other)
{
    this->x = other.x;
    this->y = other.y;
}

Point::~Point()
{
}

void Point::translater(const Point &other)
{
    this->x += other.x;
    this->y += other.y;
}

void Point::translater(double dx, double dy)
{
    this->x += dx;
    this->y += dy;
}

double Point::getX()
{
    return this->x;
}

double Point::getY()
{
    return this->y;
}

void Point::setX(double new_x)
{
    this->x = new_x;
}

void Point::setY(double new_y)
{
    this->y = new_y;
}

std::ostream& operator<<(std::ostream& os, const Point &p)
{
    os << "Point(" << p.x << "," << p.y << ")";
    return os;
}

void Point::operator+=(const Point &a)
{
    this->x += a.x;
    this->y += a.y;
}