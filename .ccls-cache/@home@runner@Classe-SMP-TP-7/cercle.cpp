#include "cercle.h"
#include <cmath>

// Constructeur avec un Point et un rayon
Cercle::Cercle(const Point &centre, double rayon)
    : Forme(centre), rayon(rayon) {}
Cercle::Cercle(Point pt) : Forme(pt), rayon(1) {}
Cercle::Cercle() : Forme(Point(0, 0)), rayon(1) {}

// Définir les méthodes abstraites
double Cercle::perimetre() { return 2 * M_PI * rayon; }
double Cercle::surface() { return M_PI * pow(rayon, 2); }

// Accesseur pour le rayon
double Cercle::getRayon() const { return rayon; }

// Surcharger l'opérateur <<
ostream &operator<<(ostream &os, const Cercle &c) {
  os << " Ceci est Cercle [ centre = " << c.getptcentre() << ", rayon = " << c.getRayon()
     << " ]";
  return os;
}