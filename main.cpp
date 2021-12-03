/*
* Proyecto Nutrición
* Erik Cabrera Gonzalez
* A01334318
* 25/11/21
* Descripcion: este es un proyecto para la clase de Pensamiento
* Computacional Orientado a Objetos. Es un programa que captura
* diferentes pacientes con sus respectivos pesos, estaturas, sexo y nombres.
* Ademas, permite calcular el imc, comidas al dia,  kilos al mes e implementa herencia y composición.
*/

//Bibliotecas
#include <string> //para utilizar strings
#include <iostream> //para imprimir
#include "paciente.h" //archivo que contiene clase paciente
#include "dieta.h" //archivo que contiene clase dieta
#include "objetivo.h" //archivo que contiene clase objetivo
#include "directorio.h" //archivo que contiene clase directorio

using namespace std;

//Procedimiento nenu
void menu(){

  //Imprime las opciones que va a tener el sistema
  cout << "Menu:\n";
  cout << "1. Mostrar pacientes sin enfermedades crónicas. \n";
  cout << "2. Mostrar pacientes con hipertension. \n";
  cout << "3. Mostrar pacientes con colitis. \n";
  cout << "4. Calcular total de pacientes activos. \n";
  cout << "5. Añadir paciente sin enfermedades crónicas. \n";
  cout << "6. Añadir paciente con hipertension \n";
  cout << "7. Añadir paciente con colitis \n";
  cout << "8. Calcular IMC de paciente. \n";
  cout << "9. Ver dietas de paciente. \n";
  cout << "10. Ver objetivos de paciente. \n";
  cout << "11. Salir \n";
}

//Procedimiento submenu
void submenu(){

  //Imprime las opciones que va a tener el sistema
  cout << "Submenu:\n";
  cout << "1. Mostrar pacientes sin enfermedades crónicas. \n";
  cout << "2. Mostrar pacientes con hipertension. \n";
  cout << "3. Mostrar pacientes con colitis. \n";
  cout << "4. Salir de calculadora IMC. \n";
}

