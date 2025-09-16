Some operating systems allow more than one process to be loaded into the executable memory at
a time. These loaded processes must share the CPU in very efficient manner. The act of
determining which of these loaded process should be assigned to CPU and removal of currently
running process from CPU is known as process scheduling.

Given a list of processes, their CPU burst times and arrival times, print the Gantt chart for the
following given scheduling policies. Also find averag waiting time and average turnaround time
required for complete execution of these processes.

a) FCFS – First Come First Served : process which arrives first will get the CPU first.
b) SJF NP – Shortest Job First Non-Preemptive : process which needs CPU for least amount will
get the CPU first. Here non-preemptive means currently running process leaves CPU
voultarily after completing its execution.
c) SJF P – Shortest Job First Preemptive – Here preemptive means operating system decides
when to move currently running process.

Input Format:
First input line will take number of processes, n.
Second input line will take n space-separated integers describing burst time of n processes.
Third input line will take n space-separated integers describing arrival time of n processes.

Output Format:
First output line will print Gantt chart.
Second output line will print average waiting time.
Third output line will print average turnaround time.