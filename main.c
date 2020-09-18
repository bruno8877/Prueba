#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5
#define COLUMNAS 20
void MostrarAlumnos(int legajos[], char nombres[][20], char apellidos[][20],char sexos[],int notas1[], int notas2[],float promedios[],int tam);
void MostrarAlumno(int legajo[], char nombre[], char apellido[], char sexo, int nota1, int nota2, float promedio);


int main()
{
    int legajos[TAM] = {1234,2121,3245,1822,9213};
    int notaP1[TAM] = {7,2,2,10,6};
    int notaP2[TAM] = {8,2,7,9,5};
    char sexos[TAM] = {'f','m','f','m','f'};
    float promedio[TAM] = {7.5,2,4.5,9.5,5.5};
    char Nombres[TAM][COLUMNAS]={"Ana", "Miguel", "Lucia","Gaston", "Valentina"};
    char apellidos[TAM][COLUMNAS]={"Perez", "Garcia", "Gonzales","Suarez", "Morales"};
    float auxFloat;
    int auxInt;
    char auxChar;
    char auxCad[50];

    for(int i =0; i<TAM - 1;i++)
    {
        for(int j = i+1; j< TAM ;j++)
        {
            if(sexos[i]< sexos[j])
            {
                auxFloat = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = auxFloat;

                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                auxInt = notaP1[i];
                notaP1[i] = notaP1[j];
                notaP1[j] = auxInt;

                auxInt = notaP2[i];
                notaP2[i] = notaP2[j];
                notaP2[j] = auxInt;

                auxChar = sexos[i];
                sexos[i] = sexos[j];
                sexos[j] = auxChar;

                strcpy(auxCad, Nombres[i]);
                strcpy(Nombres[i], Nombres[j]);
                strcpy(Nombres[j], auxCad);

                 strcpy(auxCad, apellidos[i]);
                strcpy(apellidos[i], apellidos[j]);
                strcpy(apellidos[j], auxCad);
            }
            else if(sexos[i] == sexos[j] && promedio[i] < promedio[j])
            {
                auxFloat = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = auxFloat;

                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                auxInt = notaP1[i];
                notaP1[i] = notaP1[j];
                notaP1[j] = auxInt;

                auxInt = notaP2[i];
                notaP2[i] = notaP2[j];
                notaP2[j] = auxInt;

                auxChar = sexos[i];
                sexos[i] = sexos[j];
                sexos[j] = auxChar;

                strcpy(auxCad, Nombres[i]);
                strcpy(Nombres[i], Nombres[j]);
                strcpy(Nombres[j], auxCad);

                 strcpy(auxCad, apellidos[i]);
                strcpy(apellidos[i], apellidos[j]);
                strcpy(apellidos[j], auxCad);
            }
        }
    }

    MostrarAlumnos(legajos, Nombres, apellidos, sexos, notaP1, notaP2, promedio, TAM);


    return 0;
}
void MostrarAlumnos(int legajos[], char nombres[][20], char apellidos[][20],char sexos[],int notas1[], int notas2[],float promedios[], int tam)
{
     printf("***** Listado de Notas *****\n");
    printf("  Legajos    Nombre    Apellidos    Sexos    Nota p1     Nota p2    Promedio\n\n");

    for(int i = 0; i< tam; i++)
    {
        //printf("   %4d  %10s  %10s       %c         %2d         %2d        %5.2f\n", legajos[i],nombres[i],apellidos[i],sexos[i],nota1[i],nota2[i],promedio[i]);
        MostrarAlumno(legajos[i], nombres[i], apellidos[i], sexos[i], notas1[i], notas2[i], promedios[i]);
    }
}
void MostrarAlumno(int legajo[], char nombre[], char apellido[], char sexo, int nota1, int nota2, float promedio)
{
    printf("   %4d  %10s  %10s       %c         %2d         %2d        %5.2f\n", legajo,nombre,apellido,sexo,nota1,nota2,promedio);
}
