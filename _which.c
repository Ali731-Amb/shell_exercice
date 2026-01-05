#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 *main - function that look for files int
 *the current PATH
 *@ac: arguments
 *@av: arguments
 *
 *Return: 0 or the path
 */

int main(int ac, char **av)
{
	char *dir;
	char full_path[1024];
	struct stat st;
	char *path_copy;

	if (ac < 2)
	{
		printf("Usage: _which filename ...\n");
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		path_copy = strdup(getenv("PATH"));
		dir = strtok(path_copy, ":");

		while (dir != NULL)
		{
			sprintf(full_path, "%s/%s", dir, av[i]);

			if (stat(full_path, &st) == 0)
				printf("Trouvé : %s\n", full_path);

			dir = strtok(NULL, ":");
		}
		free(path_copy);
	}
	return (0);
}
