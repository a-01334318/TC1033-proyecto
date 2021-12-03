/*
* Erik Cabrera González
* A01334318
* Proyecto Nutrición
* Programar la clase Paciente que:
* Atributos: nombre, peso, estatura, edad y sexo
* Métodos: constructor, getters(), setters(), imc(tiempo)
* Herencia: Hipertension y Colitis
* Composición: Dieta y Objetivo
* Nota: Los arreglos tipo Dieta y Objetivo se pusieron
* públicos para posteriormente ser manipulados mientras corre main()
*/

#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <iostream>
#include <sstream>
#include "objetivo.h"
#include "dieta.h"

using namespace std;

//Declaro constante MAX
const int MAX = 100;

//Declaración de clase Paciente
class Paciente{

  //Declaro atributos protegidos
  protected:
    string nombre;
    string sexo;
    float peso;
    float estatura;
    int edad;

  //Declaro atributos y métodos públicos
  public:
    Dieta dietas[MAX];
    Objetivo objetivos[MAX];
    int idie, iobj;

    //Constructor por default
    Paciente(): nombre(""), sexo(""), peso(0), estatura(0), edad(0){};
    //Constructor con parámetros
    Paciente(string nom, string se, float pe, float es, int ed): nombre(nom), sexo(se), peso(pe), estatura(es), edad(ed){};

    //getters
    string get_nombre();
    string get_sexo();
    float get_peso();
    float get_estatura();
    int get_edad();

    //setters
    void set_nombre(string );
    void set_sexo(string );
    void set_peso(float );
    void set_estatura(float );
    void set_edad(int );

    //métodos extra
    float imc();
    void creaEjemploDieta();
    void creaEjemploObjetivo();
    void agregaDieta(string, float, float, float, float);
    void agregaObjetivo(string, float, int);
    string toString()const;
};

/**
 * getter nombre
 *
 * @param
 * @return string: nombre del paciente
*/
string Paciente::get_nombre(){
  return nombre;
}

/**
 * setter nombre
 *
 * @param string nom: nombre del paciente
 * @return
*/
void Paciente::set_nombre(string nom){
  nombre = nom;
}

/**
 * getter sexo
 *
 * @param
 * @return string: sexo del paciente
*/
string Paciente::get_sexo(){
  return sexo;
}

/**
 * setter sexo
 *
 * @param string se: sexo del paciente
 * @return
*/
void Paciente::set_sexo(string se){
  sexo = se;
}

/**
 * getter peso
 *
 * @param
 * @return float: peso del paciente
*/
float Paciente::get_peso(){
  return peso;
}

/**
 * setter peso
 *
 * @param float pe: peso del paciente
 * @return
*/
void Paciente::set_peso(float pe){
  peso = pe;
}

/**
 * getter estatura
 *
 * @param
 * @return float: estatura del paciente
*/
float Paciente::get_estatura(){
  return estatura;
}

/**
 * setter estatura
 *
 * @param float es: estatura del paciente
 * @return
*/
void Paciente::set_estatura(float es){
  estatura = es;
}

/**
 * getter edad
 *
 * @param
 * @return int: edad del paciente
*/
int Paciente::get_edad(){
  return edad;
}

/**
 * setter edad
 *
 * @param int ed: edad del paciente
 * @return
*/
void Paciente::set_edad(int ed){
  edad = ed;
}

/**
 * Metodo que calcula el imc, divide el peso
 * entre el cuadrado de la estatura del paciente.
 *
 * @param
 * @return float imc
*/
float Paciente::imc(){
  float imc = peso / (estatura * estatura);
  return imc;
}

/**
 * Utliza el arreglo de tipo Dieta.
 * Llena el arreglo con 3 ejemplos. Los identificadores de dietas
 * van de 1 a 99.
 * El id de la última dieta lo modifica hasta el ultimo creado.
 *
 * @param
 * @return
*/
void Paciente::creaEjemploDieta(){
  dietas[0] = Dieta("Ayuno", 1800, 40, 10, 50);
  idie += 1;
  dietas[1] = Dieta("Keto", 1600, 60, 10, 20);
  idie += 1;
  dietas[2] = Dieta("Vegana", 1500, 40, 10, 60);
}

/**
 * Utliza el arreglo de tipo Objetivo.
 * Llena el arreglo con 4 ejemplos. Los identificadores de objetivos
 * van de 1 a 99.
 * El id de la última dieta lo modifica hasta el ultimo creado.
 *
 * @param
 * @return
*/
void Paciente::creaEjemploObjetivo(){
  objetivos[0] = Objetivo("Bajar", 3, 2);
  iobj += 1;
  objetivos[1] = Objetivo("Bajar", 5, 3);
  iobj += 1;
  objetivos[2] = Objetivo("Subir", 10, 2);
  iobj += 1;
  objetivos[3] = Objetivo("Bajar", 7, 2);
}

