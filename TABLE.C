#include<stdio.h>
#include<conio.h>
int main()
{
 int a,i,p;
 
 printf("_____________Welcome to program of Table_______________\n");
 printf("Type a number and press ENTER button:\n\n");
 scanf("%d",&a);
 printf("\n_______________________________________________________\n");
 printf("Table of : %d\n",a);
 printf("_______________________________________________________\n\n");
 for(i=1;i<11;i++)
 {
  p=a*i;
  printf("%d\n",p);
 }
 printf("_____________________Thank_You__________________________");
scanf("%d",&a);

}