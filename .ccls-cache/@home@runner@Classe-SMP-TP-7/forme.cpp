#pragma once
#include "forme.h"
#include "point.h"
#include <iostream>
using namespace std;

// Surcharge operateur +=
Forme &Forme::operator+=(Forme const &form1) {
  pointcentre += form1.pointcentre;
  return *this;
}

Point Forme::getptcentre() const { return this->pointcentre; }

ostream &operator<<(ostream &os, Forme const &f) {
  os << "forme abstraite  ( point centrale : " << f.getptcentre() << ")";
  return os;
}

