#include "Cercle.h"
#include <math.h>

Cercle::Cercle(Point center, double rayon)
    : Forme(center)
{
    this->rayon = rayon;
}

Cercle::Cercle(double Xcenter, double Ycenter, double rayon)
    : Forme(Xcenter,Ycenter)
{
    this->rayon = rayon;
}

Cercle::Cercle(double rayon)
    : Forme()
{
    this->rayon = rayon;
}

Cercle::Cercle()
    : Forme()
{
    this->rayon = 1;
}

Cercle::~Cercle()
{
}

double Cercle::perimetre()
{
    return 2 * M_PI * this->rayon;
}

double Cercle::surface()
{
    return M_PI * this->rayon * this->rayon;
}

std::ostream &Cercle::show(std::ostream &os) const
{
    os << "Cercle(" << this->rayon << "," << this->center << ")";
    return os;
}