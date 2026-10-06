#include <iostream>

using namespace std;

int main() {

    int filas = 4;
    int cols = 4;

    int** matriz = new int*[filas];
    for(int i = 0; i < filas; ++i) {
        matriz[i] = new int[cols];
    }

    for(int j = 0; j < filas; ++j) {
        for(int k = 0; k < cols; ++k) {
            matriz[j][k] = 8;
        } 
    }

    cout << "Matriz: " << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << matriz << ": La direccion de memoria del primer elemento de la matriz que es una fila" << endl;
    cout << matriz[0] << ": La direccion de memoria del primer elemento entero de la primera fila de la matriz"<< endl;
    cout << matriz[0][0] << ": El numero en la primera fila en la primera columna de la matriz" << endl;

    for(int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete matriz;
    return 0;
}