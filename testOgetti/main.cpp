#include <iostream>
using std::cout;

#include "bibita.h"

int main() {
  bibita cocacola(5);

  cocacola.bevi(3);
  cout << cocacola.getLitri(); << endl;


  return 0;
}
