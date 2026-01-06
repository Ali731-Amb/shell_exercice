#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme de test pour _unsetenv
 * * Return: Toujours 0
 */
int main(void)
{
    char *name = "MA_VARIABLE_DE_TEST";

    /* 1. On crée une variable pour tester */
    setenv(name, "Bonjour_le_monde", 1);
    
    printf("--- Avant la suppression ---\n");
    printf("%s = %s\n", name, getenv(name));

    /* 2. On appelle TA fonction */
    if (_unsetenv(name) == 0)
    {
        printf("\n--- Après la suppression ---\n");
        if (getenv(name) == NULL)
            printf("Succès : La variable '%s' a disparu ! ✅\n", name);
        else
            printf("Échec : La variable '%s' est toujours là. ❌\n", name);
    }
    else
    {
        printf("Erreur lors de l'appel de _unsetenv. ⚠️\n");
    }

    return (0);
}
