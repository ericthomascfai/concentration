#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main() {
    int delay = 0;
    int saisie=0;
    /****************************************Menu**********************************************************************/
    printf("1-Facile (rappelez-vous 5 chiffres en 10 secondes)\n");
    printf("2-Intermédiaire (rappelez-vous 5 chiffres en 5 secondes)\n");
    printf("3-Difficile (rappelez-vous 5 chiffres en 2 secondes)\n");
    printf("4-Arrêter le jeu\n");
    switch (scanf("%d",&saisie))
    {
        case 1:
            delay = 10;
            break;
        case 2:
            delay=5;
            break;
        case 3:
            delay=2;
            break;
        case 4:
            return 0;

    }

    /********************************Génération de la série************************************************************/
    srand(time(NULL));
    int n1=0,n2=0,n3=0,n4=0,n5=0;
    n1= (rand() % (1000)) +1;
    n2= (rand() % (1000)) +1;
    n3= (rand() % (1000)) +1;
    n4= (rand() % (1000)) +1;
    n5= (rand() % (1000)) +1;

    printf("%d %d %d %d %d ",n1,n2,n3,n4,n5);
    fflush(stdout); //vide la derniere ligne de la console
    sleep(delay);

    /******************************Saisie de la serie******************************************************************/
    int u1=0,u2=0,u3=0,u4=0,u5=0;
    int n;
    printf("\rVeuillez entre le 1er nombre");
    scanf("%d",&u1);
    printf("Veuillez entre le deuxième nombre");
    scanf("%d",&u2);
    printf("Veuillez entre le trosième nombre");
    scanf("%d",&u3);
    printf("Veuillez entre le quatrième nombre");
    scanf("%d",&u4);
    printf("Veuillez entre le cinquième nombre");
    scanf("%d",&u5);
    /******************************test*****************************************************************************/
    if (u1==n1 && u2==n2&& u3==n3 && u4==n4 && u5==n5)
    {
        printf("Vous avez gagné!!\n");
    }
    else
    {
        printf("Perdu\n");
        printf("La série était\n");
        printf("%d %d %d %d %d",n1,n2,n3,n4,n5);
    }
}