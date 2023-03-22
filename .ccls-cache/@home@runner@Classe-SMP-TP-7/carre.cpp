#pragma once
#include "carre.h"
#include "forme.h"
#include "point.h"
#include "rectangle.h"
#include <iostream>
using namespace std;

// acesseur
// Point Rectangle::getptcentre() const { return this->pointcentre; }

double Carre::getlongueur() const { return this->longueur; }
double Carre::getlargeur() const { return this->largeur; }

double Carre::perimetre() {
  return this->getlargeur() * 2 + this->getlongueur() * 2;
}
double Carre::surface() { return this->getlargeur() * this->getlongueur(); }

// Constructeur
Carre::Carre() : Rectangle(Point(0, 0), 1, 1), longueur(1), largeur(1) {}

Carre::Carre(Point pt, double cote)
    : Rectangle(), longueur(cote), largeur(cote) {}

ostream &operator<<(ostream &os, Carre const &f) {
  os << "\nCeci est un Carré de centre " << f.getptcentre() << "\nde coté "<< f.getlongueur() << endl;
  return os;
}