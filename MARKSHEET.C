#include<stdio.h>
#include<conio.h>
int main()
{
 int e, m, h, m1, s, ss;
 float per;
 printf("------------------------------------------------\n");
 printf("  This is calculator of SSC and HSC Percentage");
 printf("\n------------------------------------------------");
 printf("\nEnter mark of English : ");
 scanf("%d",&e);
 printf("Enter mark of Marathi : ");
 scanf("%d",&m);
 printf("Enter mark of Hindi : ");
 scanf("%d",&h);
 printf("Enter mark of Mathematics : ");
 scanf("%d",&m1);
 printf("Enter mark of Science : ");
 scanf("%d",&s);
 printf("Enter mark of Social Science: ");
 scanf("%d",&ss);
 per=(e+m+h+m1+s+ss)/6;
 printf("------------------------------------------------");
 printf("\n          PERCENTAGE : %f%",per);
 printf("\n------------------------------------------------");
 scanf("%d",&ss);
 return 0;
}