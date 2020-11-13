# Answers (Code)

1. Both processes got a value of x. Modifying it in one process does not change its value in the other process.

2. They they can both access the file descriptor. When writing to the file concurrently.
The parent process seems to write first, although, waiting for the child process to finish will make child process write first.
Perhaps a race condition.

3. Yes, by performing some long running task in the parent process. The scheduler will switch to the child process
before printing "Goodbye", runs the child process to completion which prints "Hello", then switches back to parent process to complete it.

4.

5. Wait returns the process id of the child process. When you wait in the child process, it returns -1 as the return value.
Signifying that the wait fails.

6. waitpid would useful to wait for a specific child process in case the calling process has forked more than one child processes.

7. After closing standard output in the child process, the print does nothing.

