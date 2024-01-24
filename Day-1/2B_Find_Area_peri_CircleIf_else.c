#include<stdio.h>
int main()
{
	int r;
	float peri;
	float area;
	int num;
	
	printf("\nEnter number(1/2)");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("Enter the Radius:");
		scanf("%d",&r);
		
		area=3.14*r*r;
		printf("\nArea of Circle is%f",area);
	}
	else
	{
		printf("Enter the Radius:");
		scanf("%d",&r);
		
		peri=2*3.14*r;
		printf("\nPerimeter of Circle is%f",peri);
	}
}
