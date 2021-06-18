#include <iostream>
#include <math.h>

using namespace std;

struct tInvestimento{
  float montInvestido, juroAno, periodoAno, montFinalSimples, montFinalComposto, juroMes;

  void calculoJuros(){
    montFinalSimples = montInvestido * (1 + ((juroAno/100) * periodoAno));
    montFinalComposto = montInvestido * pow(1+(juroAno/100), periodoAno);

    //cout << montFinalSimples << endl;
    //cout << montFinalComposto << endl;
  }

  void conversorJuro(){
    
    float taxaMes, taxaAno = (float(juroAno))/100, aux = 1.0/12;

    taxaMes = pow(1 + taxaAno, aux) - 1;
    juroMes = taxaMes * 100;

    //cout << juroMes << "%" << endl;
  }

  void imprimirValores(){
    cout << montFinalSimples << endl;
    cout << montFinalComposto << endl;
    cout << juroMes << "%" << endl;        
  }

};

