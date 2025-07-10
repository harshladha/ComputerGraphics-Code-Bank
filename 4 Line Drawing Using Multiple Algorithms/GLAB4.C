#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int sign(int num) {
 if (num > 0) return 1; 

 if (num < 0) return -1;
 return 0;
}
void bl(int x1, int y1, int x2, int y2, int color) {
 int i, x, y, dx, dy, m, e;
 x = x1;
 y = y1;
 dx = x2 - x1;
 dy = y2 - y1;
 m = dy / dx;
 e = m - 0.5;
 for(i=1; i<=dx;i++) {
 putpixel(x,y,RED);
 while (e>0) {
 y=y+1;
 e=e-1 ;}
 x=x+1;
 e=e+m }}
void il(int x1, int y1, int x2, int y2, int color) {
 int i,x,y,dx,dy,e;
 x=x1;
 y=y1;
 dx=x2-x1;
 dy=y2-y1;
 e=(2*dy)-dx;
 for(i=1; i<=dx;i++) {
 putpixel(x, y, WHITE);
 while(e>=0) {
 y=y+1;
 e=e-(2*dx); }
 x=x+1;
 e=e+(2*dy);}
}
void gb(int x1, int y1, int x2, int y2, int color) {
 int i, x, y, dx, dy, s1, s2, e, Interchange;
 x=x1;
 y=y1;
 dx = abs(x2 - x1);
 dy = abs(y2 - y1);
 s1 = sign(x2 - x1);
 s2 = sign(y2 - y1);
f(dy>dx){
int temp=dx;
dx=dy;
dy=temp;
Interchange=1;}
 else {
Interchange=0; }
 e=2*dy-dx;
For(i=1;i<=dx;i++) {
putpixel(x, y, BLUE);
while(e>0) {
 if(Interchange==1) {
 x=x+s1;
 } else {
 y=y+1; }
 e=e-2*dx;}
if (Interchange==1) {
 y=y+s2;}
 else {
 x=x+s1;}
e=e+2*dy; }}
int main() {
 int x1, y1, x2, y2, x3, y3
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\TURBOC3\\BgI");
 prinƞ("Enter x1, y1: ");
 scanf("%d %d", &x1, &y1);
 prinƞ("Enter x2, y2: ");
 scanf("%d %d", &x2, &y2);
 prinƞ("Enter x3, y3: ");
 scanf("%d %d", &x3, &y3);
 bl(x1, y1, x2, y2, RED);
 il(x2, y2, x3, y3, WHITE);
 gb(x3, y3, x1, y1, BLUE); getch();
 return 0;
}