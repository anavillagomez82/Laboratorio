#include <iostream>
using namespace std;

// Para saber si un numero es primo o no
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

// Para encontrar el número primo en la posicion 10001
int encontrar_primo_en_posicion(int posicion) {
  int contador = 0;
  int numero = 2;
  while (true) {
    if (primo_o_no(numero)) {
      contador++;
      if (contador == posicion) {
        return numero;
      }
    }
    numero++;
  }
}

int main() {
  int posicion = 10001;
  int primoEnPosicion = encontrar_primo_en_posicion(posicion);
  cout << "El número primo en la posición " << posicion << " es: " << primoEnPosicion << endl;
  return 0;
}