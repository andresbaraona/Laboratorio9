#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream archivo("calificaciones.txt");

    if (archivo.is_open()) {
        int nota, suma = 0, contador = 0;
        float promedio;

        while (archivo >> nota) {
            suma += nota;
            contador++;
        }

        archivo.close();

        if (contador > 0) {
            promedio = (float)suma / contador;

            cout << "Promedio: " << promedio << endl;
        }
    }

    return 0;
}