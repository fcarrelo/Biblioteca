#include <stdio.h>
#define PI 3.14159

/* Cálculo da área de um circulo */

main()
{
	float raio, area;
	float processa(float raio);

	printf("Indique o raio = ? \n ");
	
	scanf("%f", &raio);
	
	if (raio<0)
		area=0;
	else
		area=processa(raio);
	
		printf("Area = %f \n", area);
	}

float processa(float r)
{float a;
a=PI*r*r;
	return (a);
}

