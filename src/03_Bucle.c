#include <stdio.h>

int main()
    
{
    int tamanoCuadrado;

    printf("Escriba el tamaño del cuadrado: ");
    scanf("%i", &tamanoCuadrado);
    printf("\n");

        for (int i = 0; i < tamanoCuadrado; i++)
        {
            for (int j = 0; j < tamanoCuadrado; j++)
            {
                if (i==0||j==0||i==tamanoCuadrado-1||j==tamanoCuadrado-1)
                {
                    printf(" + ");
                }
                else{
                    printf("   ");
                }
                
                
            }
            printf("\n");
        }
    
    return 0;
}