int main(){

  Directorio directorio;
  directorio.creaEjemplosPacientes();
  directorio.creaEjemplosColitis();
  directorio.creaEjemplosHipertension();
  string temp_nom, temp_ap, nombre_completo, temp_se, temp_sub;
  int opcion = 0, temp_ed = 0, temp_tra = 0;
  float temp_pe = 0.0, temp_es = 0.0, temp_fe = 0.0, temp_col = 0.0;

  //Ciclo para que el sistema siga corriendo mientras el usuario no elija salir
  while(opcion < 11 && opcion > -1){

    //Impresión menú
    menu();
    //Leer input de usuario
    cin >> opcion;
    //Switch para cambiar opción
    switch(opcion){

      //Caso 1 imprime los pacientes sin enfermedades crónicas
      case 1:
        directorio.muestraPacientes();
      break;

      //Caso 2 imprime los pacientes con hipertensión
      case 2:
        directorio.muestraHipertension();
      break;

      //Caso 3 imprime los pacientes con colitis
      case 3:
        directorio.muestraColitis();
      break;

      //Caso 4 imprime el número total de pacientes y subconjuntos
      case 4:
        directorio.totalPacientes();
      break;

      //Caso 5 añade paciente sin enfermedades crónicas
      case 5:
        cout<< "Dime el nombre SIN apellido: ";
        cin >> temp_nom;
        cout<< "Dime el apellido: ";
        cin >> temp_ap;
        nombre_completo = temp_nom + " " + temp_ap;
        cout<< "Dime el sexo: ";
        cin >> temp_se;
        cout<< "Dime el peso: ";
        cin >> temp_pe;
        cout<< "Dime la estatura: ";
        cin >> temp_es;
        cout<< "Dime la edad: ";
        cin >> temp_ed;
        directorio.agregaPaciente(nombre_completo, temp_se, temp_pe, temp_es, temp_ed);
      break;

      //Caso 6 añade paciente con hipertension
      case 6:
        cout<< "Dime el nombre SIN apellido: ";
        cin >> temp_nom;
        cout<< "Dime el apellido: ";
        cin >> temp_ap;
        nombre_completo = temp_nom + " " + temp_ap;
        cout<< "Dime el sexo: ";
        cin >> temp_se;
        cout<< "Dime el peso: ";
        cin >> temp_pe;
        cout<< "Dime la estatura: ";
        cin >> temp_es;
        cout<< "Dime la edad: ";
        cin >> temp_ed;
        cout<< "Dime si está en tratamiento: 1. Sí 2. No ";
        cin >> temp_tra;
        cout<< "Dime su nivel de colesterol: ";
        cin >> temp_col;
        directorio.agregaHipertension(nombre_completo, temp_se, temp_pe, temp_es, temp_ed, temp_tra, temp_col);
      break;

      //Caso 7 añade paciente con colitis
      case 7:
        cout<< "Dime el nombre SIN apellido: ";
        cin >> temp_nom;
        cout<< "Dime el apellido: ";
        cin >> temp_ap;
        nombre_completo = temp_nom + " " + temp_ap;
        cout<< "Dime el sexo: ";
        cin >> temp_se;
        cout<< "Dime el peso: ";
        cin >> temp_pe;
        cout<< "Dime la estatura: ";
        cin >> temp_es;
        cout<< "Dime la edad: ";
        cin >> temp_ed;
        cout<< "Dime si está en tratamiento: 1. Sí 2. No ";
        cin >> temp_tra;
        cout<< "Dime el subtipo de Colitis: ";
        cin >> temp_sub;
        cout<< "Dime su nivel de hierro: ";
        cin >> temp_fe;
        directorio.agregaColitis(nombre_completo, temp_se, temp_pe, temp_es, temp_ed, temp_tra, temp_sub, temp_fe);
      break;

      //Caso 8 submenu para elegir tipo de paciente y después regresa el imc
      case 8:{
        int j = 0, resp = 0;
        while(resp < 4 && resp > -1){
          submenu();
          cin >> resp;
          switch(resp){
            case 1:
              directorio.muestraPacientes();
              cout<< "Selecciona el número de paciente: ";
              cin >> j;
              cout<< "IMC:" << directorio.pacientes[j].imc() << endl;
            break;

            case 2:
              directorio.muestraColitis();
              cout<< "Selecciona el número de paciente: ";
              cin >> j;
              cout<< "IMC:" << directorio.colitis[j].imc() << endl;
            break;

            case 3:
              directorio.muestraHipertension();
              cout<< "Selecciona el número de paciente: ";
              cin >> j;
              cout<< "IMC:" << directorio.hipertension[j].imc()<< endl;
            break;
          }
        }
        break;
      }

      //Caso 9 ususario selecciona un paciente y se le asigna una dieta. Muestra los detalles de dicha dieta y las calorías por comida
      case 9:
        int pac;
        directorio.muestraPacientes();
        cout<< "Selecciona el número de paciente: ";
        cin >> pac;
        directorio.pacientes[pac].creaEjemploDieta();
        cout << "La dieta del paciente es: \n" << directorio.pacientes[pac].dietas[0].toString();
        cout << "El paciente deberá ingerir " << directorio.pacientes[pac].dietas[0].calxcomida(3) << " kcal por comida si hace 3 comidas al día. \n";
      break;

      //Caso 10 ususario selecciona un paciente y se le asigna un objetivo. Muestra los detalles de dicho objetivo y cuántos kilos debe subir/bajar al mes
      case 10:
        int nu;
        directorio.muestraPacientes();
        cout<< "Selecciona el número de paciente: ";
        cin >> nu;
        directorio.pacientes[nu].creaEjemploObjetivo();
        cout << "Los objetivos del paciente son: \n" << directorio.pacientes[nu].objetivos[0].toString();
        cout << "Para alcanzar objetivo subir/bajar: " << directorio.pacientes[nu].objetivos[0].kilosalmes() << " kilos al mes. \n";
      break;
    }
  }
  return 0;
}
