#include<stdio.h>
#include<stdlib.h>
struct std
{
	int id;
	char name [20];
	char address[20];
		
};
int main()
{

	struct std muskan[3];
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("\n enter your id :");
		scanf("%d",muskan[i].id);
		fflush(stdin);
		printf("\n enter your name :");
		gets(muskan[i].name);
		printf("\n enter your address :");
		gets(muskan[i].address);
		
	}
	for(i=0;i<3;i++)
	{
		printf("\n id: %d \n name: %d \n address:%d: ",muskan[i].id,muskan[i].name,muskan[i].address);
	}
	return 0;
	
	
}
