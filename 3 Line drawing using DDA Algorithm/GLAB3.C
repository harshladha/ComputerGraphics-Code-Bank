// WAP to draw a line using DDA algorithm

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int main()
{
 int x1,y1,x2,y2,length;
 float x,y,dx,dy;
 cout<<"Enter X1 coordinate"<<endl;cin>>x1;
 cout<<"Enter Y1 coordinate"<<endl;cin>>y1;
 cout<<"Enter X2 coordinate"<<endl;cin>>x2;
 cout<<"Enter Y2 coordinate"<<endl;cin>>y2;
 if(x2-x1>y2-y1)
 {
  length=x2-x1;
 }
 else
 {
  length=y2-y1;
 }
 dx=(x2-x1)/length;
 dy=(y2-y1)/length;
 getch();
}