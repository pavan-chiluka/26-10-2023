#include<stdio.h>
int main()
{
        int bit,num;
        printf("enter a bit and value");
        scanf("%d %d",&bit,&num);
        num=num^(1<<bit);
        printf(" after the set %d",num);
}

