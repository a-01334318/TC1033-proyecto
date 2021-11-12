/*
* Erik Cabrera González
* A01334318
* Proyecto Nutricion
* Programar la clase Paciente que:
* Atributos: nombre, peso, estatura, edad y sexo
* Métodos: getters(), setters(), imc(tiempo)
* Constructor
*/

#include<string>

class Paciente{
private:
  std::string nombre;
  std::string sexo;
  float peso;
  float estatura;
  int edad;

public:
  Paciente();
  Paciente(std::string nom, std::string se, float pe, float es, int ed): nombre(nom), sexo(se), peso(pe), estatura(es), edad(ed){};

  std::string get_nombre();
  std::string get_sexo();
  float get_peso();
  float get_estatura();
  int get_edad();

  void set_nombre(std::string );
  void set_sexo(std::string );
  void set_peso(float );
  void set_estatura(float );
  void set_edad(int );

  float imc();

};


std::string Paciente::get_nombre(){
  return nombre;
}

void Paciente::set_nombre(std::string nom){
  nombre = nom;
}

std::string Paciente::get_sexo(){
  return sexo;
}

void Paciente::set_sexo(std::string se){
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
