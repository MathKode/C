#include <stdio.h>

void augmentation(int *pt_1, int *pt_2, int HAUSSE)
{
    printf("Modification de l'emplacement : %d\n", pt_1);
    *pt_1=*pt_1 + HAUSSE;
    printf("Modification de l'emplacement : %d\n\n", pt_2);
    *pt_2=*pt_2 + HAUSSE;
}
int main(void)
{
    //Pointeurs
    /*
        Pointeur : variable contenant l'adresse d'une autre variable
        %d -> Affiche l'Adresse d'une varibale

        [VARIABLES]
            <VR>  : Valeur de la variable
            &<VR> : Emplacement de la variable

        [POINTEURS]
            <PT>  : Adresse de la <VR>
            *<PT> : Valeur de la <VR>
            &<PT> : Adresse du <PT> (car l'info <PT> est stocké en RAM)

        [DECLARATION PT]
            int *<PT> = &<VR>;
            int *<PT> = NULL;
    */
    int prix_obj1 = 10;
    int prix_obj2 = 13;
    const int HAUSSE = 5;

    printf("Prix 1 : %d | Prix 2 : %d\n\n",prix_obj1,prix_obj2);
    augmentation(&prix_obj1,&prix_obj2,HAUSSE);
    printf("Prix 1 : %d | Prix 2 : %d",prix_obj1,prix_obj2);

    return 0;
}