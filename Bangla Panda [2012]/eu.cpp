#include<graphics.h>
#include<stdio.h>
#include<windows.h>
#include<MMsystem.h>

void crt(void)
{
    char c;
    int gd=DETECT;
    //initwindow(800,600,"UNILIVER");
    setcolor(8);
    int j=7;
    //bar(0,0,800,600);
    //readimagefile("p.bmp",0,0,600,600);
    //delay(2000);
    for(int i=2; i<=360; i++)
    {
        arc(400,300,0,i,145+j);
        arc(400,300,0,i+3,144+j);
        arc(400,300,0,i+6,143+j);
        arc(400,300,0,i+9,142+j);
        arc(400,300,0,i+12,141+j);
        arc(400,300,360-i,10,120+j);
        arc(400,300,360-i,5,121+j);
        arc(400,300,360-i,0,122+j);
        delay(1);
    }
   delay(100);
    int x=320,y=255;
    int points1[]= {x+18,y+40,x-4,y+92,x+11,y+92,x+32,y+40,x+18,y+40};
    fillpoly(4,points1);
    //bar(x,y,x+10,y+90);
    int points2[]= {x+6,y+36,x-2,y+50,x+56,y+50,x+64,y+36,x+5,y+40};
    fillpoly(4,points2);
    int points3[]= {x+21,y-4,x+12,y+10,x+70,y+10,x+78,y-4,x+17,y};
    fillpoly(4,points3);

    bar(x+10,y+78,x+120,y+92);

    int i;
    setcolor(15);
    x=410,y=255;
    bar(x-1,y-4,x+14,y+65);
    bar(x+55,y-4,x+71,y+65);
    x=445;

    for(int j=0; j<=100; j++)
    {
        for(i=24; i<=36; i++)
            arc(x,310,180,360,i);
        arc(x,310,191,349,37);
    }
    settextstyle(3,0,1);
    outtextxy(x+39,247,"TM");
    settextstyle(0,0,5);
    delay(600);
    outtextxy(145,500,"UniLIVER ARTS");
    //delay(2000);
    for(;;)
    {
        readimagefile("p.bmp",350,550,450,580);
        delay(1000);
        setfillstyle(1,0);
        bar(350,550,500,580);
        delay(1000);
        readimagefile("p.bmp",350,550,450,580);

        if(kbhit())
        {
            break;
        }
    }
    //readimagefile("p.bmp",250,550,500,580);
    //delay(2000);
    //crt();
    //getch();
    //closegraph();
}

