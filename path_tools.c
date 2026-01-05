#include "main.h"

void print_path_dirs(void)
{
	char *path, *path_copy, *token;

	path = _getenv("PATH");
	if (path == NULL)
		return;

	path_copy = strdup(path);
	if (path_copy == NULL)
		return;

	token = strtok(path_copy, ":");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}

	free(path_copy);
}
