#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_path_dirs - function that print path
 *
 *Return: Path or nothing
 */

void *print_path_dirs(void)
{
	char *copy_path;
	char *path;
	char *token;

	path = _getenv("PATH");
	if (path == NULL)
	{
		return (NULL);
	}
	copy_path = strdup(path);

	token = strtok(copy_path, ":");

	while (token != NULL)
	{
		printf("%s\n", copy_path);
		token = strtok(NULL, ":");
	}
	free(copy_path);
	return (0);
}
