/*
    Crear un sistema en el cual el usuario vaya cargando números y el sistema determine si son postivos, negativos o cero,
    El mismo debe terminar y mostrar por pantalla la cantidad de postivos, negativos o cero cuando se carguen dos números iguales
*/

#include <iostream>
using namespace std;

int main()
{
    /*
        Inicializo contadores
    */
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    /*
        Cargo primer número
    */
    cout << "Cargar número" << endl;
    int numero;
    cin >> numero;

    /*
        Inicializo el valor "anterior" con un numero distinto al primero que fue cargado
    */
    int anterior = numero + 1;


    /*
        Comienzo el ciclo de repetición
    */
    while(numero != anterior) {

        /*
            Sumo contador correspondiente
        */

        if (numero == 0) {
            ceros++;
        }

        if (numero > 0) {
            positivos++;
        }

        if (numero < 0) {
            negativos++;
        }

        /*
            Guardo número cargado previamente
        */
        anterior = numero;

        /*
            Cargo nuevo número
        */
        cout << "Carga número" << endl;
        cin >> numero;
    }

    /*
        Mostrar por pantalla los resultados
    */
    cout << "Positivos: ";
    cout << positivos << endl;
    cout << "Negativos: ";
    cout << negativos << endl;
    cout << "Ceros: ";
    cout << ceros << endl;

    return 0;
}