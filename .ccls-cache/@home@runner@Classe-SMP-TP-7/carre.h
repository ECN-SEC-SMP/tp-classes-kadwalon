#pragma once

#include "forme.h"
#include "point.h"
#include "rectangle.h"
#include <iostream>
using namespace std;

class Carre : public Rectangle {
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
  double getlongueur() const;
  double getlargeur() const;

  // Constructeur
  Carre(Point pt, double cote);
  Carre();
};
// Surcharger l'operateur <<
ostream &operator<<(ostream &os, Carre const &f);
