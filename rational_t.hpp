// AUTOR: Javier Herrero Durán
// FECHA: 24/02/2026
// EMAIL: alu0101842028@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

// pauta de estilo [5]
# define EPSILON 1e-6

using namespace std;

class rational_t
{
  // pautas de estilos [44] y [73]: primero "public" y después "private"
public:
  //métodos públicos
  rational_t(const int = 0, const int = 1); // constructor con valores por defecto
  ~rational_t() {} // destructor vacío
  
  // pauta de estilo [71]: indentación a 2 espacios
  // getters
  int get_num() const; // getter de numerador
  int get_den() const; // getter de denominador

  // setters
  void set_num(const int); // setter de numerador
  void set_den(const int); // setter de denominador

  double value(void) const; // valor numérico del racional

  // FASE II
  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  bool is_less(const rational_t&, const double precision = EPSILON) const;
  
  // FASE III
  rational_t add(const rational_t&);
  rational_t substract(const rational_t&);
  rational_t multiply(const rational_t&);
  rational_t divide(const rational_t&);
  
  void write(ostream& = cout) const; //el formato de salida se indica en el enunciado
  void read(istream& = cin); // el formato de entrada se indica en el enunciado
  
private:
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  int num_, den_; // numerador y denominador
};
