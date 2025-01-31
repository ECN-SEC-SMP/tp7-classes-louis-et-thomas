#include <iostream>
#include <vector>

#include "Point.h"
#include "Forme.h"
#include "Rectangle.h"
#include "Cercle.h"


int main()
{
    Point p = Point(5,6);
    std::cout << "La valeur de x est " << p.getX() << std::endl;
    std::cout << "La valeur de y est " << p.getY() << std::endl;
    p.translater(12,3);
    std::cout << "Apres translation la valeur de x est " << p.getX() << std::endl;
    std::cout << "Apres translation la valeur de y est " << p.getY() << std::endl;
    std::cout << std::endl;

    std::cout << p << std::endl;
    Point v = Point(5,6);
    std::cout << v << std::endl;
    p += v;
    std::cout << p << std::endl;
    std::cout << std::endl;

    std::vector<Forme*> formes;
    formes.push_back(new Rectangle(Point(0.5, 0.75), 5,9));
    formes.push_back(new Cercle(17));
    formes.push_back(new Rectangle(22,50));
    formes.push_back(new Cercle(Point(15, 28), 189));

    for (auto &&f : formes)
    {
        std::cout << *f << std::endl;
    }
}
