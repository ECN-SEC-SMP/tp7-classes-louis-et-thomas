#include <iostream>
#include "Point.h"


int main()
{
    Point p = Point(5,6);
    std::cout << "La valeur de x est " << p.getX() << std::endl;
    std::cout << "La valeur de y est " << p.getY() << std::endl;
    p.translater(12,3);
    std::cout << "Apres translation la valeur de x est " << p.getX() << std::endl;
    std::cout << "Apres translation la valeur de y est " << p.getY() << std::endl;

    std::cout << p << std::endl;
    Point v = Point(5,6);
    std::cout << v << std::endl;
    p += v;
    std::cout << p << std::endl;
}
