#include <stdio.h>
void main ()
{
	int i,j, a[3][4]={0,1,2,3,4,5,6,7,8,9,8,6,5};
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");	
	}
	printf("El valor en la posicion [0,2]es: %d\n", a[0][2]);
		
	printf("El valor en la posicion [2,1]es: %d\n", a[2][1]);
	
	printf("El valor en la posicion [1,3]es: %d\n", a[1][3]);
}
