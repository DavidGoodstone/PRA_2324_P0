#include "P0.h"
#include <iostream>

using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetar){
  this -> x = x;
  this -> y = y;
  this -> z = z;
  this -> sujetar = sujetar;
}

int BrazoRobotico::getX(){
  return x;
}

int BrazoRobotico::getY(){
  return y;
}

int BrazoRobotico::getZ(){
  return z;
}

bool BrazoRobotico::getSujetar(){
  return sujetar;
}

void BrazoRobotico::coger(){
  sujetar = true;
}

void BrazoRobotico::soltar(){
  sujetar = false;
}

void BrazoRobotico::mover(double x, double y, double z){
  if(sujetar){
    this -> x = x;
    this -> y = y;
    this -> z = z;
  }else{
    cout << "Error, objeto no agarrado." << endl;
  }
}