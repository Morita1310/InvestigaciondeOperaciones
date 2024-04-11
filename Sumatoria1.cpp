#include <iostream>

using namespace std;

int main()
{
    int n, suma = 0;
    cout << "Digite cuantos valores quiere realizar en la sumatoria: ";
    cin >> n;

    cout << "La sumatoria es: ";
    for(int i = 1; i <= n; i++){
        cout << " 1  +";
        suma += 1;
    }

    cout << " = " << suma << endl;

       // cout << "Hello world!" << endl;

    return 0;
}
