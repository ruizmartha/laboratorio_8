#include<stdio.h>
void main ()
{
	int i,j,a[4][3]={15,25,26,17,22,20,16,8,9,6,11,12};
    for(i=0;i<4;i++){
    for(j=0;j<3;j++){
    	printf("%d \t",a[i][j]);
	}
    printf("\n");
	}
printf("EL VALOR DE LA POSICION O,2 ES: \t %d \n ",a[0][2]);

printf("EL VALOR DE LA POSICION 2,1 ES: \t %d \n ",a[2][1]);

printf("EL VALOR DE LA POSICION 1,3 ES: \t %d \n ",a[1][3]);
}

