#include <stdio.h>
#include <stdlib.h>
float calcular (float descuento)
{
	int u,d=1,tp=0;
	float p,pre,desc,tpre=0;
	

	printf("ingrese las unicades: ");
	scanf("%d", & u);
	
	printf("ingrese el precio: ");
	scanf("%f",& p);
	
	tp=tp+u;
	
	pre=u*p;
	tpre=tpre+pre;
	printf("¿desea ingresar otro producto? (1 para si, 2 para no): ");
	scanf("%d",& d);
	
	while(!(d==1 || d==2))
	{
		printf("ERROR, VALOR NO VALIDO \n¿desea ingresar otro producto? (1 para si, 2 para no): ");
		scanf("%d",& d);
	}
	
	
	while(d==1)
	{
		printf("ingrese las unicades: ");
		scanf("%d",& u);
		
		printf("ingrese el precio: ");
		scanf("%f",& p);
		
		
		tp=tp+u;
		
		pre=u*p;
		tpre=tpre+pre;
		
		printf("¿desea ingresar otro producto? (1 para si, 2 para no):");
		scanf("%d",& d);
		
		while(!(d==1 || d==2))
		{
			printf("ERROR, VALOR NO VALIDO \n¿desea ingresar otro producto? (1 para si, 2 para no): ");
			scanf("%d",& d);
		}
	}
	
	printf("cantidad de unidades: %d\n",tp);
	printf("cantidad de precio: %.2f\n",tpre);
	
	if(tp>6 && tp<=12)
	{
		desc=4*tpre;
		desc=desc/100;
		
		tpre=tpre-desc;
	}
	else
	{
		if(tp>12)
		{
			desc=10*tpre;
			desc=desc/100;
			
			tpre=tpre-desc;
		}
	}
	printf("decuento: %.2f\n",desc);
	
	printf("tu precio final es de: %.2f",tpre);
	return 0;
} 
int main() {
	float descuento;
	calcular (descuento);
	return 0;
}

