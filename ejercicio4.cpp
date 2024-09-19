#include <iostream>
using namespace std;

// FPara saber si un numero es palindromo o no
bool es_palindromo(int numero) {
  int invertido = 0;
  int original = numero;
  while (original > 0) {
    int digito = original % 10;
    invertido = invertido * 10 + digito;
    original /= 10;
  }
  return invertido == numero;
}

// Saber el producto de dos numeros
int producto(int num1, int num2) {
  return num1 * num2;
}

// Función para encontrar el mayor número palíndromo
int encontrar_mayor_palindromo() {
  int mayor = 0;
  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      int producto_ij = producto(i, j);
      if (es_palindromo(producto_ij) && producto_ij > mayor) {
        mayor = producto_ij;
      }
    }
  }
  return mayor;
}

int main() {
  int mayorPalindromo = encontrar_mayor_palindromo();
  cout << "El mayor número palíndromo hecho del producto de 2 números de tres dígitos es: " << mayorPalindromo << endl;
  return 0;
}