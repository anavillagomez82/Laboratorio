#include <iostream>
using namespace std;

// Saber si es primo o no
bool primo_o_no(int numero) {
  if (numero <= 1) {
    return false;
  }
  for (int i = 2; i * i <= numero; i++) {
    if (numero % i == 0) {
      return false;
    }
  }
  return true;
}

// Saber si divide exactamente a 600851475143
void primos_divisores(int numero) {
  int mayorPrimo = 0;
  for (int i = 2; i * i <= numero; i++) {
    if (numero % i == 0) { // Verificar si i es un divisor de numero
      if (primo_o_no(i)) {
        cout << "El número primo " << i << " divide exactamente a " << numero << endl;
        if (i > mayorPrimo) {
          mayorPrimo = i;
        }
      }
      if (primo_o_no(numero / i)) {
        cout << "El número primo " << numero / i << " divide exactamente a " << numero << endl;
        if (numero / i > mayorPrimo) {
          mayorPrimo = numero / i;
        }
      }
    }
  }
  cout << "El mayor número primo que divide exactamente a " << numero << " es: " << mayorPrimo << endl;
}

int main() {
  int numero = 600851475143;
  primos_divisores(numero);
  return 0;
}