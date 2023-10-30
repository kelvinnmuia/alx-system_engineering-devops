#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * infinite_loop - function that implements the infinite loop
 *
 * Return: Returns nothing
 */

int infinite_loop(void)
{
	while(1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - creates five zombie processes
 *
 * Return: Returns nothing
 */
int main(void)
{
	char counter = 0;
	pid_t pid;

	while (counter < 5)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("zombie process created, PID: %d\n", pid);
			sleep(1);
			counter++;
		}
		else
			exit(0);
	}

	infinite_loop();

	return (EXIT_SUCCESS);
}
