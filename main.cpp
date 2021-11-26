/*
* Proyecto Nutricion
* Erik Cabrera Gonzalez
* A01334318
* 25/11/21
* Descripcion: este es un proyecto para la clase de Pensamiento
* Computacional Orientado a Objetos. Es un programa que captura
* diferentes pacientes con sus respectivos pesos, estaturas, sexo y nombres.
* Ademas, permite calcular el imc, comidas al dia,  kilos al mes e implementa herencia y composición.
*/
#include <string>
#include <iostream>
#include "paciente.h"
#include "dieta.h"
#include "objetivo.h"

using namespace std;

int main(){

  Paciente paciente_1("Raquel", "f", 55.0, 1.6, 58);
  cout << paciente_1.get_nombre() << " "
       << paciente_1.get_sexo() << " "
       << paciente_1.get_peso() << " "
       << paciente_1.get_estatura() << " "
       << paciente_1.get_edad() << endl;

  paciente_1.set_nombre("Monica");
  paciente_1.set_peso(57.0);
  cout << paciente_1.imc() << endl;

  Dieta dieta_1("Keto1", 1600, 30, 70, 20);
  cout << dieta_1.get_tipo() << " "
       << dieta_1.get_calorias() << " "
       << dieta_1.get_proteinas() << " "
       << dieta_1.get_lipidos() << " "
       << dieta_1.get_carbs() << endl;

  dieta_1.set_tipo("Keto2");
  dieta_1.set_calorias(1700);
  cout << dieta_1.calxcomida(3) << endl;

  Objetivo objetivo_1("Subir", 2.0, 1);
  cout << objetivo_1.get_tipo() << " "
       << objetivo_1.get_cantidad() << " "
       << objetivo_1.get_tiempo() << endl;

  objetivo_1.set_tiempo(3);
  cout << objetivo_1.kilosalmes() << endl;

  Hipertension paciente_2("Rafael", "m", 70.0, 1.64, 58, true, 200.9);
  cout << paciente_2.get_nombre() << " "
       << paciente_2.get_peso() << " "
       << paciente_2.get_tratamiento() << " "
       << paciente_2.get_colesterol() << endl;

  paciente_2.set_colesterol(187.5);
  cout << paciente_2.get_colesterol() << endl;

  Colitis paciente_3("Erik", "m", 71.0, 1.80, 24, false, "SII", 100.0);
  cout << paciente_3.get_nombre() << " "
       << paciente_3.get_sexo() << " "
       << paciente_3.get_peso() << " "
       << paciente_3.get_estatura() << " "
       << paciente_3.get_edad() << " "
       << paciente_3.get_tratamiento() << " "
       << paciente_3.get_subtipo() << " "
       << paciente_3.get_hierro() << endl;

  return 0;

}
