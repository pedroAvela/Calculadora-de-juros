#include <iostream>

using namespace std;

struct tInvestimento{
  int montInvestido, periodoAno;
  float juroAno;
  void abacate(tInvestimento teste){
    int total;
    total = teste.montInvestido * teste.periodoAno;
    cout << total;
  }
};

// void abacate(){
//   cout << "hi";
// }