#include <iostream>

using namespace std;

int main() {
    int numbers[6] = {7, 2, 6, 4, 0, 8};

    cout << "Array original: ";
    for(int i = 0; i < 6; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int* puntero = numbers;

    *puntero = 8;
    *(puntero + 4) = 2;
    *(puntero + 2) = 4;

    cout << "Array Modificado con punteros: ";
    for(int i = 0; i < 6; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Direccion de memoria del array: " << numbers << endl;
    cout << "Direccion de memoria del primer elemento: " << &numbers[0] << endl;
    cout << "Direccion de memoria del puntero: " << &puntero << endl;
    return 0;
}