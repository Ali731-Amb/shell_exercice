#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 *main - funtion that execute 5 child
 *
 *Return: 0 on succes otherwise -1
 */

int main(void)
{
int i = 0;
pid_t child_pid;
char *argv_command[] = {"/bin/ls", "-l", "/tmp", NULL};
int status;

while (i <= 5)
{
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error :");
		return (1);
	}
	if (child_pid == 0)
	{
		execve(argv_command[0], argv_command, NULL);
		perror("Execve Failled !!");
		return (1);
	}
	else
	{
		wait(&status);
		printf(" Enfant %d a fini son travail\n", i);
		i++;
	}
}
return (0);
}
