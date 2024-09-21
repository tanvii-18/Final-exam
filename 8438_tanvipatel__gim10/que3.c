// WAP to find profit or loss in transaction.
#include<stdio.h>
#include<conio.h>

void main()
{
	int transaction,purchase,sale;
	
	printf("Enter Total of tarnsactions :");
	scanf("%d", &transaction);
	
	printf("Enter Total of Purchase :");
	scanf("%d", &purchase);
	
	printf("Enter Total of Sale :");
	scanf("%d", &sale);
	
	if(purchase<sale)
	{
		printf("You got profit !");
	}
	else
	{
		printf("You got loss !");
	}
}