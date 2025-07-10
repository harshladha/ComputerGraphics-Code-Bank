//Smiley Face
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 setfillstyle(SOLID_FILL,RED);
 circle(300,200,180);
 floodfill(320,220,15);
 circle(225,132,30);
 circle(375,132,30);
 line(300,150,300,250);
 arc(300,200,225,315,150);
 getch();
}