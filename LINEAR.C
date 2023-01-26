#include<stdio.h>
#include<conio.h>
void main()
{
 int i, n, s, flag=0;
 int arr[10];
 clrscr();
 printf("Enter number of elements :\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
/* for(i=0;i<n;i++)
 {  printf("%d\n",arr[i]);
}*/
 printf("Enter a Number to search :\n");
 scanf("%d",&s);
 for(i=0;i<n;i++)
 {
 if(arr[i]==s)
 {
  flag=1;
  break;
 }
 }

 if(flag==1)
 {
  printf("Number Found");
 }
 else
 {
 printf("Number not Found");
 }


 getch();
}