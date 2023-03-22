#pragma once
#include <iostream>
using namespace std;
#include "cercle.h"
#include "forme.h"
#include "point.h"
#include "rectangle.h"
#include "carre.h"

int main() {
  std::cout << "Hello World!\n";
  Point pt;
  Point pt2(5.1, 8.2);
  Point pt3(pt2);
  pt += pt2;

  cout << "p1: " << pt << endl;
  cout << "p2: " << pt2 << endl;

  pt += pt2;

  cout << "pt1 après pt1 += pt2: " << pt << endl;
  // Forme forme(pt);
  // Point new1 = forme.getptcentre();
  // cout << new1 << endl;
  // cout << forme << endl;
  Rectangle rect(pt, 10, 5);
  cout << rect.surface() << endl;
  cout << rect<<endl;
  
  Cercle rond(pt);
  Cercle rond2;

  cout << rond.surface() << endl;
  cout << rond.perimetre() << endl;
  cout << rond2.surface() << endl;
  cout << rond <<endl;

  Carre car(pt,5);
  cout<<car;
  // std::cout << pt;
}

