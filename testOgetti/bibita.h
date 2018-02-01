class bibita{
private:
  int litri; //numero di litri presenti nella bevanda

public:
  void bibita(int); //costruttore della classe bibita che prende in input il numero
                    // di litri della bibita
  void setLitri(int); //inseriste il numero di litri della bibita
  int getLitri(); //restituisce il numero di litri rimanenti
  void bevi(int); //beve dalla bibita un numero int di litri
};
