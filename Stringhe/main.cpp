#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string.h>
using std::string;
//Funzioni utili per le stringhe
  //nomeStringa.lengh() restituisce la lunghezza
  // della stringa

  //nomeStringa.substr(int a, int b) restituisce
  //una una stringa lunga b a partire dall'indice
  //a di "nomeStringa".
  //Se la stringa originale e' piu corta di b
  //caratteri ritorna semplicemente l'intera
  //stringa

int main(){
  string nome;

  cout << "Salve, come ti chiami?\n? ";
  cin >> nome;

  cout << nome << endl;

  return 0;
}
