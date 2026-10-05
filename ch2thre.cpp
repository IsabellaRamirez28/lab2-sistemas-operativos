#include <iostream>
#include <pthread.h>

using namespace std;

struct Data {
    int number;
};

void* calculateFactorial(void* arg) {
    Data* data = (Data*) arg;
    int factorial = 1;

    for (int i = 1; i <= data->number; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << data->number << " = " << factorial << endl;

    return nullptr;
}

int main() {
    Data d1, d2, d3;

    cin >> d1.number >> d2.number >> d3.number;

    pthread_t t1, t2, t3;

    pthread_create(&t1, nullptr, calculateFactorial, &d1);
    pthread_create(&t2, nullptr, calculateFactorial, &d2);
    pthread_create(&t3, nullptr, calculateFactorial, &d3);

    pthread_join(t1, nullptr);
    pthread_join(t2, nullptr);
    pthread_join(t3, nullptr);

    return 0;
}