#include <stdio.h>
int main()
{
	int p,n;
	float r,SI;
	printf("Principle amount = ");
	scanf("%d",&p);
	printf("No. of years = ");
	scanf("%d",&n);
	printf("Rate of interest = ");
	scanf("%f",&r);
	SI = (p*n*r)/100;
	printf("The simple interest on the amount = %5.2f",SI);
	return 0;
}
