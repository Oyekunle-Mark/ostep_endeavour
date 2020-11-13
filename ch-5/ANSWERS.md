# Answers (Code)

1. Both processes got a value of x. Modifying it in one process does not change its value in the other process.

2. They they can both access the file descriptor. When writing to the file concurrently.
The parent process seems to write first, although, waiting for the child process to finish will make child process write first.
Perhaps a race condition.

