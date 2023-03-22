#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"

class Cercle : public Forme {
private:
    double rayon;
public:
  // Constructeur
  Cercle();// : centre(Point(0, 0)), rayon(1){};
  Cercle(Point pt) ;
  Cercle(const Point &centre, double rayon);
  // Cercle(Point pt, Point pt2) : centre(pt), rayon(((pt.X-pt2.X)*(pt.X- pt2.X)
  // + ((pt.Y-pt2.Y)*(pt.Y-pt2.Y)))/((pt.X-pt2.X)*(pt.X-pt2.X) +
  // ((pt.Y-pt2.Y)*(pt.Y-pt2.Y)))) {};


    // Définir les méthodes abstraites
    double perimetre()  override;
    double surface()  override;

    // Accesseur pour le rayon
    double getRayon() const;

};

#endif

// Surcharger l'operateur <<
ostream &operator<<(ostream &os, Cercle const &c);
