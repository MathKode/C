#include <stdio.h>

int main(void)
{
    // Switch
    /*
        Quand on a plusieurs if
        if()
        {
        }
        else if
        {
        }
        ...

        -> Switch (concaténer) case <=> ==<NB>
        
        switch(<VR>)
        {
            case <NB>:
                <code>
                break;

            case <NB>:
                <code>
                break;

            default:
                <code>
                break;
        }
        
    */
    int age = 15;

    switch(age)
    {
        case 0:
            printf("Tu as 0 ans");
            break;

        case 15:
            printf("Tu as 15 ans");
            break;

        default:
            break;
    }

    return 0;
}