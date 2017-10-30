#include<stdio.h>

void main(){
	int c1,i,p, matriz1[10][10], matriz2[10][10],matriz3 [10][10],suma[10][10]; 
	
	printf("introduzca la cantidad de la matriz: ");
	scanf("%d",&c1);
	
	for(i=0;i<c1;i++)
	{	
	for(p=0;p<c1;p++)
		{
		printf("ingrese los valores [%d,%d]:",i,p);		
		 scanf("%d",&matriz1[i][p]);	
}
		printf("\n");
}
for(i=0;i<c1;i++)
{
	for(p=0;p<c1;p++)
	{
		printf("%d\t",matriz1[i][p]);
		}	
		printf("\n");
}
	printf("introduzca la segunda matriz: ");
	scanf("%d",&c1);
	
	for(i=0;i<c1;i++)
	{	
	for(p=0;p<c1;p++)
		{
		printf("ingrese los valores [%d,%d]:",i,p);		
		 scanf("%d",&matriz2[i][p]);	
}
		printf("\n");
}
for(i=0;i<c1;i++)
{
	for(p=0;p<c1;p++)
	{
		printf("%d\t",matriz2[i][p]);
		}	
		printf("\n");
}

printf("la mutiplicacion de matrices \n");
    for(i=0;i<c1;i++)
	{
	for(p=0;p<c1;p++)
		{
				suma[i][p]= matriz1[i][p]+matriz2[i][p];
				
			matriz3[i][p]=suma[i][p]+matriz2[i][p]*matriz1[i][p];
		
			
					printf("%d\t",matriz3[i][p]); 
		}

	printf("\n");
	}
}
