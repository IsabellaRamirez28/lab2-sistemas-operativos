#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> array = {1, 2, 3, 4, 8, 28, 1};

    int sum = 0;
    for(int i = 0; i < array.size(); ++i) {
        sum += array[i];
    }

    cout << "sum = " << sum << endl;

    return 0;
}