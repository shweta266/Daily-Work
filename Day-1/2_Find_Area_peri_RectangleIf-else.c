#include<stdio.h>
int main()
{
	int length;
	int breadth;
	int peri;
	int area;
	int num;
	
	printf("\nEnter number(1/2)");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("Enter the Length:");
		scanf("%d",&length);
		printf("\nEnter the Breadth:");
		scanf("%d",&breadth);
		area=length*breadth;
		printf("\nArea of Rectangle is%d",area);
	}
	else
	{
		printf("Enter the Length:");
		scanf("%d",&length);
		printf("\nEnter the Breadth:");
		scanf("%d",&breadth);
		
		peri=2*(length+breadth);
		printf("\nPerimeter of Recatngle is%d",peri);
	}
}
