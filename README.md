# Improved-CPU-Scheduling-Algorithm-
Improved Mean Round Robin with Shortest Job First

# Introduction:
The proposed algorithm is called Improved Mean Round Robin with
Shortest Job First (IMRRSJF) algorithm. The basic idea and difference
between this improved algorithm and existing algorithms is that it first
arranges the processes in the ascending order of their CPU burst time. This
algorithm also calculates the time quantum which is equal to the square
root of mean and CPU burst time. The jobs are then assigned CPU
according to the shortest job first manner and in the round robin manner.
That is, if a process has a longer burst time than time quantum it is context
switched and assigned CPU later.

# Pseudo Code:
1. First all the processes present in ready queue are
sorted in ascending order of their burst time. J
→ counter value
2. While(Ready queue!= NULL)
TQ = √((1/n) (A1+ A2 + …. + An)*An) //TQ =
Time Quantum = Square root of (mean*Highest
Burst)
// A = Set of processes, where (A1,A2.....An) ϵ A and n
= Total no. of processes
//if TQ> maximum burst time, then max( BT) → TQ
3. Assign TQ to (1 to n) process
for j = 1 to n
{Pj → TQ , } //Pj = Process j
4. Calculate the remaining burst time of the processes.
5. if ( new process is arrived and BT != 0 ) //BT = burst time go to
step 1, else if ( new process is not arrived and BT !=0) go to step
2, else
go to step 6, end if, end while
6. Calculate ATT, AWT and CS.
//ATT = Average Turnaround Time, AWT = Average
Waiting Time , CS = No. of Context Switches
7. End

# Design:
OS idea identified with our undertaking:
1. Dispatcher Concept.
2. Normal holding up time, turnaround time, response time, throughput, cpu
usage idea.
3. Preemptive and non-preemptive idea.
