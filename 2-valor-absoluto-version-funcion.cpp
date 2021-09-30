/*******************************************************************************
 * Curso de Programación 1. Tema 4
 * Autores: Miguel Ángel Latre
 * Última revisión: 30 de septiembre de 2019
 * Resumen: Ejemplo de un programa con una función que utiliza composición
 *          condicional.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Función que devuelve |x|
 */
double absoluto(double x) {
    if (x >= 0.0) {
        return x;
    }
    else {
        return -x;
    }
}


/*
 * Programa que pide al usuario un número y escribe en la pantalla el valor 
 * absoluto de este.
 */ 
int main() {
    cout << "Introduzca un número: ";
    double x;
    cin >> x;

    cout << "Su valor absoluto es: " << absoluto(x);

    return 0;
}