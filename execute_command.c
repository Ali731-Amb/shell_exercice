#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 *execute_command - function that prepare the path
 *
 *@command: Command write for user
 *@path: path to folder
 *Return: full_path or NULL
 */

char *execute_command(char *command, char *path)
{
char *path_copy;
char *token;
char *full_path;
int len;

path_copy = strdup(path);
token = strtok(path_copy, "/");
while (token != NULL)
{
	len = strlen(token) + strlen(command) + 2;
	full_path = malloc(len * sizeof(char));
		if (full_path == NULL)
		return (NULL);
	strcpy(full_path, token);
	strcat(full_path, "/");
	strcat(full_path, command);
		if(access(full_path, X_OK) == 0)
		{
			free(path_copy);
			return(full_path);
		}
		else
		{
			free(full_path);
			token = strtok(NULL, ":");
		}
}
free(path);
return(NULL);
}
