#include<stdio.h>
int main()
{
    float h, w, m, bmi,end;
    printf("Enter your height(cm) : ");
    scanf("%f",&h);
    printf("Enter your weight(kg) : ");
    scanf("%f",&w);
    m=h/100;
    m=m*m;
    bmi=w/m;
    printf("\nYour BMI is : %f \n",bmi);
    
    
		if(bmi<18.5)
		{
			printf("Your Underweight!");
		}
		else if(bmi>18.5&&bmi<24.9)
		{
			printf("Your Healthy!");
		}
		else if(bmi>25&&bmi<29.9)
		{
			printf("Your Overweight!");
		}
		else {
			printf("Your Very Overweight!");
		}
	scanf("%f",&end);	
}