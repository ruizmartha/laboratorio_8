#include <stdio.h>
void main () {
	int a[100][100], b[100][100], c[100][100], dim=0, i, j, mult=0, m;
	printf("Ingrese la dimension de las matrices:\t");
	scanf("%d", &dim);
	printf("\nIntroduzca los valores de la primera matriz\n");
	for(i=0; i<dim; i++)
	{
		for(j=0; j<dim; j++)
		{
			printf("Posicion: [%d,%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n\nIntroduzca los valores de la segunda matriz\n");
	for(i=0; i<dim; i++)
	{
		for(j=0; j<dim; j++)
		{
			
			printf("Posicion: [%d,%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<dim; i++)
	{
		for(j=0; j<dim; j++)
		{
			c[i][j]=0;
	    }
	}
	for(i=0; i<dim; i++)
	{
		for(j=0; j<dim; j++)
		{
			for(m=0; m<dim; m++)
		{	
			mult=(a[i][m]*b[m][j]);
			c[i][j]=c[i][j]+mult;
        }
        }
    }
    for(i=0; i<dim; i++)
	{
		for(j=0; j<dim; j++)
		{
			printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

