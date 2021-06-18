#include <iostream>
#include "invest.cpp"

using namespace std;

int main() {
  tInvestimento teste;
  bool is_playing = true;
  char choice;

  while (is_playing){
    bool is_choosing = true;
     
    cout << "Digite o montante investido:" << endl;
    cin >> teste.montInvestido;
    cout << "Digite o juro ao ano:" << endl;
    cin >> teste.juroAno;
    cout << "Digite o periodo em anos que o dinheiro ficará investido:" << endl;
    cin >> teste.periodoAno;

    teste.calculoJuros();
    teste.conversorJuro();
    teste.imprimirValores();

    cout << "Deseja fazer calcular mais algum valor? y para sim, n para não" << endl;
    cin >> choice;

    while (is_choosing){
      if (choice == 'n'){
        is_playing = false;
        is_choosing = false;
      }else if(choice == 'y'){
        is_choosing = false;
      }else{
        cout << "Opção inválida, tente de novo, y para sim n para não" << endl;
        cin >> choice;
      }
    }

  }

  return 0;
}