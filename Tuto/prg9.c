#include <stdio.h>

int main(void)
{
    //Les Directives De Préprocesseur
    /*
        Le Préprocesseur : lors de la
        compilation, c'est un programme
        qui s'éxecute au tout début pour
        configurer les fichiers...

        On communique avec le Préprocess
        avec les # :
            
            #include <FILE>
        Ajoute d'autres fichiers avec des
        fonctions près codées
            
            #define <CONST> <VALEUR>
        Définit une constante (<VALEUR>
        est optionnel) : change tous l
        es endroits ou il y a <CONST>
        par la <VALEUR>
     */

    //Par exemple :
    #define afficher printf
    //Remplace tous les afficher par printf
    afficher("Salut");

    /*
            #ifndef <VR_NAME>
                ...
            #endif
        Execute le code (...) si la VR
        n'est pas définie
    */
}