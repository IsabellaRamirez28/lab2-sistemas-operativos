#include <iostream> 
#include <unistd.h>
#include <cstring>  

using namespace std;  

int main() {

    int pipefd[2];
    pipe(pipefd);
    pid_t pid = fork();  

    if (pid == 0) {
        close(pipefd[1]);
        char buffer[100];
        read(pipefd[0], buffer, sizeof(buffer));
        cout << "Child read: " << buffer << endl;
        close(pipefd[0]);

    } else {
        close(pipefd[0]);
        char message[] = "Parent Message to my child";
        write(pipefd[1], message, sizeof(message));
        cout << "Parent Sent: " << message << endl;
        close(pipefd[1]);
    }
    return 0;
}