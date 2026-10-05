#include <iostream>

using namespace std;

void auxfun() {
    cout << "Memory address AuxFun(Text/code): " << (void*)&auxfun << endl;
}

int main() {

    int stack = 2;
    int* heap = new int(8);

    cout << "Memory address main(Text/code): " << (void*)&main << endl;
    auxfun();
    cout << "Memory address variable stack(stack): " << &stack << endl;
    cout << "Memory address variable heap(heap): " << heap << endl;

    delete heap;

    return 0;
}