#pragma once

#include "point.h"
#include <iostream>
using namespace std;

class Forme : public Point {
private:
  Point pointcentre;

public:
  // Surcharge
  Forme &operator+=(Forme const &form1);
  virtual void perimetre();
  virutal void surface();
  // Acesseur
  Point getptcentre() const;

  // Constructeur
  Forme(Point pt) : pointcentre(pt){};
};

// Surcharger l'operateur <<
ostream &operator<<(ostream &os, Forme const &f);
