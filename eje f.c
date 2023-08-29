#include <stdio.h>
#include <stdlib.h>

void mostrar (int num)
{
	switch(num)
	{
	case 1: 
	case 3:
	case 5:
	case 8:
	case 10:
	case 12: printf("tu mes tiene 31 dias");
	break;
	case 2: printf("tu mes tiene 28 dias, y en un año biciesto tiene 29");
	break;
	default:  printf("tu mes tiene 30 dias");
	}
}

int main() {
	int num;
	printf("ingrese un numero correspondiente a un mes del año: ");
	
	scanf("%d",&num);
	
	while ((num>12||num<0))
	{
		system("cls");
		printf("ERROR, INGRESE UN VALOR VALIDO: ");
		scanf("%d",&num);
		
	}
	
	mostrar ( num);
	
	return 0;
}

