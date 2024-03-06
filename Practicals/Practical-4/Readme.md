# Zombie and Orphan Processes in C

## Zombie Process:

In computer programming, a zombie process refers to a situation where a process has completed its execution but still retains an entry in the process table to report to its parent process. Before being completely removed from the process table, a child process typically becomes a zombie. The parent process, responsible for managing its child processes, reads the exit status of the child process, thus clearing its entry from the process table.

In the code provided, the child process concludes its execution using the `exit()` system call, while the parent process remains dormant for 50 seconds without calling `wait()`. Consequently, the child process's entry persists in the process table even though its execution has terminated.

## Orphan Process:

An orphan process is a scenario in which a process's parent process no longer exists, either because it has finished execution or terminated without waiting for its child process to conclude. In such cases, the child process is left without a parent and is termed an orphan process. However, the orphan process is soon adopted by the init process, which serves as the root parent process in Unix-like operating systems, once its original parent process ceases to exist.

In the provided code example, the parent process completes its execution and exits while the child process continues its execution, thereby becoming an orphan process. The init process eventually adopts the orphan process, ensuring its continued execution within the system.
