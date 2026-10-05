#include <iostream>
#include <pthread.h>

using namespace std;

void* threadFunction(void* arg) {
    cout << "ThreadFunction from the created thread" << endl;
    return nullptr;
}

int main() {
    pthread_t thread;

    cout << "Main thread from main fun" << endl;
    pthread_create(&thread, nullptr, threadFunction, nullptr);

    pthread_join(thread, nullptr);
    cout << "The created thread has finished" << endl;

    return 0;
}