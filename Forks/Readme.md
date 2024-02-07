# Understanding Processes in Unix/Linux Systems

Processes play a fundamental role in Unix/Linux systems, serving as the building blocks of program execution and resource allocation. In this document, we delve into the essential concepts surrounding processes, their creation, management, and termination.

## What is a Process?

A **process** represents a single running program in the Unix environment. It can be either a system program (e.g., login, update) or a user-initiated program (e.g., pico, a.out). Each process is uniquely identified by a Process ID (PID) assigned by the system.

When Unix starts a process, it assigns a unique PID to it. The `ps` command in Unix lists all current processes along with their PIDs. In C programming, the `getpid()` function retrieves the PID of the process that called it.

## Key Attributes of Processes

- **Code**: The executable instructions of the program.
- **Data**: Data required by the program during execution.
- **Stack**: Used for function calls and local variables.
- **PID**: Unique identifier assigned to each process.

## Process Creation and Hierarchy

Processes are created using the `fork()` system call, which duplicates an existing process. The newly created process is known as the child process, while the original process is the parent process. Child processes inherit many attributes from their parent.

Processes are organized hierarchically, with each process having a parent process that explicitly created it. The processes created by a given parent are called its child processes.

## Interaction Between Parent and Child Processes

- **Zombie Process**: A child process that has terminated but its exit status has not yet been retrieved by the parent process.
- **Orphan Process**: A child process whose parent process has terminated, automatically adopted by the `init` process (PID 1).

## Running Unix Commands from C

Unix commands can be executed from C programs using the `system()` function, allowing seamless integration of system utilities into C programs.

## Command Line Arguments

Arguments can be passed to C programs from the command line, providing flexibility and customization options.

## Process Completion and Management

- **Wait System Call**: Allows a parent process to wait for a child process to stop or terminate.
- **Exit Function**: Terminates the process and returns an exit status value.

## Example Programs

Several example programs demonstrate process creation, interaction, and management, illustrating concepts such as multiple forks, process identification, and orphan processes.

## Fork 
![phpBZlSOm](https://github.com/vansh-seth/Operating-System/assets/111755254/fcf87514-45bd-4171-9435-edf6bf5cd4ca)


## fork with for loop
```c
#include <stdio.h>

void main()
{
   int i;

   for (i=0;i<3;i++)
   {
      fork();
      printf("[%d] [%d] i=%d\n", getppid(), getpid(), i);
   }
}
```

![image](https://github.com/vansh-seth/Operating-System/assets/111755254/d97e72e6-a600-4087-95b6-af6e2e4b656a)
