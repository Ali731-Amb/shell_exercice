#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_unsetenv - funtion that delete a variable
 *@name: name of varible to delete
 *
 *Return: 0 if succes otherwise -1
 */

int _unsetenv(const char *name)
{
	int i = 0;
	int j;
	size_t len;

	if (name == NULL || name[0] == '\0' || strchr(name, '=') != NULL)
		return (-1);

	if (environ == NULL)
	return (0);

	len = strlen(name);

	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, len) == 0 && environ[i][len] == '=')
		{
			j = i;
			while (environ[j] != NULL)
			{
				environ[j] = environ[j + 1];
				j++;
			}
			continue;
		}
		i++;
	}
	return (0);
}
