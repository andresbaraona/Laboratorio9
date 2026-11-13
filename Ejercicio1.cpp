#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string frase;

    ofstream archivo;
    archivo.open("diario.txt", ios::app);

    if (archivo.is_open()) {
        cout << "Escriba una frase para su diario: ";
        getline(cin, frase);

        archivo << frase << endl;
        archivo.close();

        cout << "Frase guardada correctamente" << endl;
    }
    else {
        cout << "Error al abrir el archivo" << endl;
    }

    ifstream lectura;
    lectura.open("diario.txt");

    if (lectura.is_open()) {
        string linea;

        cout << endl << "Contenido del diario:" << endl;

        while (getline(lectura, linea)) {
            cout << linea << endl;
        }

        lectura.close();
    }
    else {
        cout << "Error al leer el archivo" << endl;
    }

    return 0;
}