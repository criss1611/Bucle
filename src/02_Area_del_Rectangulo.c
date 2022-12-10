#include <stdio.h>

/**
* @author: Cris
* @date: 6.dic.2022
* @details: Determinar el area de un rectangulo
*/
int main()
{   //Declarar e inicializar variables
    int longitud=0, ancho=0, areaRect=0;
    printf("Ingrese la Longitud: ");
    scanf("%i", &longitud);

    printf("Ingrese el Ancho: ");
    scanf("%i", &ancho);

    areaRect= longitud * ancho;

    printf("El Area del Rectangulo es: %i \n",areaRect);
    printf("El Area del Rectangulo de Ancho %i y Longitud %i es: %i \n",ancho, longitud, areaRect);

    return 0;
}
holiiiiiiiiiiii guapis :p
