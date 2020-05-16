/*
    Crear un sistema en el cual el usuario vaya cargando números y el sistema determine si son postivos, negativos o cero,
    El "for" nos pide que sepamos desde un principio cuantos números va a recorrer, por lo tanto, el usuario va a cargar previamente cuantos números iteraremos
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
        Declaro valores a analizar
    */
    int anterior;
    int numero;

    /*
        Cargo cuantos números vamos a analizar
    */
    int cantidad_numeros;
    cout << "Cuantos números son?" << endl;
    cin >> cantidad_numeros;

    /*
        Comienzo el ciclo de repetición
    */
    for (int i= 0; i < cantidad_numeros; i++) {
        /*
            Cargo nuevo número
        */
        cout << "Carga número" << endl;
        cin >> numero;

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
}
