#include <unistd.h>
#include <stdio.h>
#include "main.h"


/**
 *main - funtion thath print environnement
 *
 *Return: Environnement otherwise 0
 */


int main(void)
{
int i;

while (environ[i] != NULL)
{
	printf("%s\n", environ[i]);
	i++;
}
return (0);
}
