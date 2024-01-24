#include<stdio.h>
int main()
{
    int female_age,male_age,age,choice;
	
	printf("Enter Age:");
	
	scanf("%d",&age);
	printf("choice is \n 1Male \n 2Female");
	printf("Enter choice:(1/2)");
	
	scanf("%d",&choice);

	if(choice==1){
	
	if(male_age>=21)
		{
		
		printf("Male is eligible for marry");
		}	
	    
	else	    
	    {
		printf("Male is not eligible for marry");
	    }
     }
	
	else
	{
	
	if(female_age>=18)
	    {
		
		printf("Female is eligible for marry");
		}	
	    
	else
	   {
		printf("Female is not eligible for marry");
		}
}
}
