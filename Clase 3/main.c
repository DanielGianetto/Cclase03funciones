#include <stdio.h>
#include <stdlib.h>
/*
//declaracion o prototipo
void Saludar();

int main()
{
    //llamada o invocacion
    Saludar();

    return 0;
}

//implementacion o desarrollo
void Saludar()
{
    printf("Hello Funciones");
}*/

/*
int getInt(char mensaje[],char mensajeError[],int min,int max);

int main()
{
    int numero;
    int edad;
    int legajo;

    edad = getInt("Ingrese edad: ", "Error, reingrese edad: ", 1, 18);

    legajo = getInt("Ingrese legajo: ","Error, reingrese legajo", 1000, 5000);

    printf("La edad es: %d\n", edad);
    printf("El legajo es: %d", legajo);

    return 0;
}

int getInt(char mensaje[],char mensajeError[],int min,int max)
{
    int valorEntero;

    printf("%s",&mensaje);
    scanf("%d",&valorEntero);
    while(valorEntero <  min|| valorEntero > max)
    {
        printf("%s", mensajeError);
        scanf("%d", &valorEntero);
    }

    return valorEntero;
}*/

float getFloat(char mensaje[],char mensajeError[],float min, float max);
int getInt(char mensaje[],char mensajeError[],int min, int max);
char getChar();

int main()
{
    float altura;
    //int edad;
    //char sexo;

    altura = getFloat("Ingrese altura: ", "Error, reingrese la altura", 1.50, 2.00);
   // edad = getInt("Ingrese la edad: ","Error, reingrese la edad",1,65);

    printf("La altura es: %.2f metros.",altura);
  //  printf("La edad es: %d.",edad);


    return 0;

}

float getFloat(char mensaje[],char mensajeError[],float min, float max)
{
    float valorFlotante;

    printf("%s",&mensaje);
    scanf("%f",&valorFlotante);

    while(valorFlotante <  min|| valorFlotante > max)
    {
        printf("%s",&mensajeError);
        scanf("%f", &valorFlotante);
    }

    return valorFlotante;
}

int getInt(char mensaje[],char mensajeError[],int min,int max)
{
    int valorEntero;

    printf("%s",&mensaje);
    scanf("%d",&valorEntero);
    while(valorEntero <  min|| valorEntero > max)
    {
        printf("%s", mensajeError);
        scanf("%d", &valorEntero);
    }

    return valorEntero;
}
