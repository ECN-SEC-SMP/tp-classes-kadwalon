#include "point.h"
#include <iostream>
using namespace std;
// checker modelio
// Tanslater
void Point::translater(Point pt) {
  this->X = pt.X;
  this->Y = pt.Y;
}
void Point::translater(double a, double b) {
  this->X = a;
  this->Y = b;
}

// Acceseur
double Point::getX() const { return this->X; }
double Point::getY() const { return this->Y; }

// Mutateur
void Point::setX(double X) { this->X = X; }
void Point::setY(double Y) { this->Y = Y; }

// Surcharge operateur +=
Point &Point::operator+=(Point const &pt1) {
  X += pt1.X;
  Y += pt1.Y;
  return *this;
}

// Surcharge operateur <<
ostream &operator<<(ostream &os, Point const &p) {
  os << " ( x: " << p.getX() << ", y: " << p.getY() << ")";
  return os;
}
