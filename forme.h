#pragma once

#include "point.h"
#include <iostream>
using namespace std;

class Forme {
private:
  Point pointcentre;

public:
  // Surcharge
  Forme &operator+=(Forme const &form1);

  virtual double perimetre() = 0;
  virtual double surface() = 0;

  // Acesseur
  Point getptcentre() const;

  // Constructeur
  Forme();
  Forme(Point pt) : pointcentre(pt){};
};

// Surcharger l'operateur <<
ostream &operator<<(ostream &os, Forme const &f);
