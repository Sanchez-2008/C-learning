#include <stdio.h>
int main()
{
    printf("Please enter your height in foot and inch: ");
    double foot;
    double inch;
    scanf("%lf %lf",&foot,&inch);
    printf("Your height is %f meters\n",(foot+inch/12.0)*0.3048);
    return 0;
}