#include<stdio.h>
int main()
{
	int i,c=0;
	printf("enter a no.");
	scanf("%d",&i);
	while(i>0)
	{
		i=i/10;
		c++;
	}
	printf("%d",c);
}
