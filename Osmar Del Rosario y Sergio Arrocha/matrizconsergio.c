#include<stdio.h>
void main(){

int i, j, m[4][3]={17,25,18,3,13,27,5,3,1,5,2,10};
for(i=0; i<4; i++){
for(j=0; j<3; j++){
printf("%d \t", m[i][j]);
}
printf("\n");
}
printf("\n");
printf("El numero en la posicion (1,3): *%d* \t",m[0][2]);
printf("El numero en la posicion (3,2): *%d* \t",m[2][1]);
printf("El numero en la posicion (2,4): *%d* \t",m[1][3]);
}
