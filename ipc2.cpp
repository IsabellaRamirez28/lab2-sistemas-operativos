#include <iostream>
#include <unistd.h>
#include <cstring>

using namespace std;

struct Message {
    char text[100];
};

int main() {
    int pipefd[2];
    pipe(pipefd);
    pid_t pid = fork();  

    if (pid == 0) {
        close(pipefd[1]);
        Message message;
        read(pipefd[0], &message, sizeof(message));
        cout << "Child read: " << message.text << endl;
        close(pipefd[0]);

    } else {
        close(pipefd[0]);
        Message message;
        strcpy(message.text, "Hello from parent!");
        write(pipefd[1], &message, sizeof(message));
        cout << "Parent Sent: " << message.text << endl;
        close(pipefd[1]);
    }
    return 0;
}