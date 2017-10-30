/*Crear 2 matrices pedir al usuario el tamaño de las matrices, llenar las 2 matrices creadas y finalmente mostrar el resultado de la multiplicación de
 las 2 matrices en una nueva matriz. (Valor 10 pts)*/

#include <stdio.h>
void main(){
int i,l,f,c,mat1[10][10] , mat2[10][10], mat3[10][10],suma[10][10],a;	
	
	printf("ingrese el numero de filas y columnas: ");
	scanf("%d",&f);
	
	printf("\n completar matriz \n");
	printf("\n matriz 1 \n");
	for(i=0;i<f;i++){
	for(l=0;l<f;l++){
				printf("ingrese los numeros [%d,%d]: ",i,l);
				scanf("%d",&mat1[i][l]);
	}
}

printf("\n completar matriz \n");
printf("\n matriz 2 \n");
	for(i=0;i<f;i++){
	for(l=0;l<f;l++){
				printf("ingrese los numeros [%d,%d]: ",i,l);
				scanf("%d",&mat2[i][l]);
	}
}

printf("\n matriz 1 \n ");
    for(i=0;i<f;i++){
	for(l=0;l<f;l++){
			printf("%d \t",mat1[i][l]);
	}
	printf("\n");
}

printf("\n matriz 2 \n");
    for(i=0;i<f;i++){
	for(l=0;l<f;l++){
				printf("%d \t",mat2[i][l]);
	}
printf("\n");
	
}
 for(i=0;i<f;i++){
	for(l=0;l<f;l++){
    suma[i][l]=0;
    
}
}
    for(i=0;i<f;i++){
	for(l=0;l<f;l++){
		for(a=0;a<f;a++){
			
		
    suma[i][l]=suma[i][l]+(mat1[i][a]*mat2[a][l]);
}
}
}
  for(i=0;i<f;i++){
	for(l=0;l<f;l++){
 printf(" %d \t ",suma[i][l]);
}
}
    printf("\n");
}






