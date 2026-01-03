#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char **split_string (char *string);

int main(void)
{
    char str[] = "ls -l /tmp";
    char **argv;
    int i = 0;

    argv = split_string(str);
    if (argv == NULL)
        return (1);

    while (argv[i] != NULL)
    {
        printf("Mot %d : %s\n", i, argv[i]);
        free(argv[i]); // On libère chaque mot fait avec strdup
        i++;
    }
    free(argv); // On libère le tableau lui-même
    return (0);
}
