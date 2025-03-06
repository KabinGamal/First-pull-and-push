#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1,n2,i,j,temp;
	int *p;
	printf("enter how many number you want: ");
	scanf("%d",&n1);
	p=(int*)calloc(n1,4);
	if(p==NULL)
	{
		printf("\nmemory not allocated:");
		exist(0);
	}
	printf("\nthe allocated memory is:%p",p);
	
		for(i=0;i<n1;i++)
	{
		printf("\nenter the number:");
		scanf("%d",*(p+i));
	}
		
	for(i=0;i<n1;i++)
	{
		printf("\t%d",p+i);
		
	}
	
	printf("\nenter more: ");
	scanf("%d",&n2);
	
	p=(int*)realloc(p(n1+n2),4);
	{
	
	for(i=n1;i<n1+n2;i++)
	{
		printf("\nenter the number:");
		scanf("%d",(p+i));
	}
		
	for(i=0;i<n1+n2;i++)
	{
		printf("\t%d",*p+i);
		
	}
}
	

return 0;
}

