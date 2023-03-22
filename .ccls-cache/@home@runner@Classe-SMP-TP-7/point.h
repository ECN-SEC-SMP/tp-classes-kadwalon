class Point {
private:
  double X;
  double Y;

public:
  // Méthodes
  void translater(Point pt){};
  void translater(double a, double b){};
  double getX();
  double getY();
  void setX(double X);
  void setY(double Y);
  // Constructeur sans paramètres
  Point() : X(0), Y(0) {}
  // Constructeur avec deux paramètres réels
  Point(double x, double y) : X(x), Y(y) {}
  // Constructeur par recopie
  Point(const Point &p) : X(p.X), Y(p.Y) {}
};