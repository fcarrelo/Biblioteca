#include <stdio.h>

main()
{
	float numero;
	
	printf("Introduza um valor: ");
	scanf("%f",&numero);
	if(numero>0)
		printf("O valor e positivo");
	else
			if(numero==0)
				printf("O valor e nulo");
			else
				printf("O valor e negativo");
	
	
	return 0;
}
