#include "forme.h"
//#include "point.h"
#include <iostream>
using namespace std;

// Surcharge operateur +=
Forme &Forme::operator+=(Forme const &form1) {
  pointcentre += form1.pointcentre; 
  return *this;
}
