#include <stdio.h>
#include <stdlib.h>

int main() {
	int num,i,k;
	printf("ingrese la cantidad de filas de su figura: ");
	scanf("%d",&num);
	
	for (i=0;i<num;i++)
	{
		
		
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}

