#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t parent_pid;

	parent_pid = getppid();
	printf("Parent processus ID (PPID): %u\n", parent_pid);
	return (0);
}
