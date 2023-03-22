#pragma once
#include "rectangle.h"
#include "forme.h"
#include "point.h"
#include <iostream>
using namespace std;

// acesseur
// Point Rectangle::getptcentre() const { return this->pointcentre; }

double Rectangle::getlongueur() const { return this->longueur; }
double Rectangle::getlargeur() const { return this->largeur; }

double Rectangle::perimetre() {
  return this->getlargeur() * 2 + this->getlongueur() * 2;
}
double Rectangle::surface() { return this->getlargeur() * this->getlongueur(); }

// Constructeur
Rectangle::Rectangle() : Forme(Point(0, 0)), longueur(1), largeur(1) {}

Rectangle::Rectangle(Point pt, double L, double l)
    : Forme(pt), longueur(L), largeur(l) {}

ostream &operator<<(ostream &os, Rectangle const &f) {
  os << "\nCeci est un rectangle de centre " << f.getptcentre()
     << "\nde longeur " << f.getlongueur() << "\nde largeur " << f.getlargeur()
     << "\n";
  return os;
}