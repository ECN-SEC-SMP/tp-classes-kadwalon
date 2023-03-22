#pragma once

#include "forme.h"
#include "point.h"
#include <iostream>
using namespace std;

class Rectangle : public Forme {
private:
  Point pointcentre;
  double longueur;
  double largeur;

public:
  // Methodes
  double perimetre() override;
  double surface() override;

  // Acesseur
  // Point getptcentre() const;
  double getlongueur()  const;
  double getlargeur() const;

  // Constructeur
  Rectangle(Point pt, double L, double l);
  Rectangle();
};
// Surcharger l'operateur <<
ostream &operator<<(ostream &os, Rectangle const &f);
