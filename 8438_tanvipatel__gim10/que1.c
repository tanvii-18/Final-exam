// Write a program in c to check whether a number is even or odd using a user defined function.
#include<stdio.h>
#include<conio.h>

void num(int num)
{	
	if(num%2==0)
	{
		printf("Number is even.");
	}
	else
	{
		printf("Number is odd.");
	}
}
int main()
{
	int num;

	printf("Enter any Number :");
	scanf("%d", &num);
	
	return 0;
}
