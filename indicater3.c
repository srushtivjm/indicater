#include<stdio.h>
main()
{
	int a[100],n,i;
	int *p;
	p=&a;
	printf("Enter value of N=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("revers array\n=");
	
	int *rever;
	rever=&a[n-1];
	for(i=0;i<n;i++)
	{
		printf("%d\n",*rever--);
	}
}
