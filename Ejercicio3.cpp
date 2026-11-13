#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    ofstream archivo;
    archivo.open("numeros.txt");

    if (archivo.is_open()) {
        for (int i = 1; i <= 5; i++) {
            cout << "Ingrese el numero " << i << ": ";
            cin >> numero;

            archivo << numero << endl;
        }

        archivo.close();
    }
    else {
        cout << "Error al crear el archivo" << endl;
    }

    ifstream lectura;
    lectura.open("numeros.txt");

    if (lectura.is_open()) {
        while (lectura >> numero) {
            suma = suma + numero;
        }

        lectura.close();

        cout << "La suma de los cinco numeros es: " << suma << endl;
    }
    else {
        cout << "Error al leer el archivo" << endl;
    }

    return 0;
}