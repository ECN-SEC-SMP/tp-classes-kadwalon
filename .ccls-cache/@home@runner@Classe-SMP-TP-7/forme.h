#include "point.h"
#include <iostream>
using namespace std;
class Forme {
private:
  Point pointcentre;

public:
  // Surcharge
  Forme& operator+=(Forme const &form1);

  // Surcharger l'opérateur <<
  // ostream &operator<<(ostream &os, Point const &p);
  // void operator << (ostream&, Point const &pt1);

  // Constructeur sans paramètres
  // Forme() : X(0), Y(0) {}
  // Constructeur avec deux paramètres réels
  // Forme(double x, double y) : X(x), Y(y) {}
  Forme(Point pt) : pointcentre(pt) {};
  // Constructeur par recopie
  // Forme(const Point &p) : X(p.X), Y(p.Y) {}
};