/*
* Erik Cabrera González
* A01334318
* Proyecto Nutrición
* Programar la clase Directorio que:
* Atributos: pacientes[], hipertension[], colitis[], ipac, ihip, icol
* Métodos: constructor, getters(), setters() y extras
* Composición: Paciente, Hipertensión y Colitis
* Nota: Los arreglos tipo Paciente, Hipertension y Colitis se pusieron
* públicos para posteriormente ser manipulados mientras corre main()
*/

#ifndef DIRECTORIO_H_
#define DIRECTORIO_H_

#include <string>
#include <iostream>
#include <sstream>
#include "objetivo.h"
#include "dieta.h"
#include "paciente.h"

using namespace std;

//Declaración de calse Directorio
class Directorio{

  //Declaro atributos y métodos públicos
  public:
    Paciente pacientes[MAX];
    Hipertension hipertension[MAX];
    Colitis colitis [MAX];
    int ipac, ihip, icol, itot;

    //Declaro constructor y métodos
    Directorio();
    void creaEjemplosPacientes();
    void creaEjemplosHipertension();
    void creaEjemplosColitis();
    void muestraPacientes();
    void muestraColitis();
    void muestraHipertension();
    void agregaPaciente(string, string, float, float, int);
    void agregaHipertension(string, string, float, float, int, bool, float);
    void agregaColitis(string, string, float, float, int, bool, string, float);
    void totalPacientes();
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Directorio
 */
Directorio::Directorio(){

  ipac = 0;
  ihip = 0;
  icol = 0;
  itot = 0;
}

/**
 * Utliza el arreglo de tipo Paciente.
 * Llena el arreglo con 5 ejemplos. Los identificadores de pacientes
 * van de 1 a 99.
 * El id del ultimo paciente lo modifica hasta el ultimo creado.
 *
 * @param
 * @return
*/
void Directorio::creaEjemplosPacientes(){

  pacientes[0] = Paciente("Mónica González", "f", 55.0, 1.58, 58);
  ipac += 1;
  pacientes[1] = Paciente("Rafael Cabrera", "m", 68.0, 1.68, 58);
  ipac += 1;
  pacientes[2] = Paciente("Erik Cabrera", "m", 70.0, 1.80, 24);
  ipac += 1;
  pacientes[3] = Paciente("Arieh Cabrera", "m", 62.0, 1.78, 20);
  ipac += 1;
  pacientes[4] = Paciente("Akira Kurosawa", "m", 72.0, 1.65, 70);
  itot += 5;
}

/**
 * Utliza el arreglo de tipo Hipertension.
 * Llena el arreglo con 3 ejemplos. Los identificadores de hipertension
 * van de 1 a 99.
 * El id del ultimo paciente Hipertension lo modifica hasta el ultimo creado.
 *
 * @param
 * @return
*/
void Directorio::creaEjemplosHipertension(){
  hipertension[0] = Hipertension("Benito Juárez", "m", 79.0, 1.50, 60, false, 220.0);
  ihip += 1;
  hipertension[1] = Hipertension("Karl Marx", "m", 70.0, 1.77, 75, true, 210.0);
  ihip += 1;
  hipertension[2] = Hipertension("Leonora Carrington", "f", 55.0, 1.65, 61, false, 230.0);
  itot += 3;
}

/**
 * Utliza el arreglo de tipo Colitis.
 * Llena el arreglo con 3 ejemplos. Los identificadores de colitis
 * van de 1 a 99.
 * El id del ultimo paciente Colitis lo modifica hasta el ultimo creado.
 *
 * @param
 * @return
*/
void Directorio::creaEjemplosColitis(){
  colitis[0] = Colitis("Andrés López", "m", 75.0, 1.60, 66, true, "Crónica", 80);
  icol += 1;
  colitis[1] = Colitis("Marcelo Ebrard", "m", 78.0, 1.78, 60, true, "Ulcerosa", 90);
  icol += 1;
  colitis[2] = Colitis("Mickey Mouse", "m", 85.0, 1.90, 34, false, "Nerviosa", 100);
  itot += 3;
}

/**
 * Utiliza el arreglo Paciente y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
 *
 * @param
 * @return
*/
void Directorio::muestraPacientes(){
  for(int i = 0; i <= ipac; i++){
    cout << i << ". " << pacientes[i].toString();
  }
}

/**
 * Utiliza el arreglo Colitis y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
 *
 * @param
 * @return
*/
void Directorio::muestraColitis(){
  for(int i = 0; i <= icol; i++){
    cout << i << ". " << colitis[i].toString();
  }
}

/**
 * Utiliza el arreglo Hipertension y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
 *
 * @param
 * @return
*/
void Directorio::muestraHipertension(){
  for(int i = 0; i <= ihip; i++){
    cout << i << ". " << hipertension[i].toString();
  }
}

/**
 * Utiliza arreglo de Paciente y su ultimo indice.
 * Recibe el nombre, sexo, peso, estatura y edad.
 * El metodo genera el nuevo id, crea el objeto Paciente y lo
 * agrega al arreglo
 *
 * @param
 * @return
 */
void Directorio::agregaPaciente(string nom, string se, float pe, float es, int ed){
  ipac += 1;
  itot += 1;
  pacientes[ipac] = Paciente(nom, se, pe, es, ed);
}

/**
 * Utiliza arreglo de Hipertension y su ultimo indice.
 * Recibe el nombre, sexo, peso, estatura, edad, tratamiento y colesterol.
 * El metodo genera el nuevo id, crea el objeto Hipertension y lo
 * agrega al arreglo
 *
 * @param
 * @return
 */
void Directorio::agregaHipertension(string nom, string se, float pe, float es, int ed, bool tra, float col){
  ihip += 1;
  itot += 1;
  hipertension[ihip] = Hipertension(nom, se, pe, es, ed, tra, col);
}

/**
 * Utiliza arreglo de Colitis y su ultimo indice.
 * Recibe el nombre, sexo, peso, estatura, edad, tratamiento, subtipo y hierro.
 * El metodo genera el nuevo id, crea el objeto Colitis y lo
 * agrega al arreglo
 *
 * @param
 * @return
 */
void Directorio::agregaColitis(string nom, string se, float pe, float es, int ed, bool tra, string sub, float fe){
  icol += 1;
  itot += 1;
  colitis[icol] = Colitis(nom, se, pe, es, ed, tra, sub, fe);
}

/**
 * Utiliza los id de los objetos contenidos en los arreglos Paciente, Colitis e
 * Hipertension.
 * Suma los id para encontrar la cantidad total de pacientes y
 * los imprime
 *
 * @param
 * @return
 */
void Directorio::totalPacientes(){
  cout << "Actualmente existen " << itot << " pacientes activos. \n";
  cout << "Pacientes sin enfermedades crónicas: " << ipac + 1 << "\n";
  cout << "Pacientes con hipertension: " << ihip + 1<< "\n";
  cout << "Pacientes con colitis: " << icol + 1 << "\n";
}

#endif
