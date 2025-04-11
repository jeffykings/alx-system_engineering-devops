#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int infinite_while(void);
/**
 * main - creates 5 zombie processes
 * Return: 0 always
 */

int main(void)
{
	pid_t pid;
	int value;
	int i;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (pid >  0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
		}
		else
			exit(0);
	}

	value = infinite_while();
	return (0);
}

/**
 * infinite_while -  run an infinite loop
 *
 * Return: 0 always
 */

int infinite_while(void)
{

	while (1)
	{
		sleep(1);
	}
	return (0);
}
