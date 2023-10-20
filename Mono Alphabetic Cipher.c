#include<stdio.h>
#include<string.h>
int main()
{
	char a,i;
	printf("enter a text:");
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]+1);
	}
}
