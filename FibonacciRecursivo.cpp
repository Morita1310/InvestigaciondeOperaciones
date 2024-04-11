#include <iostream>
using namespace std;

int fibonacciRecursivo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
    }
}

void imprimirFibonacci(int n) {
    cout << fibonacciRecursivo(0);  // se ejecuta el termino 0

    for (int i = 1; i < n; ++i) {
      cout <<" , " <<fibonacciRecursivo(i);
    }
}

int main() {
    int n;

    cout << "Digite el valor de n para calcular los terminos Fibonacci: ";
    cin >> n;
    if (n < 0) {
   cout << "Digite un numero positivo";
    } else {
        imprimirFibonacci(n);
    }

    return 0;
}
