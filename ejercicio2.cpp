#include <iostream>
using namespace std;

// Hacer secuencia Fibonacci
int fibonacci(int numanterior, int numactual) {
  return numanterior + numactual;
}

// Saber si el numero es par o no
bool par_o_no(int numero) {
  return numero % 2 == 0;
}

// Suma de los pares en la secuencia
int suma_pares(int limite) {
  int numanterior = 0;
  int numactual = 1;
  int suma = 0;

  while (numactual <= limite) {
    if (par_o_no(numactual)) {
      suma += numactual;
    }
    int temp = numactual;
    numactual = fibonacci(numanterior, numactual);
    numanterior = temp;
  }

  return suma;
}

int main() {
  int suma = suma_pares(4000000);

  cout << "La suma de los terminos pares en la secuencia de Fibonacci que no exceden los 40000000 es: " << suma << endl;

  return 0;
}