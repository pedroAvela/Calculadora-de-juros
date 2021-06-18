#include <iostream>
#include <string>
#include "invest.cpp"

using namespace std;

bool verificador(string montante, string juro, string periodo){
  if ((montante[0] > 47) && (montante[0] < 58)){
    if ((juro[0] > 47) && (juro[0] < 58)){
      if ((periodo[0] > 47) && (periodo[0] < 58)){
        return true;
      }else{
        return false;
      }
    }else{
      return false;
    }
  }else{
    return false;
  }
}

int main() {
  tInvestimento teste;
  bool is_playing = true;
  char choice;

  cout << R"(
     ___        _               _             _                          _          __                          
    / __\ __ _ | |  ___  _   _ | |  __ _   __| |  ___   _ __  __ _    __| |  ___    \ \  _   _  _ __  ___   ___ 
   / /   / _` || | / __|| | | || | / _` | / _` | / _ \ | '__|/ _` |  / _` | / _ \    \ \| | | || '__|/ _ \ / __|
  / /___| (_| || || (__ | |_| || || (_| || (_| || (_) || |  | (_| | | (_| ||  __/ /\_/ /| |_| || |  | (_) |\__ \
  \____/ \__,_||_| \___| \__,_||_| \__,_| \__,_| \___/ |_|   \__,_|  \__,_| \___| \___/  \__,_||_|   \___/ |___/ by Pedro Avelar
  )" << "\n";

  while (is_playing){
    bool is_choosing = true;
    string montante, juro, periodo;
    cout << "Digite o montante investido:" << endl;
    cin >> montante;
    cout << "Digite o juro ao ano: (%)" << endl;
    cin >> juro;
    cout << "Digite o periodo em anos que o dinheiro ficará investido:" << endl;
    cin >> periodo;

    if (verificador(montante, juro, periodo) == false){
      cout << "\033[2J\033[1;1H";
      cout << "Números inválidos" << endl;
      continue;
    }

    teste.montInvestido = stof(montante);
    teste.juroAno = stof(juro);
    teste.periodoAno = stof(periodo);

    teste.calculoJuros();
    teste.conversorJuro();
    teste.imprimirValores();

    cout << "\nDeseja fazer calcular mais algum valor? y para sim, n para não" << endl;
    cin >> choice;

    while (is_choosing){
      if (choice == 'n'){
        is_playing = false;
        is_choosing = false;
      }else if(choice == 'y'){
        cout << "\033[2J\033[1;1H";
        is_choosing = false;
      }else{
        cout << "Opção inválida, tente de novo, y para sim n para não" << endl;
        cin >> choice;
      }
    }

  }

  return 0;
}