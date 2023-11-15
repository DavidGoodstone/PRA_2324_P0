#ifndef BRAZOROBOTICO_H_INCLUDED
#define BRAZOROBOTICO_H_INCLUDED

class BrazoRobotico {
private:
  double x;
  double y;
  double z;
  bool sujetar;

public:
  BrazoRobotico(double x, double y, double z, bool sujetar);
  double getX();
  double getY();
  double getZ();
  bool getSujetar();
  void coger();
  void soltar();
  void mover(double x, double y, double z);
};

#endif
