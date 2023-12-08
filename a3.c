#include<stdio.h>
int main()
{
    float a,b,c;
    // Let pencil cost is a ,pen cost is b and eraser cost is c
    printf("Enter the cost of pencil:");
    scanf("%f",&a);
    printf("Enter the cost of pen:");
    scanf("%f",&b);
    printf("Enter the cost of eraser:");
    scanf("%f",&c);
     float total_cost=a+b+c;      //sum of all thing
     printf("The total cost are:%f\n",total_cost);
     // Add 18% gst on bill.
     float d=total_cost*0.18;
     printf("The gst on bill is:%f\n",d);
     float final_bill=total_cost+d;
     printf("The final bill is %f\n",final_bill);
return 0;
}