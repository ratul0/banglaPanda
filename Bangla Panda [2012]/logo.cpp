#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<stdio.h>
void logo(void)
{

    setfillstyle(1,15);
    int gd=DETECT,gm;
    int a,b,c,x,y,r=50,i,j,rad,k,l,g;
    char ad[]="THIS IS THE BIRTH PLACE OF KUNG FU.";
    l=strlen(ad);
    //initwindow(800,600);
    x=getmaxx();
    y=getmaxy();
    x/=2;
    y/=2;
    setcolor(15);
    circle(x,y,r);
    a=(y-r+y)/2;
    b=(y+r+y)/2;
    arc(x,a,90,270,25);
    //arc(x,a,90,270,25);




    arc(x,b,270,90,25);
    floodfill(x,b,15);
    //arc(x,b,270,90,25);


    circle(x+10,a,10);
    floodfill(x+10,a,15);

    //circle(x+10,a,10);
    //graphdefaults();
    setcolor(16);
    setbkcolor(16);
    for(i=1;i<=10;i++)
    {
        circle(x-10,b,10-i);
        setbkcolor(16);
        setcolor(16);
    }
    setbkcolor(16);
    setcolor(15);
    settextstyle(7, HORIZ_DIR, 15);
        outtextxy(x-350,y+100,"THIS");
        delay(1000);
        outtextxy(x-270,y+100,"IS");
        delay(1000);
        outtextxy(x-200,y+100,"THE");
        delay(1000);
        outtextxy(x-90,y+100,"BIRTH");
        delay(1000);
        outtextxy(x+50,y+100,"PLACE");
        delay(1000);
        outtextxy(x+150,y+100,"OF");
        delay(1000);
        outtextxy(x+240,y+100,"KUNG");
        delay(1000);
        outtextxy(x+330,y+100,"FU");
        delay(1000);
        outtextxy(x+360,y+100,".");
        delay(1000);
    //putpixel(x-10, b, 16);
    getch();
}
