#include <stdio.h>

/* C�lculo da �rea de um circulo */

main()
{
	float raio, area;

	printf("Indique o raio = ? \n ");
	
	scanf("%f", &raio);
	
	area=3.14159*raio*raio;
	
	printf("Area = %f \n", area);
	
	return 0;

}
