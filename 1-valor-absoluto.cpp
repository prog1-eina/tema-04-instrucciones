/*
 * Curso de Programación 1. Tema 4
 * Autores: Miguel Ángel Latre
 * Última revisión: 30 de septiembre de 2019
 * Resumen: Ejemplo de un programa simple que utiliza composición condicional.
 */
#include <iostream>
using namespace std;

/*
 * Programa que pide al usuario un número y escribe en la pantalla el valor absoluto de este.
 */ 
int main() {
    cout << "Introduzca un número: ";
    double x;
    cin >> x;

    cout << "Su valor absoluto es: ";
    if (x >= 0.0) {
        cout << x << endl;
    }
    else {
        cout << -x << endl;
    }

    return 0;
}