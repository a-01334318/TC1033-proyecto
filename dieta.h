/*
* Erik Cabrera González
* A01334318
* Proyecto Nutricion
* Programar la clase Dieta que:
* Atributos: tipo, calorías, proteínas, lipidos
* Métodos: getters(), setters(), calxcomida()
* Constructor
*/

#include<string>


class Dieta{
private:
  std::string tipo;
  float calorias;
  float proteinas;
  float lipidos;
  float carbs;

public:
  Dieta();
  Dieta(std::string tip, float cal, float pro, float lip, float car): tipo(tip), calorias(cal), proteinas(pro), lipidos(lip), carbs(car){};

  std::string get_tipo();
  float get_calorias();
  float get_proteinas();
  float get_lipidos();
  float get_carbs();

  void set_tipo(std::string );
  void set_calorias(float );
  void set_proteinas(float );
  void set_lipidos(float );
  void set_carbs(float );

  float calxcomida(int );

};


std::string Dieta::get_tipo(){
  return tipo;
}

void Dieta::set_tipo(std::string tip){
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
