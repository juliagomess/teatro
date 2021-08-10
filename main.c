#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char f,r='s',c[10]={'A','B','C','D','E','F','G','H','I','J'};
    int x[10][20]={0},i,j,a;
    while(r=='s')
    {
        system("cls");
        printf("RESERVA DE LUGAR NO TEATRO");
        printf("\n---------------------------\n");
        printf("\nMAPA DE LUGARES");
        for(i=0;i<10;i++)
        {
            printf("\n%c",c[i]);
            for(j=0;j<20;j++)
                printf("| %d ",x[i][j]);
            printf("|");
        }
        printf("\n");
        for(i=1;i<21;i++)
            printf("  %2d",i);
        do
        {
            printf("\n\nEscolha uma fileira: ");
            do
            {
                scanf("%c",&f);
                f=toupper(f);
            }while(f<65 || f>74);
            i=f-65;
            printf("Esolha um assento da fileira: ");
            do
            {
                scanf("%d",&a);
            }while(a<1 || a>20);
            j=a-1;
        }while(x[i][j]==1);
        x[i][j]=1;
        printf("Reserva feita com sucesso!\n");
        printf("\nIngresso");
        printf("\n--------------\n");
        printf("Nome da peca: Auto da Comparecida");
        printf("\nHorário: 5a-20h");
        printf("\nLugar: %c%d",f,a);
        printf("\n\nReservar mais um ingresso? Sim(s) Nao(n): ");
        fflush(stdin);
        scanf("%c",&r);
    }
    return 0;
}
