#include<stdio.h>
int main()
{
	int n,bit;
	printf("enter a number,bit");
        scanf("%d %d",&n,&bit);
	int result=(n>>bit&1);
	printf(" bit position value %d\n",result);
	if(n>>bit&1==1)
	{
	printf("that bit is set");
	}
	else
	{
		printf("that bit is clear bit");
	}

}
	

