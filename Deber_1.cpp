#include <iostream>
#include <string>

using namespace std;

int main() {

    char seguir = 's';
    string tipoMoneda;
    string fechaSnapshot;
    long double valorCambio, cantidadBase, totalConvertido;

    while (seguir == 's' || seguir == 'S') {

        cout << "Ingrese el valor de la tasa (> 0): ";
        cin >> valorCambio;

        if (valorCambio <= 0) {
            cout << "La tasa ingresada no es correcta." << endl;
            return 0;
        }

        cout << "Ingrese el monto inicial (> 0): ";
        cin >> cantidadBase;

        if (cantidadBase <= 0) {
            cout << "Monto incorrecto." << endl;
            return 0;
        }

        cout << "Ingrese moneda base (USD/EUR/PES): ";
        cin >> tipoMoneda;

        if (tipoMoneda == "USD") {
            cout << "Seleccionado: Dolares" << endl;
        }
        else if (tipoMoneda == "EUR") {
            cout << "Seleccionado: Euros" << endl;
        }
        else if (tipoMoneda == "PES") {
            cout << "Seleccionado: Pesos" << endl;
        }
        else {
            cout << "Moneda no reconocida." << endl;
            return 0;
        }

        cin.ignore();
        cout << "Ingrese fecha y hora del snapshot: ";
        getline(cin, fechaSnapshot);

        totalConvertido = cantidadBase * valorCambio;

        cout << "\n---------------------------------\n";
        cout << "MARKET SNAPSHOT\n";
        cout << "---------------------------------\n";
        cout << "Fecha        : " << fechaSnapshot << endl;
        cout << "Moneda       : " << tipoMoneda << endl;
        cout << "Monto base   : " << cantidadBase << endl;
        cout << "Tasa aplicada: " << valorCambio << endl;
        cout << "Resultado    : " << totalConvertido << endl;
        cout << "---------------------------------\n";

        cout << "Desea hacer otra conversion? (s/n): ";
        cin >> seguir;
        cout << endl;
    }

    return 0;
}

