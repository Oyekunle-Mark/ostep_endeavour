# Answers

1. CPU utilization would be *100%* because both processes do not issue I/O.
So the CPU is in used util both processes are completed.

2. It will take a total time of 10. 4 to run the CPU instructions, 1 to make the I/O call,
and 5 (waits for 4, done in 1) for the I/O call to complete.

3. It depends on the PROCESS_SWITCH_BEHAVIOUR of the scheduler. If it is SWITCH_ON_IO then
it should take a total time of 6 to complete because the CPU is utilised while waiting for the
I/O call to complete. If SWITCH_ON_END, then it would take the same time as Q2 above.

4. Takes time 5 to complete the process that issues I/O and only then switches to the CPU process
that takes time 4 to complete. Taking total time 9.

5. Running the same command with SWITCH_ON_IO takes time 6. One to make the I/O call, then switches to the CPU
process to complete all 4 instructions while the I/O process waits. Max time is the same as the 6 time for the I/O process.

6. With IO_RUN_LATER, system resources are not being effectively utilized because the process that issued I/O
is in the READY state for a long time. It issued further I/O so running it might have cut time CPU usage.

7. Running a process that just completed I/O seems a good idea because it might issue further I/O.
