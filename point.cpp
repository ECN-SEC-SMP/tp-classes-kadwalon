#include "point.h"
#include <iostream>
using namespace std;

// Acceseur
double Point::getX() { return this->X; }
double Point::getY() { return this->Y; }

// Mutateur
void Point::setX(double X) { this->X = X; }
void Point::setY(double Y) { this->Y = Y; }
