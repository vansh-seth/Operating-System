#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork(); // Create a child process

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        exit(EXIT_FAILURE);
    } else if (pid > 0) {
        printf("Parent process\n");
        sleep(2); // Sleep for 2 seconds to allow child process to become orphan
        printf("Parent process exiting\n");
        exit(EXIT_SUCCESS);
    } else {
        printf("Child process\n");
        sleep(5); // Child process sleeps for 5 seconds
        printf("Child process exiting\n");
        exit(EXIT_SUCCESS);
    }

    return 0;
}

/*
Output:
Parent process
Child process
Parent process exiting
Child process exiting
*/
