#include <stdio.h>
#define TAILLE_TABLEAU 5

int *creer_tableau(void)
{
    static int tableau_entier[TAILLE_TABLEAU];
    int i;
    for(i=0;i<TAILLE_TABLEAU;i++)
        tableau_entier[i] = i * 3;
    return tableau_entier;
}

void afficher_tableau(int *tab, int taille) //ou (int tab[], int taille)
{
    int i;
    for(i=0;i<taille;i++)
    {
        printf("[%d] ",tab[i]);
    }
}

int main(void)
{
    int *tableau = creer_tableau();

    afficher_tableau(tableau, TAILLE_TABLEAU);
    return 0;
}