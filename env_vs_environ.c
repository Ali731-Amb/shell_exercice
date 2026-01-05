#include <stdio.h>
#include "main.h"

/**
 *main - function that print adress of environ and
 *env
 *
 *@ac: argument
 *@av: argument
 *@env: environement local
 *
 *Return: print env & environ otherwise 0
 */
int main(int ac, char **av, char **env)
{
(void) ac;
(void) av;
printf("Environ: %p\n", (void *)environ);
printf("Adresse du pointeur environ (global): %p\n", (void *)&environ);
printf("Adresse du pointeur env (local au main): %p\n", (void *)&env);
printf("Env:     %p\n", (void *)env);

return (0);
}
