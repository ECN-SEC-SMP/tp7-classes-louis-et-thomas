#include "Carre.h"

Carre::Carre()
    : Rectangle(1,1)
{
}

Carre::Carre(Point center, double size)
    : Rectangle(center,size,size)
{
}

Carre::Carre(double Xcenter, double Ycenter, double size)
    : Rectangle(Xcenter,Ycenter,size,size)
{
}

Carre::Carre(double size)
    : Rectangle(size,size)
{
}

Carre::Carre(const Carre &c)
    : Rectangle()
{
    this->height = c.height;
    this->lenght = c.lenght;
}

Carre::~Carre()
{
}
