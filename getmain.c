#include <stddef.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    char *path_value;

    path_value = _getenv("PATH");

    if (path_value != NULL)
        printf("La valeur de PATH est : %s\n", path_value);
    else
        printf("Variable non trouvée.\n");

    return (0);
}
