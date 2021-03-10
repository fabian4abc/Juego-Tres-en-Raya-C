#include <stdlib.h>

void Titulo(void)
{
    printf("                  ");
    printf(" XXX   XXX  XXXXX  XXX"); printf("\n                  ");
    printf("X     X   X   X   X   X"); printf("\n                  ");
    printf("X XX  XXXXX   X   X   X"); printf("\n                  ");
    printf("X   X X   X   X   X   X"); printf("\n                  ");
    printf(" XXX  X   X   X    XXX");
}

int Inicio(void)
{
        int opcion;
        repetir:;
        system("clear||cls");
        Titulo();
        printf("\n\n"); printf("\n           ");
        printf("(1) Partida entre dos jugadores."); printf("\n           ");
        printf("(2) Partida entre un jugador y el computador."); printf("\n"); printf("\n           ");
        printf("Ingrese una opci%cn: ", 162);
        scanf("%d", &opcion);
        fflush(stdin);
        if(opcion==1 || opcion==2){
            return opcion;
        }
        else {
            printf("Car%ccter Ingresado No V%clido...\n\n",160,160);
            system("pause");
            goto repetir;
        }


    return opcion;
}
int validacionfila (void){
int fila=5;
 repetirfila:;

        printf("N%cmero de fila: ",163);
            scanf("%i", &fila);
        fflush(stdin);
        if(fila==1 || fila==2 || fila==3){
            return fila;
        }
        else {
            printf("Car%ccter Ingresado No V%clido...\n\n",160,160);
            system("pause");
            goto repetirfila;
        }

}

int validacioncolumna (void){
int columna=5;
 repetircolumna:;

        printf("N%cmero de columna: ",163);
            scanf("%i", &columna);
        fflush(stdin);
        if(columna==1 || columna==2 || columna==3){
            return columna;
        }
        else {
            printf("Car%ccter Ingresado No V%clido...\n\n",160,160);
            system("pause");
            goto repetircolumna;
        }


}
void ImprimeGato(char p11, char p12, char p13, char p21, char p22, char p23, char p31, char p32, char p33)
{
    printf("\n");
    printf("\n                    "); printf("     1   2   3");
    printf("\n                    "); printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 203, 205, 205, 205, 203, 205, 205, 205, 187);
    printf("\n                    "); printf(" 1 "); printf("%c %c %c %c %c %c %c", 186, p11, 186, p12, 186, p13, 186); printf(" 1 ");
    printf("\n                    "); printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205, 185);
    printf("\n                    "); printf(" 2 "); printf("%c %c %c %c %c %c %c", 186, p21, 186, p22, 186, p23, 186); printf(" 2 ");
    printf("\n                    "); printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205, 185);
    printf("\n                    "); printf(" 3 "); printf("%c %c %c %c %c %c %c", 186, p31, 186, p32, 186, p33, 186); printf(" 3 ");
    printf("\n                    "); printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 202, 205, 205, 205, 202, 205, 205, 205, 188);
    printf("\n                    "); printf("     1   2   3");
}
void LimpiaPantalla()
{
    system("clear||cls");
}





