#include<fstream.h>
#include<process.h>
#include<graphics.h>
#include<conio.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <dos.h>
struct xco
{
  int ax,cs;
};
struct yco
{
  int ay;
};
void retrieve(int d2=0)
 {
   int a,b,c2,n,e,x,y,d=10; char c='c';
  x=getmaxx()/2;  a=x+250;b=x-250;
  y=getmaxy()/2;  c2=y+220;e=y-220;
  xco x2;  yco y2; int k,x3,x4,y3,y4;
    ifstream takex("padx.dat",ios::binary);
    ifstream takey("pady.dat",ios::binary);
	takex.read((char*)&x2,sizeof(x2));
	takey.read((char*)&y2,sizeof(y2));
	 x=x2.ax; y=y2.ay;
       while(!takex.eof()&&!takey.eof())
	{
	takex.read((char*)&x2,sizeof(x2));
	takey.read((char*)&y2,sizeof(y2));
	 x3=x2.ax;  k=x2.cs; y3=y2.ay;
	    if(x3==x)
	     {// y4=y3-y;
	      for(int i=y;i!=y3;)//i++)
		{
		 setcolor(13);outtextxy(x-50,i,".");
		 if(d2)
		  {delay(100);}
	       setcolor(k);outtextxy(x-50,i,".");
		  if(y<y3)
		    {i+=10;}
		  else
		    {i-=10;}
		}
	      }
	    if(y3==y)
	     {
	       for(int i=x;i!=x3;)//i++)
		{
		 setcolor(13);outtextxy(i-50,y,".");
		 if(d2)
		  {delay(100);}
		 setcolor(k);outtextxy(i-50,y,".");
		  if(x<x3)
		    {i+=10;}
		  else
		    {i-=10;}
		}
	     }
	 x=x3;y=y3;
       }//while
    takex.close();
    takey.close();
  }  //function
//**************************************************************
/*
void save()
 {
    int a,b,c2,n,e,x,y,d=10; char c='c';
  x=getmaxx()/2;  a=x+250;b=x-250;
  y=getmaxy()/2;  c2=y+220;e=y-220;
 setfillstyle(0, getmaxcolor());
 bar(a-50,c2,b-50,e);
//  outtextxy(x+210,y-154,"press 'g' to ");
 } */
 //**************************************************************

     //	      {



     //	    for(int i=0;i<3;i++)
      //	      {
	      //	if(n!=1)
	      //	 {
	       //	  setcolor(0);outtextxy(x-50,y,".");setcolor(n2);
		//	 }
	//       if(c=='d')//right
       //		 {x=x+d;}
       //		else if(c=='a')//left
       //		 {x=x-d;}
       //		else if(c=='w')//up
      //		  {y=y-d;}
       //		else if(c=='s')//down
    //		 {y=y+d;}
    //		 setcolor(13);outtextxy(x-50,y,".");
    //		 delay(100);setcolor(n2);outtextxy(x-50,y,".");



   //	       }
void display()
 {
  int a,b,c2,n,e,x,y,d=10; char c='c';
  x=getmaxx()/2;  a=x+250;b=x-250;
  y=getmaxy()/2;  c2=y+220;e=y-220;
  setfillstyle(0, getmaxcolor());
  bar(x+210,y-220,x+320,y+220);
  outtextxy(x+210,y-154,"press 'g' to ");
  outtextxy(x+210,y-144,"start drawing");
  outtextxy(x+210,y-115,"press 'f' to ");
  outtextxy(x+210,y-105,"stop drawing");
  outtextxy(x+210,y-70,"press 'h' to ");
  outtextxy(x+210,y-60,"change color");
  outtextxy(x+210,y-30,"press 'e' to ");
  outtextxy(x+210,y-20,"exit");
  outtextxy(x+210,y+10,"press 't' to ");
  outtextxy(x+210,y+20,"retreive");
  outtextxy(x+210,y+40,"press 'v' to ");
  outtextxy(x+210,y+50,"save ");
  outtextxy(x+210,y+90,"w=up");
  outtextxy(x+210,y+100,"s=down");
  outtextxy(x+210,y+110,"a=left");
  outtextxy(x+210,y+120,"d=right");
 }
int selcolor()
 {
//  int gd=DETECT,gm;
//  initgraph(&gd,&gm,"c://turboc3//bgi");
  int a,b,c2,n,e,x,y,d=10; char c='c',c1;
  x=getmaxx()/2;  a=x+250;b=x-250;
  y=getmaxy()/2;  c2=y+220;e=y-220;
//  setfillstyle(0, getmaxcolor());
  bar(x+210,y-220,x+320,y+220);setcolor(15);
  outtextxy(x+210,y-154,"select color ");
  outtextxy(x+210,y-146,"1.red");
  outtextxy(x+210,y-136,"2.green ");
  outtextxy(x+210,y-126,"3.blue");
  outtextxy(x+210,y-116,"4.white ");
  outtextxy(x+210,y-106,"5.yellow");
  outtextxy(x+210,y-96,"6.brown");
  outtextxy(x+210,y-86,"7.lightcyan");
  outtextxy(x+210,y-76,"8.cyan");
//  rectangle(a-50,c2,b-50,e);
 c1=getch();display();
  switch(c1)
   {
    case'1':return 4;break;
    case'2':return 2;break;
    case'3':return 1;break;
    case'4':return 15;break;
    case'5':return 14;break;
    case'6':return 6;break;
    case'7':return 11;break;
    case'8':return 3;break;
   }
/*
  setfillstyle(0, getmaxcolor());
  bar(x+210,y-220,x+320,y+220);
  outtextxy(x+210,y-154,"press 'g' to ");
  outtextxy(x+210,y-144,"start drawing");
  outtextxy(x+210,y-115,"press 'f' to ");
  outtextxy(x+210,y-105,"stop drawing");
  outtextxy(x+210,y-70,"press 'h' to ");
  outtextxy(x+210,y-60,"change color");
  rectangle(a-50,c2,b-50,e);   */
 }

