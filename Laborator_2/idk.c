#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// el global
int i, j, n, m;

//imputs
void input_nm()
{
	printf("Enter: \nn-->"); fflush(stdout); scanf("%d", &n);
	printf("m-->"); fflush(stdout); scanf("%d", &m);
}
void input_n()
{
	printf("Enter: \nn-->"); fflush(stdout); scanf("%d", &n);
}

//////////////////////////////////////////////////////////////////////

int main()
{
	int select;
	menu:
	system("clear");
	printf("Select the problem:"); fflush(stdout);
	
	for(i=1;i<=10; i++)
		printf("\n> %d", i); 
	
	printf("\n-->"); fflush(stdout);
	scanf("%d", &select);
	
	switch(select)
	{
		case 1:
			system("clear");
			input_nm();
			int max = m;
			if(n>m) 
				max = n;
			printf("\n> The biggest of %d and %d is %d\n", n, m, max);
		break;
		
		case 2:
			system("clear");
			input_nm();
			int min = m;
			if(n<m) 
				min = n;
			printf("\n> The smallest of %d and %d is %d\n", n, m, min);
		break;
		
		case 3:
			system("clear");
			input_n();
			if(n==0)
				printf("\n> n is 0.");
			else if(n<0)
				printf("\n> n is negative.");
			else 
				printf("\n> n is positive.");
		break;
		
		case 4:
			system("clear");
			input_n();
			if(n%5==0)
				printf("\n> n is divisible by 5.");
			else if(n%11==0)
				printf("\n>  n is divisible by 11.");
			else 
				printf("\n> n is not divisible by 5, 11.");
		break;
		
		case 5:
			system("clear");
			input_n();
			if(n%2==0)
				printf("\n> n is even.");
			else 
				printf("\n> n is uneven.");
		break;
		
		default: 
		printf("Invlaid input/problem missing");
		goto menu;
	}
	
	return 0;
}