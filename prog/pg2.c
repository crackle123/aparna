#include<stdio.h>
int main()
{
	int temp,a,b;
        printf("enter a and b\n");
        scanf("%d%d",&a,&b);
        temp=a;
        a=b;
        b=temp;
        printf("%d",temp);
        return 0;
}

