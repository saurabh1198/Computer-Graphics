#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	clrscr();
	int gd=DETECT,gm;
	float t,xmax,ymax,xmid,ymid,x1,x2,y1,y2;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	bar3d(100,20,90,60,20,5);
	xmax=getmaxx();
	ymax=getmaxy();
	xmid=xmax/2;
	ymid=ymax/2;
	line(0,ymid,xmax,ymid);
	line(xmid,0,xmid,ymax);
	cout<<"enter angle";
	cin>>t;
	t=t*(3.14/180);
	x1=((100*cos(t))-(20*sin(t)));
	y1=((100*sin(t))+(20*cos(t)));
	x2=((90*cos(t))-(60*sin(t)));
	y2=((90*sin(t))+(60*cos(t)));

	bar3d(x1,y1,x2,y2,20,5);
	getch();
}

//scaling
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gd=DETECT,gm;
	float xmax,ymax,xmid,ymid;
	int sx,sy;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	bar3d(100,20,90,60,20,5);
	xmax=getmaxx();
	ymax=getmaxy();
	xmid=xmax/2;
	ymid=ymax/2;
	line(0,ymid,xmax,ymid);
	line(xmid,0,xmid,ymax);
	cout<<"scalling "<<endl<<"factor"<<endl;
	cin>>sx>>sy;
	bar3d((100*sx),(20*sy),(90*sx),(60*sy),20,5);

	getch();
}

//translation
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gd=DETECT,gm;
	float xmax,ymax,xmid,ymid;
	int tx,ty;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	bar3d(100,20,90,60,20,5);
	xmax=getmaxx();
	ymax=getmaxy();
	xmid=xmax/2;
	ymid=ymax/2;
	line(0,ymid,xmax,ymid);
	line(xmid,0,xmid,ymax);
	cout<<"translation "<<endl<<"factor"<<endl;
	cin>>tx>>ty;
	bar3d(100+tx,20+ty,90+tx,60+ty,20,5);
	getch();
}
