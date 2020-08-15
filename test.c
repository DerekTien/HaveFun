#include <stdio.h>
void main()
{
	int a[10],*p1,**p2;

	printf("input integer:\n");
	for(p1=a;p1-a<10;p1++)
	{
		p2=&p1;
		scanf("%d",*p2);
	}
	for(p1=a;p1-a<10;p1++)
	{
		p2=&p1;
		printf("%5d",**p2);
	}
}








