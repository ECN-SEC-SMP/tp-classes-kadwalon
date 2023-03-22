#include <iostream>
using namespace std;
#include "point.h"

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

  
  //std::cout << pt;
}
