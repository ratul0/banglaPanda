#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<stdio.h>
void count()
{
    char *song1="logo.wav";
    sndPlaySound(song1,SND_ASYNC);
    int gd = DETECT, gm, i,j=0,k=0;
    char a[5];

    //initwindow(800,600);

    settextjustify( CENTER_TEXT, CENTER_TEXT );
    //settextstyle(DEFAULT_FONT,HORIZ_DIR,3);

    for(i = 5 ; i >=0 ; i--,j++,k++)
    {
        setcolor(j);
        settextstyle(k+5,HORIZ_DIR,k+5);
        sprintf(a,"%d",i);
        outtextxy(getmaxx()/2, getmaxy()/2, a);
        delay(1000);

        if ( i == 0 )
            break;
        if(j==15)
            j=0;
        if(k==10)
            k=0;
        cleardevice();
    }
    cleardevice();

}
