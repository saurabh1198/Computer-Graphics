#include<iostream>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
void bresenham(int x1,int y1,int x2,int y2)
{ cout<<"\nThe required output :\n";
cout<<"BRESENHAM's LINE DRAWING ALGORITHM\n";
  int dx,dy;
  dx=(x2-x1);
  dy=(y2-y1);
  float p=(2*dy)-dx;
  float y=y1;
  putpixel(x1,y1,YELLOW);
  for(int i=1;i<=dx;i++)
  {

    if(p<0)
     {p=p+(2*dy);
      putpixel(x1+i,y,YELLOW);
     }

    else
     {p=p+((2*dy)-(2*dx));
      y=y+1;
      putpixel(x1+i,y,YELLOW);
     }
   }
}

void main()
{
 clrscr();        //bresenham's algorithm
 int x1,x2,y1,y2;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 cout<<"\nEnter the coordinates of start point : ";
 cin>>x1>>y1;
 cout<<"\nEnter the coordinates of end point : ";
 cin>>x2>>y2;


 bresenham(x1,y1,x2,y2);
 getch();
}
