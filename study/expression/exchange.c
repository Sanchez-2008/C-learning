#include<stdio.h>
int main()
{
    int a,b;
    int t;
    printf("Please enter two integers: ");
    scanf("%d %d",&a,&b);
    t=a;
    a=b;    //create the third variable to contain a value to avoid change the original value of a
    b=t;

    printf("The exchanged numbers are %d and%d\n",a,b);
    return 0;
}