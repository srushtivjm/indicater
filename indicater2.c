#include<stdio.h>
main()
{
    int a[]={4,5,23,65,89,34};
    int i;
    int *p;
    p=&a;
    for(i=0;i<=5;i++)
    {
    	
    	printf("%u=%d\n",p+i,*(p+i));
	}
}
