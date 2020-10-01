/*
 * Curso de Programación 1. Tema 4
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 30 de septiembre de 2019
 * Resumen: Ejemplo de un programa que utiliza composición iterativa.
 *          Versión con bucle «while».
 */
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Programa que solicita un número entero al usuario y escribe en la pantalla la tabla de multiplicar correspondiente a
 * ese número.
 */
int main() {
    cout << "Introduzca un número: ";
    int n;
    cin >> n;
    
    // Escribe la cabecera de la tabla de multiplicar del «n»
    cout << endl;
    cout << "LA TABLA DEL " << n << endl;

    // Escribe las 11 líneas de la tabla de multiplicar del «n»
    int i = 0;
    while (i <= 10) {
        cout << setw(3) << n << " x " << setw(2) << i
             << " = " << setw(3) << n * i
             << endl;
        i++;
    }
    
    return 0;
}
