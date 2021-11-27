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
#include <string>
#include <iostream>
#include "paciente.h"
#include "dieta.h"
#include "objetivo.h"

using namespace std;

int main(){

/* A implementar en entrega final
*  cout << "Menu:\n";
*  cout << "1. Crea paciente. \n";
*  cout << "2. Mostrar pacientes. \n";
*  cout << "3. Mostrar pacientes con hipertension. \n";
*  cout << "4. Mostrar pacientes con colitis. \n";
*  cout << "5. Calcular total de pacientes activos. \n";
*  cout << "6. Mostrar dietas[n] de paciente. \n";
*  cout << "7. Mostrar objetivos[n] de paciente. \n";
*  cout << "8. Agregar dietas[n] a paciente. \n";
*  cout << "9. Agregar objetivo[n] a paciente. \n";
*  cout << "10. Salir \n";
*/

  Paciente paciente_1("Raquel", "f", 55.0, 1.6, 58);
  cout << paciente_1.get_nombre() << " "
       << paciente_1.get_sexo() << " "
       << paciente_1.get_peso() << " "
       << paciente_1.get_estatura() << " "
       << paciente_1.get_edad()<< endl;

  paciente_1.set_nombre("Monica");
  paciente_1.set_peso(57.0);
  cout << paciente_1.imc() << endl;

  Dieta dieta_1("Keto1", 1600, 30, 70, 20);
  cout << dieta_1.get_tipo() << " "
       << dieta_1.get_calorias() << " "
       << dieta_1.get_proteinas() << " "
       << dieta_1.get_lipidos() << " "
       << dieta_1.get_carbs() <<endl;

  dieta_1.set_tipo("Keto2");
  dieta_1.set_calorias(1700);
  cout << dieta_1.calxcomida(3) << endl;

  Objetivo objetivo_1("Subir", 2.0, 1);
  cout << objetivo_1.get_tipo() << " "
       << objetivo_1.get_cantidad() << " "
       << objetivo_1.get_tiempo() << endl;

  objetivo_1.set_tiempo(3);
  cout << objetivo_1.kilosalmes() << endl;

// Ejemplo 1 Herencia
  Hipertension paciente_2("Rafael", "m", 70.0, 1.64, 58, true, 200.9);
  cout << paciente_2.get_nombre() << " "
       << paciente_2.get_peso() << " "
       << paciente_2.get_tratamiento() << " "
       << paciente_2.get_colesterol() << endl;

  paciente_2.set_colesterol(187.5);
  cout << paciente_2.get_colesterol() << endl;

// Ejemplo 2 Herencia
  Colitis paciente_3("Erik", "m", 71.0, 1.80, 24, false, "SII", 100.0);
  cout << paciente_3.get_nombre() << " "
       << paciente_3.get_sexo() << " "
       << paciente_3.get_peso() << " "
       << paciente_3.get_estatura() << " "
       << paciente_3.get_edad() << " "
       << paciente_3.get_tratamiento() << " "
       << paciente_3.get_subtipo() << " "
       << paciente_3.get_hierro() << endl;

// Ejemplo Composición
  Paciente paciente_4("Arieh", "m", 62.0, 1.78, 19);
  cout << paciente_4.toString() << endl;
  paciente_4.creaEjemploDieta();
  cout << paciente_4.dietas[0].toString() << endl;

  return 0;

}
