#include <stdio.h>

int main(void)
{
    //Tableaux
    /*
        Les tableaux sont comme des "listes" Python
        Le premier élément est à l'index 0.
        Au niveau de la RAM, le tableau se traduit par un bloc consécutif de valeur.
        
        [DECLARATION]
            int <TB>[<CASES>]; (valeur aléatoire)
            int <TB>[<CASES>] = {<V0>, <V1>, ...};
            int <TB>[<CASES>] = {}; (valeur set sur 0)
            int <TB>[<CASES>] = {0}; (valeur set sur 0)
            int <TB>[<CASES>] = {<NB>}; (index[0]=<NB> et le reste sur 0)

        [AFFECTATION]
            <TB>[<CASE>] = <VALEUR>;

        [AFFICHER]
            %d, <TB>[<CASE>]
                int i;
                for(i = 0; i<5 ; i++)
                {
                    printf("Valeur %d : %d\n",i,tableau2[i]);
                }
            
        [POINTEUR & TABLEAU]
            tableau[X]     : élément d'indice X (pointeur implicite)
            tableau        : Adresse du tableau
            *tableau       : Premier élément
            *(tableau + X) : élément d'indice X
    */
    
    int tableau1[5];

    tableau1[0] = 32;
    tableau1[1] = 1;
    tableau1[3] = 10; 

    //ou

    int tableau2[5] = {16, 4, -5, 32, 100};

    int i;
    for(i = 0; i<5 ; i++)
    {
        printf("Valeur %d : %d\n",i,tableau2[i]);
    }


    return 0;
}