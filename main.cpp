#include <iostream>
#include <math.h>
#include "invest.cpp"

using namespace std;



int main() {
  
  tInvestimento teste;

  teste.montInvestido = 1000;
  teste.juroAno = 5;
  teste.periodoAno = 2;

  teste.calculoJuros();

}