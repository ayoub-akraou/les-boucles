/******************************************************************************

        Challenge 1 : Table de Multiplication Inversée
Écrivez un programme C qui demande un nombre à l’utilisateur et affiche sa table de multiplication en ordre décroissant, de 10 à 1.
Par exemple, pour le nombre 5, affichez :

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 10; i > 0; i--) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
