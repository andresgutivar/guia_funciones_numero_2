#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,k,num=5;

	
	
	for(i=1;i<=num;i++)
	{
		for (k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
		
	}

	return 0;
}

