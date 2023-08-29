#include <stdio.h>
#include <stdlib.h>
int suma (int num1,int num2)
{
	int result;
	result=num1+num2;
	return result;
}
void resta (int num1,int num2)
{
	int result;
	result=num1-num2;
	printf("la resta de tus numeros es: %d",result);
}
float divi (int num1,int num2)
{
	
	float num11=(float)num1;
	float num22=(float)num2;
	float result=0;
	result=num11/num22;
	return result;
}

int main() {
	int num1,num2,op,resul,i=0;
	printf ("ingrese el primer numero: ");
	scanf("%d",&num1);
	
	printf ("ingrese el segundo numero: ");
	scanf("%d",&num2);
	
	for(i=0;i<4;i++)
	{
	
	printf("\n1. SUMAR\n2. RESTAR\n3. MULTIPLICAR\n4. DIVIDIR\nSELECCIONE UNA OPCION (1, 2, 3 o 4): ");
	
	scanf("%d",&op);
	
	while ((op>4||op<0))
	{
		system("cls");
		printf("ERROR, INGRESE UN VALOR VALIDO\n1. SUMAR\n2. RESTAR\n3. MULTIPLICAR\n4. DIVIDIR\nSELECCIONE UNA OPCION (1, 2, 3 o 4): ");
		scanf("%d",&op);
		
	}
	if (op==1)
	{
		printf("la suma de tus numeros es: %d",suma(num1,num2));
	}
	else
	{
		if(op==2)
		{
			resta(num1,num2);
		}
		else
		{
			if(op==3)
			{
				resul=num1*num2;
				printf("la multiplicacion de tus numeros es: %d",resul);
			}
			else
			{
				printf("la divicion de tus numeros es: %.2f",divi(num1,num2));
			}
		}
	}
		
	}
	
	return 0;
}

