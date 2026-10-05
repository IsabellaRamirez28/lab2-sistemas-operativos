#include <iostream> 
#include <unistd.h>  
#include<vector>

using namespace std;  

int main() {
    vector<int> array = {1, 2, 3, 4, 8, 28, 1, 2};
    int mid = array.size() / 2;

    int pipefd[2];
    pipe(pipefd);
    pid_t pid = fork();  

    if(pid == 0) {
        //Sum of the second half (Child)
        close(pipefd[0]);
        int childSum = 0;
        for(int i = mid; i < array.size(); ++i) {
            childSum += array[i];
        }
        write(pipefd[1], &childSum, sizeof(childSum));
        close(pipefd[1]);

    } else {
        // Sum of the first half (Parent)
        close(pipefd[1]);
        int parentsum = 0;
        for(int j = 0; j < mid; ++j) {
            parentsum += array[j];
        }
        int childsum = 0;
        read(pipefd[0], &childsum, sizeof(childsum));
        close(pipefd[0]);

        cout << "Total = " << parentsum + childsum << endl;
    }
    return 0;
}