# Understanding First Come First Serve (FCFS) CPU Process Scheduling

In this guide, we delve into an essential concept in CPU Process Scheduling Algorithms: First Come First Serve (FCFS). FCFS serves as the foundational algorithm that aids in comprehending the basics of CPU process scheduling.

FCFS lays the groundwork for understanding more complex algorithms. Despite its drawbacks, FCFS has paved the way for the development of new and efficient algorithms. Therefore, it is crucial for students to grasp the fundamentals of FCFS CPU Process Scheduling.

## Key Abbreviations
- CPU: Central Processing Unit
- FCFS: First Come First Serve
- AT: Arrival Time
- BT: Burst Time
- WT: Waiting Time
- TAT: Turn Around Time
- CT: Completion Time
- FIFO: First In First Out

## First Come First Serve (FCFS) Algorithm

FCFS, also known as the First Come First Serve CPU Scheduling Algorithm, is the initial algorithm in CPU Process Scheduling. In FCFS, processes are executed in the order they enter the ready queue, following the First In First Out (FIFO) principle.

This algorithm can be executed in both Preemptive and Non-Preemptive manners, which we'll discuss shortly.

### Preemptive Approach
In Preemptive Process Scheduling, the OS assigns resources to a process for a predetermined duration. Processes may transition between running and ready states based on resource allocation, allowing higher-priority processes to take precedence.

### Non-Preemptive Approach
Non-Preemptive Process Scheduling ensures that resources cannot be withdrawn from a process until it completes its execution. Only when a running process finishes and enters the waiting state are resources reallocated.

## Convoy Effect in FCFS

The Convoy Effect occurs in the non-preemptive FCFS Scheduling Algorithm. In this scenario, the CPU dedicates itself entirely to the currently executing process until completion. Consequently, shorter processes queued behind longer ones experience significant delays, leading to high waiting times, turnaround times, and completion times.

## Characteristics of FCFS CPU Process Scheduling

- Simple implementation
- Does not cause causality issues
- Adopts both preemptive and non-preemptive strategies
- Executes processes in the order of their arrival time
- Arrival time serves as the selection criterion for processes

## Advantages of FCFS CPU Process Scheduling

- Utilizes a First In First Out queue for process allocation
- Straightforward and easy implementation
- No risk of process starvation in preemptive scheduling
- Equitable algorithm due to the absence of process priority consideration

## Disadvantages of FCFS CPU Process Scheduling

- Long waiting times
- Favors CPU processing over I/O operations
- Prone to the Convoy Effect, leading to inefficient resource utilization

Despite its simplicity, FCFS may not always be the most effective scheduling algorithm, often resulting in extended waiting periods and idle CPU resources.


# Understanding Shortest Job First (SJF) Scheduling

In contrast to the First Come First Serve (FCFS) scheduling algorithm, which prioritizes processes based on their arrival time, the Shortest Job First (SJF) scheduling algorithm arranges processes according to their burst time.

SJF scheduling selects the process with the shortest burst time from the pool of available processes in the ready queue for execution.

However, accurately predicting the burst time required for a process poses a significant challenge, making SJF implementation complex within a system.

## Advantages of SJF

- Maximizes throughput by prioritizing short processes.
- Minimizes average waiting and turnaround time by executing shorter processes first.

## Disadvantages of SJF

- May encounter starvation issues, where long processes are continually postponed in favor of shorter ones.
- Implementation complexity arises due to the unpredictable nature of burst times for processes.

While SJF offers advantages such as increased throughput and reduced waiting times, its susceptibility to starvation and the difficulty in accurately determining burst times limit its practical implementation in systems.
