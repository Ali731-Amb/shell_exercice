#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;

	if (av == 0)
		return (1);

	while (av[i] != 0)
	{
		printf("%s,", av[i]);
		i++;
	}

	printf("\n");
	return (0);
}
