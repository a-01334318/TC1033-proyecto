/*
* Erik Cabrera González
* A01334318
* Proyecto Nutrición
* Programar la clase Objetivo que:
* Atributos: tipo, cantidad, tiempo
* Métodos: constructor, getters(), setters(), kilosalmes(), toString()
*/

#ifndef OBJETIVO_H
#define OBJETIVO_H

#include <string>
#include <iostream>

using namespace std;

//Declaración de clase Objetivo
class Objetivo{

  //Declaro atributos protegidos
  protected:
    string tipo;
    float cantidad;
    int tiempo;

  //Declaro métodos públicos
  public:
    //Constructor por default
    Objetivo(): tipo(""), cantidad(0), tiempo(0){};
    //Constructor con parámetros
    Objetivo(string tip, float can, int tie): tipo(tip), cantidad(can), tiempo(tie){};

    //getters
    string get_tipo();
    float get_cantidad();
    int get_tiempo();

    //setters
    void set_tipo(string );
    void set_cantidad(float );
    void set_tiempo(int );

    //métodos extra
    float kilosalmes();
    string toString()const;
};

/**
 * getter tipo
 *
 * @param
 * @return string: tipo de objetivo
*/
string Objetivo::get_tipo(){
  return tipo;
}

/**
 * setter tipo
 *
 * @param string tip: tipo de objetivo
 * @return
*/
void Objetivo::set_tipo(string tip){
  tipo = tip;
}

/**
 * getter cantidad
 *
 * @param
 * @return float: cantidad de kilos
*/
float Objetivo::get_cantidad(){
  return cantidad;
}

/**
 * setter cantidad
 *
 * @param float can: cantidad de kilos
 * @return
*/
void Objetivo::set_cantidad(float can){
  cantidad = can;
}

/**
 * getter tiempo
 *
 * @param
 * @return int tiempo: tiempo para alcanzar objetivo
*/
int Objetivo::get_tiempo(){
  return tiempo;
}

/**
 * setter tiempo
 *
 * @param int tie: tiempo para alcanzar objetivo
 * @return
*/
void Objetivo::set_tiempo(int tie){
  tiempo = tie;
}

/**
 * Metodo que calcula los kilos al mes, divide la cantidad de kilos
 * entre el tiempo para alcanzar objetivo (meses).
 *
 * @param
 * @return float de meta de kilos al mes
*/
float Objetivo::kilosalmes(){
  float meta;
  meta = cantidad / tiempo;
  return meta;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del Objetivo
*/
string Objetivo::toString()const{
  stringstream aux;
  aux << "Tipo:" << tipo << " Kilos a subir/bajar:" << cantidad << " Tiempo:" << tiempo << "\n";
  return aux.str();
}

#endif
