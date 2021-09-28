#include<stdio.h>
int f;
int fact(int n)
{	if (n==1)
		f=1;
	else
		f=n*fact(n-1);}
main()
{	int p;
	printf("Enter a integer number: ");
	scanf("%d",&p);
	fact(p);
	printf("Factorial of the number is %d",f);}
