#include <stdio.h>

#define NOMBRE_LIGNE 3
#define NOMBRE_COLONNE 2

int main(void)
{
    //Tableau 2 Dimensions
    /*
        Exemple de tableaux 2D :
          -------------
          | 5 | 6 | 3 |
          -------------
          | 3 | 5 | 1 |
          -------------
        
        [DECLARATION]
            int <TB>[<NB LIGNES>][<NB COLONNE>];
            
            int <TB>[<NB LIGNES>][<NB COLONNE>] =
            {
                {<V1>, <V2>, ...},
                {<V1>, <V2>, ...},
            };

            int <TB>[<NB LIGNES>][<NB COLONNE>] = { {<V1>, <V2>}, {<V1>, <V2>} };
            
        [AFFICHER]
            <TB>[<LIGNE>][<COLONNE>]
    */
    int damier[NOMBRE_LIGNE][NOMBRE_COLONNE] = { {1, 4}, {3, 3}, {5, 2} };

    int i, j;
    for(i=0 ; i<NOMBRE_LIGNE ; i++)
        for(j=0 ; j<NOMBRE_COLONNE ; j++)
            printf("Element d'index [%d][%d] : %d\n",i,j,damier[i][j]);
}