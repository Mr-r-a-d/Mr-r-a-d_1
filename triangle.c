#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a value = ");
	scanf("%d",&a);
	printf("Enter a value = ");
	scanf("%d",&b);
	float area=0.5*b*a;
	printf("Area of a triangle = %f",area);
	return 0;
}
