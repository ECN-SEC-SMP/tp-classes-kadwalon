#include "point.h"
#include <iostream>
using namespace std;

// Acceseur
double Point::getX() { return this->X; }
double Point::getY() { return this->Y; }

// Mutateur
void Point::setX(double X) { this->X = X; }
void Point::setY(double Y) { this->Y = Y; }

// Surcharge operateur +=
Point& Point::operator+=(Point const &pt1) {
  X += pt1.X;
  Y += pt1.Y;
  return * this;
}

// Surcharge operateur <<
/*
void Point::operator<<(Point const &pt1) {
  std::cout << "X :" << pt1.X << "Y : " << pt1.Y << endl;
}*/
ostream &operator << (ostream &os, Point &p) {
  os << " ( x: " << p.getX() << ", y: " << p.getY() << ")";
  return os;
}




