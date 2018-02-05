#include <stdio.h>
void main()
{
	long int s,b,i;
	printf("\nEnter  intial number to find odd num :");
	scanf("%ld",&s);
	printf("\nEnter final number to find odd num :");
	scanf("%ld",&b);
	for(i=s;i<=b;i++)
	{
		if(i%2==1)
		printf("%d",i);
	}
	return 0;
  }
