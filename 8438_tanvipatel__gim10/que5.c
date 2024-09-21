// WAP to find sum of array.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,sum=0;
	
	printf("Enter the size of Array :");
	scanf("%d", &n);
	
	int a[n],b[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] :", i);
		scanf("%d", &a[n]);
	}
		printf("\n");
	
	for(j=0; j<n; j++)
	{
		printf("b[%d] : ", j);
		scanf("%d", &b[n]);
	}
		printf("\n");
	
	sum = a[i] + b[j];
	
	printf("Sum of array is %d");
	scanf("%d",&sum);
}