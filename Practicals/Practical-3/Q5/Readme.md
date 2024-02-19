## Code

The code consists of the following:

```c
void main() {
    fork(); // Fork 1
    fork(); // Fork 2
    exit();
}
```

## Functionality

Upon execution, the program performs the following steps:

1. Calls `fork()` once, creating one child process.
2. Both the parent and the child processes call `fork()` again, resulting in the creation of two child processes from each of them.
3. The `exit()` function terminates the processes.

## Purpose

The purpose of this program is to illustrate how the `fork()` system call works and how it creates child processes, resulting in a branching behavior in the program's execution flow.

## Answer

There are 2 forks, therefore 2^2 processes = 4 processes.
but the for child process there are (2^2) - 1 processes = 3 processes.

### Hence there will be 3 processes.
## Result

Upon execution, the program will create a total of four child processes, demonstrating the behavior of `fork()`.

---

Feel free to customize this `Readme.md` file further based on your specific requirements or additional information about the program.
