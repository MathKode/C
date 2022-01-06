#include <stdio.h>

int main(void)
{
    //Operateur de comparaison
    /*
        == : égal à
        != : différent de
        <  : inférieur à
        >  : supérieur à
        <= : inférieur ou égal à
        >= : supérieur ou égal à
        !<VR> : n'est pas égal à

        1 : True
        0 : False

        && : ET
        || : OU
        !  : NOT
    */

    int nombre = 0;
    printf("Nombre : ");
    scanf("%d",&nombre);

    if(nombre == 0)
    {
        printf("Nombre vaut bien 0 !");
    } 
    else if(nombre < 10)
    {
        printf("Nombre inferieur a 10 !");
    }
    else if(nombre > 20 && nombre < 30)
    {
        printf("Nombre entre 20 et 30");
    }
    else
    {
        printf("Nombre inconnnnnuuuuuu :-)");
    }

    return 0;
}