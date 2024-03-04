#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    // Create a child process
    pid = fork();

    if (pid < 0) { // Error occurred
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) { // Child process
        printf("Child process executing...\n");
        sleep(5); // Simulate some work
        printf("Child process exiting...\n");
        exit(0);
    } else { // Parent process
        printf("Parent process waiting...\n");
        sleep(10); // Parent process waits for some time
        printf("Parent process exiting...\n");
    }

    return 0;
}

/*
Output:
Parent process waiting...
Child process executing...
Child process exiting...
Parent process exiting...
*/
