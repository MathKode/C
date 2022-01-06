#include <stdio.h>

int main(void)
{
    //Boucles
    /*
        Temps que...
            while(<CONDITION>)
            {
                <code>
            }
        Temps que (verif après 1 tour)
            do
            {
                <code>
            }
            while(<CONDITION>);
        For
            for(<VALEUR-DEPART> ; <CONDITION> ; <INCREMENTATION>)
            {
                <code>
            }
        
        <INCREMENTATION>
            i++ ou i+=1 ou i+=2 ...
    */
    int i = 0;
    while(i<3)
    {
        printf("Tour numero %d\n", i);
        i++;
    }

    i = 5;
    do
    {
        printf("\nCode execute avant condition :\ni=%d et i<3",i);
        i++;
    }
    while(i<3);

    printf("\n");

    for(i=0 ; i<3 ; i++)
    {
        printf("\nFOR tour %d",i);
    }
    return 0;
}