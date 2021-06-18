#include <iostream>
#include <math.h>
#include "invest.cpp"

using namespace std;



int main() {
  
  tInvestimento teste;

  cout << "Digite o montante investido:" << endl;
  cin >> teste.montInvestido;
  cout << "Digite o juro ao ano:" << endl;
  cin >> teste.juroAno;
  cout << "Digite o periodo em anos que o dinheiro ficará investido:" << endl;
  cin >> teste.periodoAno;

  teste.calculoJuros();
  teste.conversorJuro();
  teste.imprimirValores();

}