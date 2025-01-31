#include "Rectangle.h"

Rectangle::Rectangle(double xCenter, double yCenter, double lenght, double height)
    : Forme(xCenter, yCenter)
{
    this->height = height;
    this->lenght = lenght;
}

Rectangle::Rectangle(Point center, double lenght, double height)
    : Forme(center)
{
    this->height = height;
    this->lenght = lenght;
}

Rectangle::Rectangle()
    : Forme()
{
    this->height = 1;
    this->lenght = 1;
}

Rectangle::Rectangle(double lenght, double height)
    : Forme()
{
    this->height = height;
    this->lenght = lenght;
}

Rectangle::Rectangle(const Rectangle &f)
    : Forme()
{
    this->height = f.height;
    this->lenght = f.lenght;
}

Rectangle::~Rectangle()
{
}

double Rectangle::perimetre()
{
    return 2 * (this->lenght + this->height);
}

double Rectangle::surface()
{
    return this->height * this->lenght;
}

std::ostream &Rectangle::show(std::ostream &os) const
{
    os << "Rectangle(" << this->lenght << "x" << this->height << "," << this->center << ")";
    return os;
}