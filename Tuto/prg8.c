#include <stdio.h> // <> -> Car il est dans les assets de gcc
#include "sourceprg8.h" // " " -> Car ce n'est pas un fichier système

int main(void)
{
    //Programmation modulaire
    /*
        Pour comprendre cette notion,
        nous avons besoin de trois fi
        chiers :
        -----------------------------
        |           CODE            |
        |                           |
        | #include "<nom>.h"        |
        -----------------------------
        -----------------------------
        |       FICHIER . C         |
        |                           |
        | #include "<nom>.h"        |
        | <FONCTION PRES CODEE>     |
        -----------------------------
        -----------------------------
        |       ANNUAIRE (.H)       |
        |                           |
        | #ifndef <CONST_NAME>      |
        | #define <CONST_NAME>      |
        |                           |
        | <TYPE> <Fonction>(<ARG>); |
        | <TYPE> <Fonction>(<ARG>); |
        |           ...             |
        |                           |
        | #endif                    |
        -----------------------------

        -----------------------------
        Pour compiler, on doit obliga
        toirement citer tous les fich
        iers (sauf .h)...

        Si ils sont les seuls présent
            gcc *.c -o prg
        Si il y a d'autres fichiers
            gcc *prg8.c -o prg8
        -----------------------------
        
        -----------------------------
        EXPLICATION : dans le fichier
        annuaire, si on met un #ifnde
        f et un #define, c'est pour é
        viter d'intregrer plusieur fo
        is un fichier.
        En effet, une fois appelé, la
        constante est définie et le c
        ode ne s'execute plus...
        -----------------------------
      */

    bonjour();
    return 0;
}