/*
* Erik Cabrera González
* A01334318
* Proyecto Nutricion
* Programar la clase Objetivo que:
* Atributos: tipo, cantidad, tiempo
* Métodos: constructor, getters(), setters(), kilosalmes()
*/
#ifndef OBJETIVO_H
#define OBJETIVO_H

#include <string>
#include <iostream>

using namespace std;

class Objetivo{
private:
  string tipo;
  float cantidad;
  int tiempo;

public:
  Objetivo();
  Objetivo(string tip, float can, int tie): tipo(tip), cantidad(can), tiempo(tie){};

  string get_tipo();
  float get_cantidad();
  int get_tiempo();


  void set_tipo(string );
  void set_cantidad(float );
  void set_tiempo(int );

  float kilosalmes();

};

string Objetivo::get_tipo(){
  return tipo;
}

void Objetivo::set_tipo(string tip){
  tipo = tip;
}

float Objetivo::get_cantidad(){
  return cantidad;
}

void Objetivo::set_cantidad(float can){
  cantidad = can;
}

int Objetivo::get_tiempo(){
  return tiempo;
}

void Objetivo::set_tiempo(int tie){
  tiempo = tie;
}

float Objetivo::kilosalmes(){
  float meta;
  meta = cantidad / tiempo;
  return meta;
}

#endif
