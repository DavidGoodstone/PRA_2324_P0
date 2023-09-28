#include "P0.h"
#include <iostream>

using namespace std;

int main(){
  int n;
  
  BrazoRobotico RB(45.5, 33.0, 68.2, false);
  
  do{
    RB.getX();
    RB.getY();
    RB.getZ();
    RB.getSujetar();
      
    cout << "¿Qué quieres hacer? (coger = 1; soltar = 2; mover = 3; salir = 4): " << endl;
    cin >> n;
    
    if(n == 1){
      RB.coger();
    }else if(n == 2){
      RB.soltar();
    }else if(n == 3){
      RB.mover(62.0, 89.9, 12.1);
    }else if(n == 4){
      exit(0);
    }else{
      cout << "Elige una de las opciones escritas" << endl;
    }
  }while(n >= 1 && n <= 3);
  
  return 0;
}