/*
* Erik Cabrera González
* A01334318
* Proyecto Nutrición
* Programar la clase Dieta que:
* Atributos: tipo, calorías, proteínas, lipidos y carbs
* Métodos: constructor, getters(), setters(), calxcomida()
*/
#ifndef DIETA_H
#define DIETA_H

#include <string>
#include <iostream>

using namespace std;

class Dieta{
protected:
  string tipo;
  float calorias;
  float proteinas;
  float lipidos;
  float carbs;

public:
  Dieta(): tipo(""), calorias(0), proteinas(0), lipidos(0), carbs(0){};
  Dieta(string tip, float cal, float pro, float lip, float car): tipo(tip), calorias(cal), proteinas(pro), lipidos(lip), carbs(car){};

  string get_tipo();
  float get_calorias();
  float get_proteinas();
  float get_lipidos();
  float get_carbs();

  void set_tipo(string );
  void set_calorias(float );
  void set_proteinas(float );
  void set_lipidos(float );
  void set_carbs(float );

  float calxcomida(int );
  string toString()const;

};


string Dieta::get_tipo(){
  return tipo;
}

void Dieta::set_tipo(string tip){
  tipo = tip;
}

float Dieta::get_calorias(){
  return calorias;
}

void Dieta::set_calorias(float cal){
  calorias = cal;
}

float Dieta::get_proteinas(){
  return proteinas;
}

void Dieta::set_proteinas(float pro){
  proteinas = pro;
}

float Dieta::get_lipidos(){
  return lipidos;
}

void Dieta::set_lipidos(float lip){
  lipidos = lip;
}

float Dieta::get_carbs(){
  return carbs;
}

void Dieta::set_carbs(float car){
  carbs = car;
}

float Dieta::calxcomida(int veces){
  float comidas;
  comidas = calorias / veces;
  return comidas;
}

string Dieta::toString()const{
  stringstream aux;
  aux << "Tipo:" << tipo << " Calorías:" << calorias << " Proteínas:" << proteinas << " Lípidos:" << lipidos << " Carbohidratos:" << carbs << "\n";
  return aux.str();
}

#endif
