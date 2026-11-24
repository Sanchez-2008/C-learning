#include <stdio.h>
int main()
{
    printf("Please enter your height in foot and inch: ");
    int foot;
    int inch;
    scanf("%d %d",&foot,&inch);
    float height = (foot+inch/12.0)*0.3048;
    printf("Your height is %f meters\n",height);
}