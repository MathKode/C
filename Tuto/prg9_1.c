#include <stdio.h>

int main(void)
{
    //Constante Prédéfinie
    /*
        __FILE__ (nom fichier source)
        __LINE__ (ligne du fichier où la constante est affichée)
        __DATE__ (date de compilation)
        __TIME__ (heure de compilation)
    */
    
    printf("%s",__FILE__);
}