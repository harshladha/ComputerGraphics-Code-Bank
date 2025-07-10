// Aim: To produce a single pixel & prespecified pattern on screen
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm, "C:\\TC\\BGI");
 putpixel(45,45,GREEN);
 putpixel(50,50,RED);
 putpixel(60,60,BLUE);
 putpixel(55,55,WHITE);
 putpixel(65,65,YELLOW);
 setcolor(CYAN);
 line(85,99,145,88);
 setcolor(GREEN);
 outtextxy(93,80,"Sat Sri Akal");
 setcolor(WHITE);
 rectangle(52,45,31,26);
 setcolor(BLUE);
 circle(150,40,30);
 setcolor(YELLOW);
 arc(170,40,15,45,40);
 ellipse(250,200,0,360,80,150);
 getch();
}