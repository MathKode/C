#include <stdio.h>

int age(int nb)
{
    switch(nb)
    {
        case 5:
            printf("Tu as 5 ans\n");
            break;
        default:
            printf("Tu n'as pas 5 ans\n");
            break;
    }
    return 0;
}

int main(void)
{
    //Fonction
    /*
    <TYPE RETURN> <NAME>(<TYPE VR> <VR>)
    {
        <code>
    }
    */
    int age_nb = 0;
    const signed char True = 1;

    while(True)
    {
        printf("Quelle age as-tu ? ");
        scanf("%d",&age_nb);
        age(age_nb);
    }
    return 0;
}