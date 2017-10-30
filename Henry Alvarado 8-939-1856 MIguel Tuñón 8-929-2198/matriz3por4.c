#include<stdio.h>
void main ()
{
	int i,j,k[3][4]={1,2,6,4,6,8,9,3,6,7,12,14};
	
	for(i=0;i<3;i++)
	{
	for(j=0;j<4;j++)
		{
			printf("%d \t",k[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("El valor en la posicion 0,2 es:%d \n",k[0][2]);
	printf("El valor en la posicion 1,3 es:%d \n",k[1][3]);
	printf("El valor en la posicion 2,1 es:%d \n",k[2][1]);

}
