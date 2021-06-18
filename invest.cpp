#include <iostream>
#include <math.h>

using namespace std;

struct tInvestimento{
  float montInvestido, juroAno, periodoAno, montFinalSimples, montFinalComposto;

  void calculoJuros(){
    montFinalSimples = montInvestido * (1 + ((juroAno/100) * periodoAno));
    montFinalComposto = montInvestido * pow(1+(juroAno/100), periodoAno);

    cout << montFinalSimples << endl;
    cout << montFinalComposto << endl;
  }

};

