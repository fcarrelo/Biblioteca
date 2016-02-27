#include <stdio.h>

main()
{
	int a, b, c;
	
	printf("Introduza o valor de a: ");
	scanf("%d",&a);
	printf("Introduza o valor de b: ");
	scanf("%d",&b);
	c=a+b;
	printf(" %d + %d = %d\n",a,b,c);
	c=a*b;	
	printf("e tambem\n %d * %d = %d",a,b,c);
	return 0;
}
