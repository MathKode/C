#include <stdio.h>

int main(void)
{
    int age = 0; //Valeur par défaut

    //Saisie au clavier
    printf("Quel age avez vous ? ");
    scanf("%d", &age); //fonction sans sécurité (dangeureuse mal utilisé)

    printf("Vous avez %d ans",age);

    /*
    Varianle :
        age -> contenu de la variable
        &age -> addresse de la variable
    L'addresse de la variable est l'endroit ou est stocké la vr
    */
    return 0;
}

//Code pour une lettre
/*
signed char lettre = 'A';
printf("Entrez une lettre : ");
scanf("%c",&lettre);
printf("La lettre choisie est : %c",lettre);
*/