#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a value = ");
	scanf("%d",&a);
	printf("Enter a value = ");
	scanf("%d",&b);
	printf("Enter a value = ");
	scanf("%d",&c);
	float area=0.5*a*b*c;
	printf("Area of a trapazium = %f",area);
	return 0;
}
