#include <iostream> 
#include <unistd.h>  

using namespace std;  

int factorial(int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int n1;
    int n2;
    cin >> n1 >> n2;

    pid_t pid = fork();

    if(pid == 0) {
        int factn1 = factorial(n1);
        cout << "Factorila child n1 = " << factn1 << endl;
    } else {
        int factn2 = factorial(n2);
        cout << "Factorila parent n2 = " << factn2 << endl;
    }

    return 0;
}
