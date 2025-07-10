#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
 int gd=DETECT, gm;
 int x, y, r, d;
 initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
 printf("Enter radius of the circle: ");
 scanf("%d", &r);
 x=0;
 y=r;
 d=1.25-r;
 do{ putpixel(200+x, 200+y, WHITE);
     putpixel(200-x, 200+y, WHITE);
     putpixel(200+x, 200-y, WHITE);
     putpixel(200-x,200-y,  WHITE);
     putpixel(200+y, 200+x, WHITE);
     putpixel(200-y, 200+x, WHITE);
     putpixel(200+y, 200-x, WHITE);
     putpixel(200-y, 200-x, WHITE);

     if(d<0){
      x=x+1;
      d=d+2*x+1;
      } else {
      x=x+1;
      y=y-1;
      d=d=2*x-2*y+1;
      }
     }
     while(x<=y);
      setfillstyle(SOLID_FILL, RED);
      floodfill(200, 200, WHITE);
 getch();
 }