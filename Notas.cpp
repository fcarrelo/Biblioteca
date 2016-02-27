#include <stdio.h>

main()
{
	float numero;
	
	printf("Introduza a classificacao: ");
	scanf("%f",&numero);
	if(numero>=150)
		printf("%.0f pontos. A classificacao e Bom",numero);
	else
			if(numero>=100)
				printf("%.0f pontos. A classificacao é suficiente",numero);
			else
				printf("%.0f pontos. A classificacao e insuficiente",numero);
	
	
	return 0;
}
