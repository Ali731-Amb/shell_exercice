#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 *main - shell funtion
 *
 *Return: -1 or do a command
 */

int main(void)
{
	char *caractere = NULL;
	size_t lenght = 0;
	ssize_t bytes_read = 0;
	int i = 0;
	pid_t child_pid;
	int status;
	char *argv_command[2];

	while (1)
	{
		printf("#cisfun$ ");

		bytes_read = getline(&caractere, &lenght, stdin);

		if (bytes_read == -1)
		{
			break;
		}
		caractere[bytes_read - 1] = '\0';
		if (caractere[0] == '\0')
		{
			continue;
		}
		argv_command[0] = caractere;
		argv_command[1] = NULL;

		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error :");
			return (1);
		}
		if (child_pid == 0)
		{
			execve(argv_command[0], argv_command, NULL);
			perror("./shell");
			exit(1);
		}
		else
		{
			wait(&status);
			i++;
		}
	}
	free(caractere);
	return (0);
}