// Constant     ³Value³grnd?³grnd?
//ÍÍÍÍÍÍÍÍÍÍÍÍÍÍØÍÍÍÍÍØÍÍÍÍÍØÍÍÍÍÍ
// BLACK        ³  0  ³ Yes ³ Yes
// BLUE         ³  1  ³ Yes ³ Yes
// GREEN        ³  2  ³ Yes ³ Yes
// CYAN         ³  3  ³ Yes ³ Yes
// RED          ³  4  ³ Yes ³ Yes
// MAGENTA      ³  5  ³ Yes ³ Yes
// BROWN        ³  6  ³ Yes ³ Yes
// LIGHTGRAY    ³  7  ³ Yes ³ Yes
// DARKGRAY     ³  8  ³ No  ³ Yes
// LIGHTBLUE    ³  9  ³ No  ³ Yes
// LIGHTGREEN   ³ 10  ³ No  ³ Yes
// LIGHTCYAN    ³ 11  ³ No  ³ Yes
// LIGHTRED     ³ 12  ³ No  ³ Yes
// LIGHTMAGENTA ³ 13  ³ No  ³ Yes
// YELLOW       ³ 14  ³ No  ³ Yes
// WHITE        ³ 15  ³ No  ³ Yes
//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄÄ
// BLINK        ³128  ³ No  ³ ***


void main()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c://turboc3//bgi");
 int a,b,c2,n3=0,n2=15,n,e,k=15,x,y,d=10; char c='c';
 xco sx; yco sy;
// int *ax,*ay;
// ax=new int[]; ay=new int[];
 x=getmaxx()/2;  a=x+250;b=x-250;
 y=getmaxy()/2;  c2=y+220;e=y-220;
 rectangle(a-50,c2,b-50,e);
 outtextxy(x-50,y,".");display();/*
 outtextxy(x+210,y-154,"press 'g' to ");
 outtextxy(x+210,y-144,"start drawing");
 outtextxy(x+210,y-115,"press 'f' to ");
 outtextxy(x+210,y-105,"stop drawing");
 outtextxy(x+210,y-70,"press 'h' to ");
 outtextxy(x+210,y-60,"change color");       */
//  rectangle(x+210,y-220,x+320,y+220);
//  setfillstyle(0, getmaxcolor());
//   bar(a-1,c2-1,b+1,e+1);
// bar(x-2, y-100, x+2,y-90);sleep(1);
// setfillstyle(9, getmaxcolor());
// getch();
// closegraph();
// if(c=='e')
 //  {closegraph();exit(0);}//exit
 rectangle(a-50,c2,b-50,e);
 while(c!='e')
{
   c=getch();
   //rectangle(a-50,c2,b-50,e);
   if(c=='g')
     {n=1;n2=k;}
  else if(c=='f')
     {n2=0;}
  else if(c=='h')
     {n2=k=selcolor();}
  else if(c=='t')
     {retrieve(1);}
  else if(c=='v')
     { n3=0;
      remove("padx.dat");
      remove("pady.dat");
      rename("tempx.dat","padx.dat");
      rename("tempy.dat","pady.dat");
     }
  else if(c=='e'&&n3!=1)
     {
      remove("tempx.dat");
      remove("tempy.dat");
     }

 else
   {
    for(int i=0;i<3;i++)
     {
	if(n!=1)
       {
	setcolor(0);outtextxy(x-50,y,".");setcolor(n2);
     //	sx.cs=0;
       }
   //    if(n==1)
   //	{sx.cs=n2;}
     if(c=='d')//right
       {x=x+d;}
      else if(c=='a')//left
       {x=x-d;}
      else if(c=='w')//up
       {y=y-d;}
      else if(c=='s')//down
       {y=y+d;}
      setcolor(13);outtextxy(x-50,y,".");
      delay(100);setcolor(n2);outtextxy(x-50,y,".");
//      if(n3)
//       {
	 sx.ax=x; sx.cs=n2; sy.ay=y;
	 ofstream enterx("tempx.dat",ios::binary|ios::app);
	 ofstream entery("tempy.dat",ios::binary|ios::app);
	 enterx.write((char*)&sx,sizeof(sx));
	 entery.write((char*)&sy,sizeof(sy));
	 enterx.close();
	 entery.close();
//       }
//  ofstream out("lib.dat",ios::binary|ios::app);
// 	  out.write((char*)&s,sizeof(s));

//      outtextxy(x-50,y,".");
   }    //for
//    setcolor(4);outtextxy(x-50,y,".");setcolor(7);
  }//else
}
closegraph();
}