#include "main.h"

int main(void)
{
    printf("--- Test 1: Contenu du PATH ---\n");
    print_path_dirs();

    printf("\n--- Test 2: Ajout d'une variable ---\n");
    _setenv("TEST_VARIABLE", "C_EST_GENIAL", 1);
    printf("Valeur ajoutée : %s\n", _getenv("TEST_VARIABLE"));

    return (0);
}
