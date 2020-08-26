#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm," ");
int x1,x2,x3,y1,y2,y3,tx,ty,sx,sy,c;
cout<<"Enter Coordinates of Triangle"<<endl;
cout<<"X1,Y1:";
cin>>x1>>y1;
cout<<"X2,Y2:";
cin>>x2>>y2;
cout<<"X3,Y3:";
cin>>x3>>y3;
y1+=100;y2+=100;y3+=100;
cout<<endl<<"1.Translation\n2.Scaling\n3.Rotation\n";
cout<<"Enter option(1/2/3):";
cin>>c;
switch(c){
case 1:
      cout<<"Enter Translation Factor"<<endl;
      cout<<"TX,TY :";
      cin>>tx>>ty;
      y1+=100;y2+=100;y3+=100;
      int p[]={x1,y1,x2,y2,x3,y3,x1,y1};
      int q[]={x1+tx,y1+ty,x2+tx,y2+ty,x3+tx,y3+ty,x1+tx,y1+ty};
      drawpoly(4,p);
      drawpoly(4,q);
      outtextxy((x3+x2+tx+tx+10)/2,(y3+y2+ty+ty)/2,"Translated");
      break;
case 2:
      cout<<"Enter Scaling Factor"<<endl;
      cout<<"SX,SY :";
      cin>>sx>>sy;
      y1+=100;y2+=100;y3+=100;
      x1+=100;x2+=100;x3+=100;
      int pp[]={x1,y1,x2,y2,x3,y3,x1,y1};
      y1-=100;y2-=100;y3-=100;
      int qq[]={x1*sx,y1*sy,x2*sx,y2*sy,x3*sx,y3*sy,x1*sx,y1*sy};
      drawpoly(4,pp);
      drawpoly(4,qq);
      outtextxy((x3*sx+x2*sx+10)/2,(y3*sy+y2*sy)/2,"Scaled");
      break;
case 3:
float rx1,rx2,rx3,ry1,ry2,ry3,T;
y1+=150;y2+=150;y3+=150;
cout<<"Enter Rotation Angle:";
cin>>T;
T=T*(3.142/180);
rx1=x1*cos(T)-y1*sin(T);
ry1=y1*cos(T)+x1*sin(T);
rx2=x2*cos(T)-y2*sin(T);
ry2=y2*cos(T)+x2*sin(T);
rx3=x3*cos(T)-y3*sin(T);
ry3=y3*cos(T)+x3*sin(T);
int r[]={x1,y1,x2,y2,x3,y3,x1,y1};
int rr[]={rx1,ry1,rx2,ry2,rx3,ry3,rx1,ry1};
drawpoly(4,r);
drawpoly(4,rr);
outtextxy((rx3+rx2+10)/2 ,(ry3+ry2)/2,"Rotated");
}
getch();
}
