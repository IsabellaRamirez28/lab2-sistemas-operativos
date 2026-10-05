#include <iostream>

using namespace std;

int main() {
    int n = 8;
    cout << "Valor inicial: " << n << endl;
    cout << "Direccion de memoria del valor original: " << &n << endl;
    int* puntero = &n;
    *puntero = 2;
    cout << "Valor Cambiado con puntero: " << n << endl;
    cout << "Valor guardado en el puntero: " << puntero << endl;
    int& ref = n;
    ref = 0;
    cout << "Valor cambiado con referencia: " << n << endl;
    cout << "Direccion de memoria del puntero: " << &puntero << endl;
    cout << "Direccion de memoria de la referencia: " << &ref << endl;
    return 0;
}