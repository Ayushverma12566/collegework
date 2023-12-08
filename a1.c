#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    printf("Enter the three number you wnt to find average:-");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
     int avg=sum/3;
     printf("The avg of %d,%d,%d is %d",a,b,c,avg);
return 0;
}