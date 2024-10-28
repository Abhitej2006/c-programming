#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the values of a,b :");
    scanf("%d %d",&a,&b);
    if (b==0)
    {
        printf("enter again\n");
        scanf("%d %d",&a,&b);
        printf("%d",a/b);
    }    
    else
    printf("%d",a/b);
}