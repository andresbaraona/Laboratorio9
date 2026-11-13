#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int opcion;
    string producto;
    float monto;

    do {
        cout << endl;
        cout << "===== REGISTRO DE VENTAS =====" << endl;
        cout << "1. Registrar venta" << endl;
        cout << "2. Mostrar ventas" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            ofstream archivo;
            archivo.open("ventas.txt", ios::app);

            if (archivo.is_open()) {
                cin.ignore();

                cout << "Ingrese el nombre del producto: ";
                getline(cin, producto);

                cout << "Ingrese el monto de la venta: ";
                cin >> monto;

                archivo << producto << " - $" << monto << endl;

                archivo.close();

                cout << "Venta registrada correctamente." << endl;
            }
            else {
                cout << "Error al abrir el archivo." << endl;
            }
        }
        else if (opcion == 2) {
            ifstream archivo;
            archivo.open("ventas.txt");

            if (archivo.is_open()) {
                string linea;

                cout << endl << "===== VENTAS REGISTRADAS =====" << endl;

                while (getline(archivo, linea)) {
                    cout << linea << endl;
                }

                archivo.close();
            }
            else {
                cout << "Todavia no hay ventas registradas." << endl;
            }
        }
        else if (opcion == 3) {
            cout << "Saliendo del programa..." << endl;
        }
        else {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 3);

    return 0;
}