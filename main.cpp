/*
* Proyecto Nutricion
* Erik Cabrera Gonzalez
* A01334318
* 11/11/21

* Descripcion este es un proyecto para la clase de Pensamiento
* Computacional Orientado a Objetos. Es un programa que captura
* diferentes pacientes con sus respectivos pesos, estaturas, sexo y nombres.
* Ademas, permite calcular el imc, comidas al dia y kilos al mes.
*/

#include <iostream>
#include <string>
#include "paciente.h"
#include "dieta.h"
#include "objetivo.h"

/* usa este código para poner tus propios
*  comentarios y explicar que hace cada instrucción
*/

int main(){

  Paciente paciente_1("Raquel", "f", 55.0, 1.6, 58);
  std::cout << paciente_1.get_nombre() << " "
            << paciente_1.get_sexo() << " "\
            << paciente_1.get_peso() << " "\
            << paciente_1.get_estatura() << " "\
            << paciente_1.get_edad() << std::endl;

  paciente_1.set_nombre("Monica");
  paciente_1.set_peso(57.0);
  std::cout << paciente_1.imc() << std::endl;

  Dieta dieta_1("Keto1", 1600, 30, 70, 20);
  std::cout << dieta_1.get_tipo() << " "
            << dieta_1.get_calorias() << " "\
            << dieta_1.get_proteinas() << " "\
            << dieta_1.get_lipidos() << " "\
            << dieta_1.get_carbs() << std::endl;

  dieta_1.set_tipo("Keto2");
  dieta_1.set_calorias(1700);
  std::cout << dieta_1.calxcomida(3) << std::endl;

  Objetivo objetivo_1("Subir", 2.0, 1);
  std::cout << objetivo_1.get_tipo() << " "\
            << objetivo_1.get_cantidad() << " "\
            << objetivo_1.get_tiempo() << std::endl;

  objetivo_1.set_tiempo(3);
  std::cout << objetivo_1.kilosalmes() << std::endl;

  return 0;

}
