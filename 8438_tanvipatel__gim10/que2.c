// pattern using nested loop.
//45 46 47 48 49
//46 47 48 49
//47 48 49
//48 49
//49

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;	
	
	for(i=45; i<=49; i++)
	{
		for(j=i; j<=49; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}