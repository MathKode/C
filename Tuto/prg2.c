#include <stdio.h>

int main(void)
{
    //Affectation d'une variable : Type Nom = valeur;
    int Aire_du_carre = 5; //Les variables ont des adresse
    float prix = 125.95;
    signed char petit_nombre = 120; //0 à 255
    signed char lettre_unique = 'A'; //Taille Ascii
    
    //Mot clef spéciaux
    const float PI = 3.14; //Lecture seule (évite de modifier la valeur)
    register int nombre = 5; //Stocké dans les registres du processeur (+rapide)
    volatile int autre_nombre = 10; //Stocké dans la mémoire RAM (JAMAIS REGISTRE)
    

    //Modification d'une valeur
    Aire_du_carre = 12;

    //Convertion
    int prix_entier = (int)prix; //C'est un "caste" change de type
    prix_entier = (int)125.99; // 125.99 -> 125

    //Affichage
    /*
    Drapeau d'affichage
        %d : nombre entier (int)
        %f : nombre flottant (float)
        %c : caractère (char)
        %s : chaine de caractère (text)
        %.xf : Affiche que x caractère après la virgule (et fait un arrondi)
    */
    printf("Le prix original est de %f$\n Mais après (int)prix, il est de %d  \n", prix, prix_entier);
    printf("VR_1 %d ; VR_2 %d ; VR_3 %c\n\n",Aire_du_carre, petit_nombre,lettre_unique);
    
    float floattant = 34.12873;
    printf("Original : %f\nCut : %.2f",floattant,floattant);
    
    return 0;
}