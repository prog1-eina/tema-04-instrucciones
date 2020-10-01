/*
 * Curso de Programación 1. Tema 4
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 30 de septiembre de 2019
 * Resumen: Ejemplo de un programa simple que utiliza composición condicional.
 */
#include <iostream>
using namespace std;

/*
 * Programa que solicita dos datos enteros al usuario y los escribe ordenados de menor a mayor en la pantalla.
 */
int main() {
    cout << "Escriba dos números enteros: ";
    int a, b;
    cin >> a >> b;

    // a = A0 y b = B0
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    // a <= b y ((a = A0 y b = B0) o (a = B0 y b = A0))

    cout << a << " " << b << endl;

    return  0;
}
