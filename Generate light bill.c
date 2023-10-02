#include <stdio.h>
int main()
{
int cr,pr,uc;
float r;
printf("Current reading of meter = ");
scanf("%d",&cr);
printf("Previous reading of meter = ");
scanf("%d",&pr);
printf("Rate per unit = ");
scanf("%2f",&r);
uc = cr-pr;
float pa;
pa = uc*r;
printf("The unit consumed by the consumer = %d\n",uc);
printf("The electricity bill of the customer is = %5.2f",pa);
return 0;
}
