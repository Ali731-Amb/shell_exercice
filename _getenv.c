#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _getenv - Trouve la valeur d'une variable d'environnement
 * @name: Le nom de la variable (ex: "PATH")
 *
 * Return: Un pointeur vers le début de la valeur, ou NULL
 */

char *_getenv(const char *name)
{
	int i = 0;
	int len;

	len = strlen(name);
	while ((environ[i]) != NULL)
	{
		if (strncmp(environ[i], name, len) == 0 && environ[i][len] == '=')
		{
			return (environ[i] + len + 1);
		}
		i++;
	}
	return (NULL);
}
