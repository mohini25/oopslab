#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,s,x;
	printf("enter the value of i and j");
	scanf("%d%d",&i,&j);
	x=i*1100+j*11;
	printf("the no. formed is %d",x);
	s=sqrt(x);
	if((s*s)==x)
	printf("the no. is perfect square");
	else
	printf("the no. is not perfect square");
}
