/*
 * Curso de Programación 1. Tema 4
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 2 de octubre de 2020
 * Resumen: Ejemplo de un programa que utiliza composición iterativa para 
 *          calcular el factorial de un número. 
 *          Versión con una función «factorial» independiente 
 *          (ver tema 5 del curso).
 */
#include <iostream>
using namespace std;

/*
 * Devuelve n!
 */
unsigned int factorial(unsigned int n) {
    // Asigna a «factorial» el valor de «n»!, siendo n>=0
    unsigned int i = 1;
    unsigned int factorial = 1;         // factorial = i!
    while (i < n) {
        i++;
        factorial = i * factorial;      // factorial = i!
    }
    // i = n, factorial = i! ==> factorial = n!
    return factorial;
}

/*
 * Programa que pide al usuario un número natural, lo lee del teclado y escribe
 * en la pantalla su factorial.
 */
int main() {
    cout << "Escriba un número natural: ";
    unsigned int n;
    cin >> n;
    
    cout << n << "! = " << factorial(n) << endl;
    
    return 0;
}
