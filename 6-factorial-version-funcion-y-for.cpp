/*
 * Curso de Programación 1. Tema 4
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 30 de septiembre de 2019
 * Resumen: Ejemplo de un programa que utiliza composición iterativa para calcular el factorial de un número. 
 *          Versión con una función «factorial» independiente (ver tema 5 del curso) y bucle «for».
 */
#include <iostream>
using namespace std;

/*
 * Pre:  n >= 0
 * Post: Ha devuelto n!
 */
int factorial(int n) {
    // Asigna a «factorial» el valor de «n»!, siendo n>=0
    
    int factorial = 1;                  // factorial = 0!
    for (int i = 1; i <= n; i++) {
        factorial = i * factorial;      // factorial = i!
    }
    // factorial = n!
    return factorial;
}

/*
 * Programa que pide al usuario un número natural, lo lee del teclado y escribe en la pantalla su factorial.
 */
int main() {
    cout << "Escriba un número natural: ";
    int n;
    cin >> n;
    
    cout << n << "! = " << factorial(n) << endl;
    
    return 0;
}
