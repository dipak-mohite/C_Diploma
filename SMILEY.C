#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(200,160,BLACK);
    circle(200,160,20);   //eye1
    floodfill(300,160,BLACK);
    circle(300,160,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(250,220,YELLOW);
    circle(250,220,150);
    getch();
}