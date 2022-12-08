#include <stdio.h>

int main(void)
{
	int e;
	printf("Cuantos escalones va a tener? ");
	scanf("%i", &e);
	printf("\n");
		for (int i = 0; i <e; i++)
		{
			if (i%2==0)
				printf("|_+_\n");
			else
				printf("    |_-_\n");
				
			for (int j = 0; j < e; j++)
			{
				if (i==0||j==0||i==e-1||j==e-1);
			}
			
			
		}
		printf("\n");
		
	return (0);
}