#include <stdio.h>
int main()
{
const int AMOUNT = 100;      //define a constant
int price = 0;          //defien a variable
printf("Please enter the price: ");
scanf("%d",&price);

int change =100 -price;     //give a to b
printf("Return you for %d yuan\n",change);
return 0;
}