#pragma once
#include <iostream>
using namespace std;

class Point {
private:
  double X;
  double Y;

public:
  // Méthodes
  void translater(Point pt);
  void translater(double a, double b);

  // Acceseur
  double getX() const;
  double getY() const;

  // Mutateur
  void setX(double X);
  void setY(double Y);

  // Surcharge
  Point &operator+=(Point const &pt1);

  // Constructeur sans parametres
  Point() : X(0), Y(0) {}
  // Constructeur avec deux parametres réels
  Point(double x, double y) : X(x), Y(y) {}
  // Constructeur par recopie
  Point(const Point &p) : X(p.X), Y(p.Y) {}
};

// Surcharger l'operateur <<
ostream &operator<<(ostream &os, Point const &p);