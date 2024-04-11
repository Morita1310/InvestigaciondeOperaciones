#include <iostream>
using namespace std;

int factorial(int n) { // Función recursiva
    if (n == 0 || n == 1) {
        cout << "1";
        return 1;
    } else {
        cout << n;
        if(n > 1) {
            cout << " * ";
        }
        return n * factorial(n - 1);
    }
}

int main() {
    int numero;
    cout << "Dijite un numero entero positivo: ";
    cin >> numero;
    cout<<"!";

    if (numero < 0) {
        cout << "El número debe ser positivo." << endl;
        return 1;
    }

    cout << "El factorial de " << numero << "! es: ";
    int resultado = factorial(numero);
    cout << " = " << resultado << endl;

    return 0;
}
