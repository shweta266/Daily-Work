#include<stdio.h>
int main()
{
	int rem,choice,sum,rev;
	
	int num=234;
	printf("Enter Choice(1/2):");
	scanf("%d",&choice);
	if(choice==1)
	{
	rem=num%10;
	num=num/10;
	scanf("%d",&num);
	printf("The Number is%d:",num);
    
	}
	else if(choice==2)
	{
		
	sum=sum+rem;
	scanf("%d",&sum);
	
		printf("The sum is%d",&sum);
	}
	else
	{
		rev=rev*10+rem;
	    scanf("%d",&rev);
		printf("The reverce is%d",rev);
	}
	
}
