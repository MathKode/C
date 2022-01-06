#include <stdio.h>

int main(void)
{
    //Operateur
    /*
        + (addition)
        - (soustraction)
        * (multiplication)
        / (division) 5 / 3 -> 1
        % (modulo) 5 % 3 -> 2

        <VR> = <VR> + 2 
        <VR> += 2
 
        <VR> -= 2
        <VR> *= 2
        <VR> /= 2
        <VR> %= 2 

        A += 1 -> A++ ou ++A
        A -= 1 -> A-- ou --A
    */

    //Calcul
    int calcul = 6 + (4 - 3);
    printf("%d\n%d\n",calcul,2*3);

    //Calcul de Variable
    int nb1 = 6;
    int nb2 = 4;
    printf("%d\n",nb1+nb2);

    //Exemple niveau joueur
    int niveau_joueur = 1;

    printf("Choisir le niveau : ");
    scanf("%d",&niveau_joueur);
    printf("Niveau de depart : %d",niveau_joueur);

    niveau_joueur = niveau_joueur + 1;
    niveau_joueur++;
    printf("\nNiveau final ; %d", niveau_joueur);

    return 0;
}