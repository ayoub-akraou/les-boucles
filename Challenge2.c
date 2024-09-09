/******************************************************************************
 
 Challenge 2 : pyramide d'étoile
      *
     ***
    *****
   *******
  *********
 ***********
*************
Écrire le programme pour avoir un pyramide d'étoile, le nombre des lignes à composer est demandé à l’utilisateur.
(chaque ligne doit avoir un nombre premier d'étoiles.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    int left_margin;
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        left_margin = n - i + 1;
        for(int j = 1; j <= n; j++) {
            if(j < left_margin) printf(" ");
            else printf("*");
        }
        
        for(int j = 1; j < i; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
