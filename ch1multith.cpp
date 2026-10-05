#include <iostream>
#include <pthread.h>
#include <vector>

using namespace std;

vector<int> arr = {1, 2, 3, 4, 8, 28, 1, 2};
int mid = arr.size() / 2;

int sumfirstHalf = 0;
int sumSecondhaf = 0;

void* threadFunction(void* arg) {
    for(int i = mid; i < arr.size(); ++i) {
        sumSecondhaf += arr[i];
    }

    return nullptr;
}

int main() {
    pthread_t thread;
    pthread_create(&thread, nullptr, threadFunction, nullptr);
    pthread_join(thread, nullptr);

    for(int i = 0; i < mid; ++i) {
        sumfirstHalf += arr[i];
    }

    cout << "Total= " << sumfirstHalf + sumSecondhaf << endl;
    return 0;
}