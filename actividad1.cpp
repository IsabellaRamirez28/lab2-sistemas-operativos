#include <iostream>

using namespace std;

int main() {
    int n = 8;
    cout << "Valor Inicial: " << n << endl;
    cout << "Direccion de memoria: " << &n << endl;
    int* puntero = &n;
    *puntero = 2;
    cout << "valor cambiado: " << n << endl;
    cout << "Direccion de memoria: " << &n << endl;
    return 0;
}