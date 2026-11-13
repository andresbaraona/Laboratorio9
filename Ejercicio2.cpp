#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo;
    archivo.open("datos.txt");

    if (archivo.is_open()) {
        string linea;
        int contador = 0;

        while (getline(archivo, linea)) {
            contador++;
        }

        cout << "El archivo contiene " << contador << " lineas." << endl;

        archivo.close();
    }
    else {
        cout << "Error: No se pudo abrir el archivo." << endl;
    }

    return 0;
}