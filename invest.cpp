#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct tInvestimento{
  float montInvestido, juroAno, periodoAno, montFinalSimples, montFinalComposto, juroMes, taxaAno;

  void calculoJuros(){
    taxaAno = (float(juroAno))/100;
    montFinalSimples = montInvestido * (1 + (taxaAno * periodoAno));
    montFinalComposto = montInvestido * pow(1+taxaAno, periodoAno);

  }

  void conversorJuro(){ 
    float taxaMes, aux = 1.0/12;

    taxaMes = pow(1 + taxaAno, aux) - 1;
    juroMes = taxaMes * 100;

  }

  void imprimirValores(){
    cout << fixed << setprecision(2);

    cout << "\nMontante final com juro simples: " << montFinalSimples << endl;
    cout << "Montante final com juro composto: " << montFinalComposto << endl;

    cout << fixed << setprecision(4);
    cout << "Juro ao mes: " << juroMes << "% a.m" << endl;        
  }

};

