#include <stdio.h>
#include "Interfaz.h"
#include <stdlib.h>
#include <time.h>




int main()
{
    system("color F0");
    char p11, p12, p13, p21, p22, p23, p31, p32, p33, simbolo,SimboloAlexa,SimboloJugador;
    char nombrecpu[13]={'A','l','e','x','a',' ','I','A',' ','3','.','0','\0'};
    int opcion,fila,columna,terminado,seguirjugando,ContadorDeJugadas,ContadorDeJuegos,jugador,JuegosGanados1,JuegosGanados2,PuntosJugador1,PuntosJugador2,juegoempatado,JuegosEmpatados,JuegosGanadosAlexa,PuntosAlexa,Pausa;
    marca2:;
    ContadorDeJugadas=1;
    ContadorDeJuegos=1;
    terminado = 0;
    seguirjugando=1;
    JuegosGanados1=0;
    JuegosGanados2=0;
    PuntosJugador1=0;
    PuntosJugador2=0;
    JuegosEmpatados=0;
    JuegosGanadosAlexa=0;
    PuntosAlexa=0;
    srand(time(0));
    Pausa=0;





    while (seguirjugando==1){
        seguirjugando=0;
        terminado=1;
        juegoempatado=0;


        p11=' ';
        p12=' ';
        p13=' ';
        p21=' ';
        p22=' ';
        p23=' ';
        p31=' ';
        p32=' ';
        p33=' ';
        marca4:;
        LimpiaPantalla();
        opcion = Inicio();
    if(opcion==1){
        printf("\n\n");
        system("pause");

        marca3:;
        p11=' ';
        p12=' ';
        p13=' ';
        p21=' ';
        p22=' ';
        p23=' ';
        p31=' ';
        p32=' ';
        p33=' ';

        //Empieza juego 1v1

        while (opcion==1) {

        LimpiaPantalla();
        Titulo();
        printf("\n\nPuntaje Jugador 1: %i Pts.          Puntaje Jugador 2: %i Pts.\n",PuntosJugador1,PuntosJugador2);
        ImprimeGato(p11, p12, p13, p21, p22, p23, p31, p32, p33);
        printf("\n\n");
       printf("Juego N%cmero: %i , Jugada N%cmero: %i\n\n",163,ContadorDeJuegos,163,ContadorDeJugadas);


        while (terminado == 1){




          //Condiciones de que jugador juega
              if(ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                jugador=1;
            }

              if(ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                jugador=2;
            }

              if(ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                jugador=2;
            }

              if(ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                jugador=1;
            }


            //codicion de simbolo del jugador
              if(ContadorDeJugadas%2!=0){
                simbolo='X';
              }

              else{
                simbolo='O';
              }

            marca1:;
            printf("Ahora Juega el Jugador %i (%c).\n", jugador,simbolo);
            fila = validacionfila();
            columna = validacioncolumna();


            //desde aqui empiezan las condiciones de posicion
            if(fila==1 && columna==1){

              if(p11==' '){

                if(ContadorDeJugadas%2!=0){
                    p11='X';


                    }
                else{
                    p11='O';
                }
              }
              else {
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1;

              }


            }

            if(fila==1 && columna==2){

              if(p12==' '){

                if(ContadorDeJugadas%2!=0){
                    p12='X';}
                else{
                    p12='O';
                }
               }
                else {
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1;

              }
            }

            if(fila==1 && columna==3){

               if(p13==' '){

                if(ContadorDeJugadas%2!=0){
                    p13='X';}

                else{
                    p13='O';
                }
               }

                else {
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1;

              }
            }

            if(fila==2 && columna==1){

              if(p21==' '){

                if(ContadorDeJugadas%2!=0){
                    p21='X';}

                else{
                    p21='O';
                }
              }

               else {
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1;

              }
            }

            if(fila==2 && columna==2){

              if(p22==' '){

                if(ContadorDeJugadas%2!=0){
                    p22='X';}

                else{
                    p22='O';
                }
              }

               else {
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1;

              }
            }

            if(fila==2 && columna==3){

              if(p23==' '){

                if(ContadorDeJugadas%2!=0){
                    p23='X';}

                else{
                    p23='O';
                }
              }

               else {
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1;

              }
            }

            if(fila==3 && columna==1){

               if(p31==' '){

                if(ContadorDeJugadas%2!=0){
                    p31='X';}
                else{
                    p31='O';
                }
               }

               else {
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1;

              }
            }

            if(fila==3 && columna==2){

               if(p32==' '){

                if(ContadorDeJugadas%2!=0){
                    p32='X';}
                else{
                    p32='O';
                }
               }

                else {
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1;

              }
            }

            if(fila==3 && columna==3){

             if(p33==' '){

                if(ContadorDeJugadas%2!=0){
                    p33='X';}

                else{
                    p33='O';
                }
              }

               else {
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1;

              }
            }

            ContadorDeJugadas++;

            LimpiaPantalla();
            Titulo();
            printf("\n\nPuntaje Jugador 1: %i Pts.          Puntaje Jugador 2: %i Pts.\n",PuntosJugador1,PuntosJugador2);
            ImprimeGato(p11, p12, p13, p21, p22, p23, p31, p32, p33);
            printf("\n\n");
            printf("Juego N%cmero: %i , Jugada N%cmero: %i\n\n",163,ContadorDeJuegos,163,ContadorDeJugadas);

            //Condiciones de Ganado
            if (p11==p12 && p12==p13 && p11!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }

            }

            if (p21==p22 && p22==p23 && p21!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
            }

            if (p31==p32 && p32==p33 && p31!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
            }

            if (p11==p21 && p21==p31 && p11!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
            }

            if (p12==p22 && p22==p32 && p12!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
            }

            if (p13==p23 && p23==p33 && p13!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
            }

            if (p11==p22 && p22==p33 && p11!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
            }

            if (p13==p22 && p22==p31 && p13!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 2\n\n");
                        system("pause");
                    }
            }

            if (p11 !=' ' && p12 !=' ' && p13 !=' ' && p21 !=' ' && p22 !=' ' && p23 !=' ' && p31 !=' ' && p32 !=' ' && p33 !=' ' && terminado==1){
                terminado=2;
                printf("Juego Terminado, Empate\n\n");
                juegoempatado=1;
                PuntosJugador1 += 2;
                PuntosJugador2 += 2;
                system("pause");
                JuegosEmpatados++;
            }


        } //este cierra el while


            //condiciones de quien gana
            if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0 && juegoempatado==0){
            JuegosGanados2++;
            PuntosJugador2 += 5;
        }

            if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0 && juegoempatado==0){
            JuegosGanados1++;
            PuntosJugador1 += 5;
        }

            if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0 && juegoempatado==0){
            JuegosGanados1++;
            PuntosJugador1 += 5;
        }

            if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0 && juegoempatado==0){
            JuegosGanados2++;
            PuntosJugador2 += 5;
        }




    printf(" %cQuiere seguir jugando?\n",168);
    printf("1.- Si.\n");
    printf("2.- No.\n");
    printf("3.- Volver al men%c principal\n",163);
    scanf("%i",&terminado);
    if (terminado==1 || terminado==2 || terminado==3){


    ContadorDeJugadas=1;
    if(terminado==1){
    ContadorDeJuegos++;
    goto marca3;

    }
    if(terminado==2){


        LimpiaPantalla();
        printf("Estad%csticas juego\n\n",161);
        printf("Partidas Totales Jugadas: %i\n\n\n",ContadorDeJuegos);
        printf("Jugador 1:\n\n");
        printf("Partidas Ganadas: %i\n",JuegosGanados1);
        printf("Juegos Empatados: %i\n",JuegosEmpatados);
        printf("Puntaje: %i\n\n",PuntosJugador1);
        printf("Jugador 2:\n\n");
        printf("Partidas Ganadas: %i\n",JuegosGanados2);
        printf("Juegos Empatados: %i\n",JuegosEmpatados);
        printf("Puntaje: %i\n\n",PuntosJugador2);
            if(PuntosJugador1>PuntosJugador2){
                printf("Ganador Jugador 1\n\n");
            }
            if(PuntosJugador1<PuntosJugador2){
                printf("Ganador Jugador 2\n\n");
            }
            if(PuntosJugador1==PuntosJugador2){
                printf("Empate\n\n");
            }

        system("pause");

        return 0;





    }
    if(terminado==3){

        goto marca2;
    }
    }





    } //cierre while 1v1
    }

     //aca inicia codigo computador vs humano
    if(opcion==2){
            fila=0;
            columna=0;


            while (opcion==2){


        marca3cpu:;
        p11=' ';
        p12=' ';
        p13=' ';
        p21=' ';
        p22=' ';
        p23=' ';
        p31=' ';
        p32=' ';
        p33=' ';

        system("pause");
        LimpiaPantalla();
        Titulo();
        printf("\n\nPuntaje Jugador 1: %i Pts.          Puntaje Alexa IA 3.0: %i Pts.\n",PuntosJugador1,PuntosAlexa);
        ImprimeGato(p11, p12, p13, p21, p22, p23, p31, p32, p33);
        printf("\n\n");
        printf("Juego N%cmero: %i , Jugada N%cmero: %i\n\n",163,ContadorDeJuegos,163,ContadorDeJugadas);




        while (terminado == 1){


          //Condiciones de que jugador juega
              if(ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                jugador=1;
            }

              if(ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                jugador=2;
            }

              if(ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                jugador=2;
            }

              if(ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                jugador=1;
            }

            //condicion simbolo jugador

            if(ContadorDeJugadas%2!=0){
                simbolo='X';

              }

              else{
                simbolo='O';
              }
             if(ContadorDeJuegos%2==0){
                SimboloAlexa='X';
             }
             if(ContadorDeJuegos%2!=0){
                SimboloAlexa='O';
             }


             if(ContadorDeJuegos%2!=0){
                SimboloJugador='X';
             }
             if(ContadorDeJuegos%2==0){
                SimboloJugador='O';
             }

               marca1cpu:;

                if(jugador==1){
            printf("Ahora Juega el Jugador %i (%c).\n", jugador,simbolo);
            fila = validacionfila();
            columna = validacioncolumna();


                }


               if(jugador==2){
                    if (Pausa==0){
            printf("Ahora Juega el Jugador %s (%c).\n", nombrecpu,simbolo);
            }


                    //condiciones para ia ataque

                    if (p11==p12 && p11==SimboloAlexa && p13==' '){
                        fila=1;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p11==p13 && p11==SimboloAlexa && p12==' '){
                        fila=1;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p12==p13 && p12==SimboloAlexa && p11==' '){
                        fila=1;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p21==p22 && p21==SimboloAlexa && p23==' '){
                        fila=2;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p21==p23 && p21==SimboloAlexa && p22==' '){
                        fila=2;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p22==p23 && p22==SimboloAlexa && p21==' '){
                        fila=2;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p31==p32 && p31==SimboloAlexa && p33==' '){
                        fila=3;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p31==p33 && p31==SimboloAlexa && p32==' '){
                        fila=3;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p32==p33 && p32==SimboloAlexa && p31==' '){
                        fila=3;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }
                    //columnas
                    if (p11==p21 && p11==SimboloAlexa && p31==' '){
                        fila=3;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p11==p31 && p11==SimboloAlexa && p21==' '){
                        fila=2;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p21==p31 && p21==SimboloAlexa && p11==' '){
                        fila=1;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p12==p22 && p12==SimboloAlexa && p32==' '){
                        fila=3;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p12==p32 && p12==SimboloAlexa && p22==' '){
                        fila=2;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }


                    if (p22==p32 && p22==SimboloAlexa && p12==' '){
                        fila=1;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p13==p23 && p13==SimboloAlexa && p33==' '){
                        fila=3;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p13==p33 && p13==SimboloAlexa && p23==' '){
                        fila=2;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p11==p22 && p11==SimboloAlexa && p33==' '){
                        fila=3;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p11==p33 && p11==SimboloAlexa && p22==' '){
                        fila=2;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p22==p33 && p22==SimboloAlexa && p11==' '){
                        fila=1;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p13==p22 && p13==SimboloAlexa && p31==' '){
                        fila=3;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p13==p31 && p13==SimboloAlexa && p22==' '){
                        fila=2;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }
                    if (p22==p31 && p22==SimboloAlexa && p13==' '){
                        fila=1;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }


                    //condiciones para IA defensa

                     if (p11==p12 && p11==SimboloJugador && p13==' '){
                        fila=1;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p11==p13 && p11==SimboloJugador && p12==' '){
                        fila=1;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p12==p13 && p12==SimboloJugador && p11==' '){
                        fila=1;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p21==p22 && p21==SimboloJugador && p23==' '){
                        fila=2;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p21==p23 && p21==SimboloJugador && p22==' '){
                        fila=2;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p22==p23 && p22==SimboloJugador && p21==' '){
                        fila=2;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p31==p32 && p31==SimboloJugador && p33==' '){
                        fila=3;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p31==p33 && p31==SimboloJugador && p32==' '){
                        fila=3;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p32==p33 && p32==SimboloJugador && p31==' '){
                        fila=3;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }
                    //columnas
                    if (p11==p21 && p11==SimboloJugador && p31==' '){
                        fila=3;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p11==p31 && p11==SimboloJugador && p21==' '){
                        fila=2;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p21==p31 && p21==SimboloJugador && p11==' '){
                        fila=1;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p12==p22 && p12==SimboloJugador && p32==' '){
                        fila=3;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p12==p32 && p12==SimboloJugador && p22==' '){
                        fila=2;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }


                    if (p22==p32 && p22==SimboloJugador && p12==' '){
                        fila=1;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p13==p23 && p13==SimboloJugador && p33==' '){
                        fila=3;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p13==p33 && p13==SimboloJugador && p23==' '){
                        fila=2;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p11==p22 && p11==SimboloJugador && p33==' '){
                        fila=3;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p11==p33 && p11==SimboloJugador && p22==' '){
                        fila=2;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p22==p33 && p22==SimboloJugador && p11==' '){
                        fila=1;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p13==p22 && p13==SimboloJugador && p31==' '){
                        fila=3;
                        columna=1;
                        Pausa=1;
                        goto saltocondiciones;
                    }

                    if (p13==p31 && p13==SimboloJugador && p22==' '){
                        fila=2;
                        columna=2;
                        Pausa=1;
                        goto saltocondiciones;
                    }
                    if (p22==p31 && p22==SimboloJugador && p13==' '){
                        fila=1;
                        columna=3;
                        Pausa=1;
                        goto saltocondiciones;
                    }


            fila=(rand()%3) +1;
            columna=(rand()%3) +1;
            Pausa=1;
            saltocondiciones:;



               }

                if(fila>=4 || fila<=0 || columna >=4 || columna <=0){
                printf("Esa casilla no existe\n\n");
                system("pause");
                goto marca1cpu;
            }

               //desde aqui empiezan las condiciones de posicion en jugador vs cpu
            if(fila==1 && columna==1){

              if(p11==' '){

                if(ContadorDeJugadas%2!=0){
                    p11='X';


                    }
                else{
                    p11='O';
                }
              }
              else {

                if(jugador==1){
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1cpu;
                }
                if(jugador==2){
                    goto marca1cpu;
                }

              }


            }

            if(fila==1 && columna==2){

              if(p12==' '){

                if(ContadorDeJugadas%2!=0){
                    p12='X';}
                else{
                    p12='O';
                }
               }
                else {
                if(jugador==1){
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1cpu;
                }
                if(jugador==2){
                    goto marca1cpu;
                }

              }
            }

            if(fila==1 && columna==3){

               if(p13==' '){

                if(ContadorDeJugadas%2!=0){
                    p13='X';}

                else{
                    p13='O';
                }
               }

                else {
                if(jugador==1){
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1cpu;
                }
                if(jugador==2){
                    goto marca1cpu;
                }

              }
            }

            if(fila==2 && columna==1){

              if(p21==' '){

                if(ContadorDeJugadas%2!=0){
                    p21='X';}

                else{
                    p21='O';
                }
              }

               else {
                if(jugador==1){
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1cpu;
                }
                if(jugador==2){
                    goto marca1cpu;
                }
              }
            }

            if(fila==2 && columna==2){

              if(p22==' '){

                if(ContadorDeJugadas%2!=0){
                    p22='X';}

                else{
                    p22='O';
                }
              }

               else {
                if(jugador==1){
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1cpu;
                }
                if(jugador==2){
                    goto marca1cpu;
                }

              }
            }

            if(fila==2 && columna==3){

              if(p23==' '){

                if(ContadorDeJugadas%2!=0){
                    p23='X';}

                else{
                    p23='O';
                }
              }

               else {
                if(jugador==1){
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1cpu;
                }
                if(jugador==2){
                    goto marca1cpu;
                }

              }
            }

            if(fila==3 && columna==1){

               if(p31==' '){

                if(ContadorDeJugadas%2!=0){
                    p31='X';}
                else{
                    p31='O';
                }
               }

               else {
                if(jugador==1){
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1cpu;
                }
                if(jugador==2){
                    goto marca1cpu;
                }

              }
            }

            if(fila==3 && columna==2){

               if(p32==' '){

                if(ContadorDeJugadas%2!=0){
                    p32='X';}
                else{
                    p32='O';
                }
               }

                else {
                if(jugador==1){
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1cpu;
                }
                if(jugador==2){
                    goto marca1cpu;
                }

              }
            }

            if(fila==3 && columna==3){

             if(p33==' '){

                if(ContadorDeJugadas%2!=0){
                    p33='X';}

                else{
                    p33='O';
                }
              }

               else {
                    if(jugador==1){
                printf("Esa casilla esta ocupada\n\n");
                system("pause");
                goto marca1cpu;
                    }
                    if(jugador==2){
                        goto marca1cpu;
                    }

              }
            }

             if(Pausa==1){
                system("pause");
                Pausa=0;
             }
              ContadorDeJugadas++;




            LimpiaPantalla();
            Titulo();
            printf("\n\nPuntaje Jugador 1: %i Pts.          Puntaje Alexa IA 3.0: %i Pts.\n",PuntosJugador1,PuntosAlexa);
            ImprimeGato(p11, p12, p13, p21, p22, p23, p31, p32, p33);
            printf("\n\n");
            printf("Juego N%cmero: %i , Jugada N%cmero: %i\n\n",163,ContadorDeJuegos,163,ContadorDeJugadas);

            //condiciones de juego terminado

             if (p11==p12 && p12==p13 && p11!=' '){
                terminado=2;
                     if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
            }

            if (p21==p22 && p22==p23 && p21!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
            }

            if (p31==p32 && p32==p33 && p31!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
            }

            if (p11==p21 && p21==p31 && p11!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
            }

            if (p12==p22 && p22==p32 && p12!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
            }

            if (p13==p23 && p23==p33 && p13!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
            }

            if (p11==p22 && p22==p33 && p11!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
            }

            if (p13==p22 && p22==p31 && p13!=' '){
                terminado=2;
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
                    if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0){
                        printf("Juego Terminado, Ganador Jugador 1\n\n");
                        system("pause");
                    }
                    if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0){
                        printf("Juego Terminado, Ganador Jugador %s\n\n",nombrecpu);
                        system("pause");
                    }
            }

            if (p11 !=' ' && p12 !=' ' && p13 !=' ' && p21 !=' ' && p22 !=' ' && p23 !=' ' && p31 !=' ' && p32 !=' ' && p33 !=' ' && terminado==1){
                terminado=2;
                printf("Empate\n\n");
                juegoempatado=1;
                PuntosJugador1 += 2;
                PuntosAlexa += 2;
                system("pause");
                JuegosEmpatados++;
            }

        }
         //condiciones de quien gana
            if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2!=0 && juegoempatado==0){
            JuegosGanadosAlexa++;
            PuntosAlexa += 5;
        }

            if (ContadorDeJuegos%2!=0 && ContadorDeJugadas%2==0 && juegoempatado==0){
            JuegosGanados1++;
            PuntosJugador1 += 5;
        }

            if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2!=0 && juegoempatado==0){
            JuegosGanados1++;
            PuntosJugador1 += 5;
        }

            if (ContadorDeJuegos%2==0 && ContadorDeJugadas%2==0 && juegoempatado==0){
            JuegosGanadosAlexa++;
            PuntosAlexa += 5;
        }




    printf("%cQuiere seguir jugando?\n", 168);
    printf("1.- Si.\n");
    printf("2.- No.\n");
    printf("3.- Volver al menu principal\n");
    scanf("%i",&terminado);
    if (terminado==1 || terminado==2 || terminado==3){


    ContadorDeJugadas=1;
    if(terminado==1){
    ContadorDeJuegos++;
    goto marca3cpu;
    }
    if(terminado==2){

        LimpiaPantalla();
        printf("Estad%csticas juego\n\n\n",161);
        printf("Partidas Totales Jugadas: %i\n\n\n",ContadorDeJuegos);
        printf("Jugador 1:\n\n");
        printf("Partidas Ganadas: %i\n",JuegosGanados1);
        printf("Juegos Empatados: %i\n",JuegosEmpatados);
        printf("Puntaje: %i\n\n",PuntosJugador1);
        printf("Jugador %s:\n\n",nombrecpu);
        printf("Partidas Ganadas: %i\n",JuegosGanadosAlexa);
        printf("Juegos Empatados: %i\n",JuegosEmpatados);
        printf("Puntaje: %i\n\n",PuntosAlexa);
            if(PuntosJugador1>PuntosAlexa){
                printf("Ganador Jugador 1\n\n");
            }
            if(PuntosJugador1<PuntosAlexa){
                printf("Ganador Jugador %s\n\n",nombrecpu);
            }
            if(PuntosJugador1==PuntosAlexa){
                printf("Empate\n\n");
            }

        system("pause");

        return 0;
    }
    if(terminado==3){

        goto marca2;
    }
    }
    }
    }
    }

    system("pause");
    return 0;
}