/**
 * Utiliza arreglo de Dieta y su ultimo indice.
 * Recibe el tipo, calorías, proteína, lípidos y carbs.
 * El metodo crea el objeto Dieta y lo
 * agrega al arreglo
 *
 * @param
 * @return
 */
void Paciente::agregaDieta(string tip, float cal, float pro, float lip, float car){
  idie += 1;
  dietas[idie] = Dieta(tip, cal, pro, lip, car);
}

/**
 * Utiliza arreglo de Objetivo y su ultimo indice.
 * Recibe el tipo, cantidad y tiempo.
 * El metodo crea el objeto Objetivo y lo
 * agrega al arreglo
 *
 * @param
 * @return
 */
void Paciente::agregaObjetivo(string tip, float can, int tie){
  iobj += 1;
  objetivos[iobj] = Objetivo(tip, can, tie);
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del Paciente
*/
string Paciente::toString()const{
  stringstream aux;
  aux << "Nombre:" << nombre << " Sexo:" << sexo << " Peso:" << peso << " Estatura:" << estatura << " Edad:" << edad << "\n";
  return aux.str();
}

// Declaro clase que hereda de Paciente
class Hipertension: public Paciente{

  //Declaro variables protegidas
  protected:
    bool tratamiento;
    float colesterol;

  //Declaro métodos públicos
  public:

    //Constructor por default
    Hipertension(): Paciente(){};

    //Constructor con parámetros
    Hipertension(string nom, string se, float pe, float es, int ed, bool tra, float col): Paciente(nom, se, pe, es, ed){
    tratamiento = tra;
    colesterol = col;
    }

    //getters
    bool get_tratamiento();
    float get_colesterol();

    //setters
    void set_tratamiento(bool );
    void set_colesterol(float );

    //métodos extra
    string toString()const;
};

/**
 * getter tratamiento
 *
 * @param
 * @return bool: el paciente es o no tratado
*/
bool Hipertension::get_tratamiento(){
  return tratamiento;
}

/**
 * setter tratamiento
 *
 * @param bool tra: el paciente es o no tratado
 * @return
*/
void Hipertension::set_tratamiento(bool tra){
  tratamiento = tra;
}

/**
 * getter colesterol
 *
 * @param
 * @return float: colesterol en sangre
*/
float Hipertension::get_colesterol(){
  return colesterol;
}

/**
 * setter colesterol
 *
 * @param float col: colesterol en sangre
 * @return
*/
void Hipertension::set_colesterol(float col){
  colesterol = col;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del Paciente con Hipertension
*/
string Hipertension::toString()const{
  stringstream aux;
  aux << "Nombre:" << nombre << " Sexo:" << sexo << " Peso:" << peso << " Estatura:" << estatura << " Edad:" << edad << " Tratamiento:" << tratamiento << " Colesterol:" << colesterol << "\n";
  return aux.str();
}

//Declaro clase que hereda de Paciente
  class Colitis: public Paciente{

    //Declaro variables protegidas
    protected:
      bool tratamiento;
      string subtipo;
      float hierro;

    //Declaro métodos y variables públicos
    public:
      Colitis(): Paciente(){};
      Colitis(string nom, string se, float pe, float es, int ed, bool tra, string sub, float fe): Paciente(nom, se, pe, es, ed){
        tratamiento = tra;
        subtipo = sub;
        hierro = fe;
      }

      //getters
      bool get_tratamiento();
      string get_subtipo();
      float get_hierro();

      //setters
      void set_tratamiento(bool );
      void set_subtipo(string );
      void set_hierro(float );

      //métodos extra
      string toString()const;

};

/**
 * getter tratamiento
 *
 * @param
 * @return bool: el paciente es o no tratado
*/
bool Colitis::get_tratamiento(){
  return tratamiento;
}

/**
 * setter tratamiento
 *
 * @param bool tra: el paciente es o no tratado
 * @return
*/
void Colitis::set_tratamiento(bool tra){
  tratamiento = tra;
}

/**
 * getter subtipo
 *
 * @param
 * @return string: subtipo de colits
*/
string Colitis::get_subtipo(){
  return subtipo;
}

/**
 * setter subtipo
 *
 * @param string sub: subtipo de colitis
 * @return
*/
void Colitis::set_subtipo(string sub){
  subtipo = sub;
}

/**
 * getter hierro
 *
 * @param
 * @return float: hierro en sangre
*/
float Colitis::get_hierro(){
  return hierro;
}

/**
 * getter hierro
 *
 * @param float fe: hierro en sangre
 * @return
*/
void Colitis::set_hierro(float fe){
  hierro = fe;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del Paciente con Colitis
*/
string Colitis::toString()const{
  stringstream aux;
  aux << "Nombre:" << nombre << " Sexo:" << sexo << " Peso:" << peso << " Estatura:" << estatura << " Edad:" << edad << " Tratamiento:" << tratamiento << " Subtipo:" << subtipo << " Hierro:" << hierro << "\n";
  return aux.str();
}

#endif
