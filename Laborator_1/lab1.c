#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i,j;
int Discriminant(int x, int y, int z)
{
	int D;
	D = pow(y, 2)-(4*x*z); 
	return D;
}

int main()
{
	int selection;
	return_to_menu:
	system("clear");
	printf("\n	MAIN MENU:	\n	---------\n");
	printf("\n> 1 for asterisk staircase\n> 2 for Pascal's triangle\n> 3 for a quadratic equation\n> 4 for sum of a number's digits\n> 5 log(n)\n> 6 to quit.\n---->"); fflush(stdout);
	scanf("%d", &selection);
	
	switch(selection)
	{
		case 1:
			// asterisk staircase
			system("clear");
			int align, rows;
			printf("Regular(1) sau reversed(2)?\n----->"); fflush(stdout);
			scanf("%d", &align);
			printf("How many rows??\n---->"); fflush(stdout);
			scanf("%d", &rows);
			if(align==1)
			{
				printf("\n");
				for(i=0; i<=rows; i++)
				{
					for(j=0; j<i; j++)
					{
						printf(" * ");
					}
				printf("\n");
				}
			}else{
				printf("\n");
				for(int i=rows; i>=1; --i)
				{
					for(int j=0; j<i; ++j)
					{
						printf(" * ");
					}
					printf("\n");
				}				
			}
			printf("\n\n");
			goto return_to_menu;
		break;
		
		case 2:
			// Pascal's triangle
			system("clear");
			int space, num;
			printf("How many rows??\n---->"); fflush(stdout);
			scanf("%d", &rows);
			for(i = 0; i<rows; i++)
			{
				for(space = 1; space<=rows-i; space++) printf("  ");     
				for(j=0; j<=i; j++)
				{
					if( (j==0)||(i==0) ) num=1;
					else{
						num=num*(i-j+1)/j;
					}
					printf(" %d ", num);
				}    
				printf("\n\n");
			}
		break;
		
		case 3:
			// quadratic equation
			system("clear");
			char chr;
			int cef[3]={};
			chr='a';
			printf("Introduceti coeficientii: \n"); fflush(stdout);
			for(int i=0; i<3; i++)
			{
				printf("%c = ", chr); fflush(stdout);
				scanf("%d", &cef[i]);
				chr++;
			}
			system("clear");
			// a = cef[0]     b = cef[1]    c = cef[2]   
			float x1, x2;
			printf("\n%dx^2 + (%d)x + (%d) = 0\n", cef[0], cef[1], cef[2]);
    
			x1=( (-cef[1])-sqrt(Discriminant(cef[0], cef[1], cef[2])) )/ 2*cef[0];
			x2=( (-cef[1])+sqrt(Discriminant(cef[0], cef[1], cef[2])) )/ 2*cef[0];
			
			printf("\nx1 = %.f", x1);
			printf("\nx2 = %.f\n\n", x2);
			goto return_to_menu;
		break;
		
		case 4:
			// sum of a number's digits
			system("clear");			
			int nr;
			printf("\nEnter the number:\n--->"); fflush(stdout);
			scanf("%d", &nr);
			int nrm = nr;
			int rest;
			int sum = 0;
			while(nrm > 0)
			{
				rest = nrm % 10;
				sum = sum + rest;
				nrm = nrm/10;
			}
			printf("\nThe sum of  the digits of %d --> %d\n\n", nr, sum);
			goto return_to_menu;
		break;
		
		case 5:
			system("clear");
			int n;
			printf("Enter:\n-->"); fflush(stdout);
			scanf("%d", &n);
			printf("Log(%d) = %.2f", n, log(n));
			goto return_to_menu;
		break;		
		
		case 6:
			return 0;
		break;
		
		default: 
		printf("\n--> %d in not a valid option.\n", selection);
		goto return_to_menu;
	}
	goto return_to_menu;
	return 0;
	
	
	/*
    if - functie ciclica
	why switch cant work with variables?
	+ lab nr2

	
	*/
}