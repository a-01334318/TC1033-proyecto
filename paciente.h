/*
* Erik Cabrera González
* A01334318
* Proyecto Nutricion
* Programar la clase Paciente que:
* Atributos: nombre, peso, estatura, edad y sexo
* Métodos: constructor, getters(), setters(), imc(tiempo)
* Herencia: Hipertension y Colitis
*/
#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <iostream>
#include "objetivo.h"
#include "dieta.h"

using namespace std;

class Paciente{
protected:
  string nombre;
  string sexo;
  float peso;
  float estatura;
  int edad;

public:
  Paciente();
  Paciente(string nom, string se, float pe, float es, int ed): nombre(nom), sexo(se), peso(pe), estatura(es), edad(ed){};

  string get_nombre();
  string get_sexo();
  float get_peso();
  float get_estatura();
  int get_edad();

  void set_nombre(string );
  void set_sexo(string );
  void set_peso(float );
  void set_estatura(float );
  void set_edad(int );

  float imc();

};


string Paciente::get_nombre(){
  return nombre;
}

void Paciente::set_nombre(string nom){
  nombre = nom;
}

string Paciente::get_sexo(){
  return sexo;
}

void Paciente::set_sexo(string se){
  sexo = se;
}

float Paciente::get_peso(){
  return peso;
}

void Paciente::set_peso(float pe){
  peso = pe;
}

float Paciente::get_estatura(){
  return estatura;
}

void Paciente::set_estatura(float es){
  estatura = es;
}

int Paciente::get_edad(){
  return edad;
}

void Paciente::set_edad(int ed){
  edad = ed;
}

float Paciente::imc(){
  float imc = peso / (estatura * estatura);
  return imc;
}

// Herencia Hipertension
class Hipertension: public Paciente{
protected:
  bool tratamiento;
  float colesterol;

public:
  Hipertension();
  Hipertension(string nom, string se, float pe, float es, int ed, bool tra, float col):Paciente(nom, se, pe, es, ed){
    tratamiento = tra;
    colesterol = col;
  }

  bool get_tratamiento();
  float get_colesterol();

  void set_tratamiento(bool );
  void set_colesterol(float );

};

bool Hipertension::get_tratamiento(){
  return tratamiento;
}

void Hipertension::set_tratamiento(bool tra){
  tratamiento = tra;
}

float Hipertension::get_colesterol(){
  return colesterol;
}

void Hipertension::set_colesterol(float col){
  colesterol = col;
}

// Herencia Colitis
class Colitis: public Paciente{
protected:
  bool tratamiento;
  string subtipo;
  float hierro;

public:
  Colitis();
  Colitis(string nom, string se, float pe, float es, int ed, bool tra, string sub, float fe):Paciente(nom, se, pe, es, ed){
    tratamiento = tra;
    subtipo = sub;
    hierro = fe;
  }

  bool get_tratamiento();
  string get_subtipo();
  float get_hierro();

  void set_tratamiento(bool );
  void set_subtipo(string );
  void set_hierro(float );

};

bool Colitis::get_tratamiento(){
  return tratamiento;
}

void Colitis::set_tratamiento(bool tra){
  tratamiento = tra;
}

string Colitis::get_subtipo(){
  return subtipo;
}

void Colitis::set_subtipo(string sub){
  subtipo = sub;
}

float Colitis::get_hierro(){
  return hierro;
}

void Colitis::set_hierro(float fe){
  hierro = fe;
}

#endif
