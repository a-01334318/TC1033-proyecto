/*
* Erik Cabrera González
* A01334318
* Proyecto Nutrición
* Programar la clase Dieta que:
* Atributos: tipo, calorías, proteínas, lipidos y carbs
* Métodos: constructor, getters(), setters(), calxcomida(), toString()
*/

#ifndef DIETA_H
#define DIETA_H

#include <string>
#include <iostream>

using namespace std;

//Declaración de clase Dieta
class Dieta{

  //Declaro atributos protegidos
  protected:
    string tipo;
    float calorias;
    float proteinas;
    float lipidos;
    float carbs;

  //Declaro métodos públicas
  public:

    //Constructor por default
    Dieta(): tipo(""), calorias(0), proteinas(0), lipidos(0), carbs(0){};
    //Constructor con parámetros
    Dieta(string tip, float cal, float pro, float lip, float car): tipo(tip), calorias(cal), proteinas(pro), lipidos(lip), carbs(car){};

    //getters
    string get_tipo();
    float get_calorias();
    float get_proteinas();
    float get_lipidos();
    float get_carbs();

    //setters
    void set_tipo(string );
    void set_calorias(float );
    void set_proteinas(float );
    void set_lipidos(float );
    void set_carbs(float );

    //métodos específicos
    float calxcomida(int );
    string toString()const;
};

/**
 * getter tipo
 *
 * @param
 * @return string: tipo de dieta
*/
string Dieta::get_tipo(){
  return tipo;
}

/**
 * setter tipo
 *
 * @param string tip: tipo de dieta
 * @return
*/
void Dieta::set_tipo(string tip){
  tipo = tip;
}

/**
 * getter calorías
 *
 * @param
 * @return float: calorías
*/
float Dieta::get_calorias(){
  return calorias;
}

/**
 * setter calorías
 *
 * @param float cal: calorías
 * @return
*/
void Dieta::set_calorias(float cal){
  calorias = cal;
}

/**
 * getter proteínas
 *
 * @param
 * @return float: proteínas
*/
float Dieta::get_proteinas(){
  return proteinas;
}

/**
 * setter proteínas
 *
 * @param float pro: proteínas
 * @return
*/
void Dieta::set_proteinas(float pro){
  proteinas = pro;
}

/**
 * getter lípidos
 *
 * @param
 * @return float: lípidos
*/
float Dieta::get_lipidos(){
  return lipidos;
}

/**
 * setter lípidos
 *
 * @param float lip: lípidos
 * @return
*/
void Dieta::set_lipidos(float lip){
  lipidos = lip;
}

/**
 * getter carbs
 *
 * @param
 * @return float: carbs
*/
float Dieta::get_carbs(){
  return carbs;
}

/**
 * setter carbs
 *
 * @param float car: carbohidratos
 * @return
*/
void Dieta::set_carbs(float car){
  carbs = car;
}

/**
 * Metodo que calcula las calorías por comida, divide las calorías
 * entre las comidas del día.
 *
 * @param
 * @return float de comidas al día
*/
float Dieta::calxcomida(int veces){
  float comidas;
  comidas = calorias / veces;
  return comidas;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Dieta
*/
string Dieta::toString()const{
  stringstream aux;
  aux << "Tipo:" << tipo << " Calorías:" << calorias << " Proteínas:" << proteinas << " Lípidos:" << lipidos << " Carbohidratos:" << carbs << "\n";
  return aux.str();
}

#endif
