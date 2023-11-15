#include "P0.h"
#include <iostream>

using namespace std;

int main() {
  int n;
  double x, y, z;
  
  BrazoRobotico RB(45.5, 33.0, 68.2, false);
  
  do {
    cout << "\nX: " << RB.getX() << endl;
    cout << "Y: " << RB.getY() << endl;
    cout << "Z: " << RB.getZ() << endl;
    cout << "Sujetar (Sí = 1; No = 0): " << RB.getSujetar() << endl;
    
    cout << "\n¿Qué quieres hacer? (coger = 1; soltar = 2; mover = 3; salir = otro): ";
    cin >> n;
    
    if (n == 1) {
      RB.coger();
    } else if (n == 2) {
      RB.soltar();
    } else if (n == 3) {
      if(RB.getSujetar()){
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
        cout << "Z: ";
        cin >> z;
        RB.mover(x, y, z);
      } else {
        cout << "Error, objeto no agarrado." << endl;
      }
    } else {
      exit(0);
    } 
  } while (n >= 1 && n <= 3);
  
  return 0;
}