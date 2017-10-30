#include<stdio.h>

void main(){
	int a[50][50],b[50][50],x,y,w,g,mult[50][50];
	
	printf("Introduzca el tamano de la matriz: ");
	scanf("%d",&w);
	
	for(x=0;x<w;x++){
		for(y=0;y<w;y++){
			printf("Introduzca el valor de la primera matriz [%d,%d]: ",x,y);
			scanf("%d",&a[x][y]);
		}
	}
	printf("\n");
	for(x=0;x<w;x++){
		for(y=0;y<w;y++){
			printf("Intrduzca el valor de la segunda matriz [%d,%d]: ",x,y);
			scanf("%d",&b[x][y]);
		}
	}
	for(x=0;x<w;x++){
		for(y=0;y<w;y++){
			mult[x][y]=0;
		}
	}
	printf("\n");
	for(x=0;x<w;x++){
		for(y=0;y<w;y++){
			for(g=0;g<w;g++){
			mult[x][y]+=a[x][g]*b[g][y];}
		}
	}
	for(x=0;x<w;x++){
		for(y=0;y<w;y++){
			printf("%d\t",mult[x][y]);
		}
		printf("\n");
	}
}
