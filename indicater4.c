#include<stdio.h>
main()
{
	char str[100],*length;
	
	printf("Enter string=");
	gets(str);
	 
	 length=str;
	 int count=0;
	 while(*length!='\0')
	 {
	 	count++;
	 	length++;
	 }
	 printf("Length of string=%d",count);
}
