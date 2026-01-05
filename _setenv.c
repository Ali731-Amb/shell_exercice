#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_setenv - function that print path
 *@name: nom
 *@value: valeur
 *@overwrite: overwrite
 *
 *Return: print the path
 */

int _setenv(const char *name, const char *value, int overwrite)
{
	char *new_entry, **new_environ;
	int i = 0;
	int len = strlen(name);
	int count = 0;

	new_entry = malloc(len + strlen(value) + 2);
	if (!new_entry)
		return (-1);
	sprintf(new_entry, "%s=%s", name, value);

	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, len) == 0 && environ[i][len] == '=')
		{
			if (overwrite == 0)
			{
				free(new_entry);
				return (0);
			}
			free(environ[i]);
			environ[i] = new_entry;
			return (0);
		}
		i++;
	}
	count = i;
	while (environ[count] != NULL)
		count++;
	new_environ = malloc(sizeof(char *) * (count + 2));

	if (!new_environ)
		return (-1);

	for (i = 0; i < count; i++)
		new_environ[i] = environ[i];

	new_environ[count] = new_entry;
	new_environ[count + 1] = NULL;
	free(environ);
	environ = new_environ;
	return (0);
}
