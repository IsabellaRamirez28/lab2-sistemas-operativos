#include <iostream> 
#include <unistd.h>  

using namespace std;  

int main() {     
    cout << "Original Process ID: " << getpid() << endl;   

    pid_t pid = fork();  

    if(pid == 0) {
        cout << "Child Process ID (Child Process): " << getpid() << endl; 
        cout << "Parent Process ID (Child Process): " << getppid() << endl;
    } else {
        cout << "Parent Process ID (Parent Process): " << getpid() << endl; 
        cout << "Child Process ID (Parent Process): " << pid << endl;
    }

    return 0; 
}