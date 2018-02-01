#include "bibita.h"

bibita::bibita(int nLitri){
  setLitri(nLitri);
} //costruttore della classe bibita che prende in input il numero
  // di litri della bibita

void bibita::setLitri(int nLitri){
  litri = nLitri;
} //inseriste il numero di litri della bibita

int bibita::getLitri(){
  return litri;
} //restituisce il numero di litri rimanenti

void bibita::bevi(int nLitri){
  litri -= nLitri;
}//beve dalla bibita un numero int di litri
