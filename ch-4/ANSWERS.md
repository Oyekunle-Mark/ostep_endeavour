# Answers

1. CPU utilization would be *100%* because both processes do not issue IO.
So the CPU is in used util both processes are completed.

2. It will take a total time of 10. 4 to run the CPU instructions, 1 to make the IO call,
and 5 (waits for 4, done in 1) for the IO call to complete.

3. It depends on the PROCESS_SWITCH_BEHAVIOUR of the scheduler. If it is SWITCH_ON_IO then
it should take a total time of 6 to complete because the CPU is utilised while waiting for the
IO call to complete. If SWITCH_ON_END, then it would take the same time as Q2 above.

