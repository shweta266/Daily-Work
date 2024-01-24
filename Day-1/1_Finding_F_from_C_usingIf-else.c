#include<stdio.h>
int main()
{
	float f,c;
	int num;
	printf("Find temp in celsius");
	printf("\nEnter number(1,2):");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("\nEnter temp in Celsius:");
		scanf("%f",&c);
		f=(c*1.8)+32;
		printf("\nTemp in Fahrenheit:%.2f",f);  //%.2f-In this %-indicate formate specifier
		                                        //.2 indicate number of decimal places you want to display(exactly two decimal places)
		                                        //f is the conversion character for floating-point numbers.
	}
	else
	{
		printf("Not given Proper Number");
	}

}
