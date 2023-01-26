#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i, n, age;
    char gender[10];
    char name[30];
    char sname[30];
    char adr[30];
    printf("Enter your Name : \n");
    scanf("%s",name);
    printf("Enter your Surname : \n");
    scanf("%s",sname);
    printf("Enter your Address : \n");
    scanf("%s",adr);
    printf("Enter you Gender :\n");
    scanf("%s",&gender);
    printf("Enter your age :\n");
    scanf("%d",&age);

    printf("______________________________________________");
    printf("\n\nName of Applicant    : %s %s",name, sname);
    printf("\nAddress of Applicant : %s",adr);
    printf("\nAge of applicant     : %d",age);

    if(strcmp(gender,"Male")==0)
    {
    	if (age>17 && age<150)
    	{
	      printf("\n\nMr. %s %s,Your Applicable for Vote",name, sname);
    	}
	    else
	    {
    	printf("\n\nMr. %s %s,Your Not Applicable for Vote",name, sname);
    	}
    }
    else if((strcmp(gender,"Female")==0))
    {
	    if (age>17 && age<150)
    	{
	      printf("\n\nMrs. %s %s,Your Applicable for Vote",name, sname);
    	}
    	else
	    {
    	printf("\n\nMrs. %s %s,Your Not Applicable for Vote",name, sname);
    	}

    }
     printf("\n______________________________________________");
     scanf("%d");
    return 0;
}