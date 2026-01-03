#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *split_string - fonction that split a string
 *@str: string to compt
 *
 *Return: Array of res or NULL
 */

char **split_string(char *str)
{
char **res;
char *token;
char *str1, *str2;
int count = 0, i = 0;

if (str == NULL)
return (NULL);

str1 = strdup(str);

token = strtok(str1, " \t\n");

while (token != NULL)
{
	token = strtok(NULL, " \t\n");
	count++;
}
res = malloc(sizeof(char *) * (count + 1));
str2 = strdup(str);
token = strtok(str2, " \t\n/");

while (token != NULL)
	{
	res[i] = strdup(token);
	i++;
	token = strtok(NULL, " \t\n");
	}
	res[i] = NULL;

free(str1);
free(str2);
return (res);
}
