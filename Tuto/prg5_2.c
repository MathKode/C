#include <stdio.h>

int main(void)
{
    //Ternaire
    /*
        Une condition faite sur 1 seule ligne
        (<CONDITION>) ? <TRUE> : <FALSE>;

        <VR> = (<CONDITION>) ? <RESULT_TRUE> : <RESULT_FALSE>;
    */
    int age = 15;
    (age == 15) ? printf("Tu as 15ans") : printf("Tu n'as pas 15ans");

    int prix = 10;
    int chere = 0;
    chere = (prix > 30) ? 1 : 0;
    if(chere)
    {
        printf("\nLe prix est chere");
    }
    else
    {
        printf("\nCe n'est pas dutout chere :-)");
    }

    return 0;
}