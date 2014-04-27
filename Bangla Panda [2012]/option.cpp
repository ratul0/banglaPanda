#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<cstdio>
extern void game(void);
extern void high1(void);
void inoption();
extern int glo,score,life;
void option()
{
    char ch,take;
    int count=0,p=1;
    int gd = DETECT, gm;
    readimagefile("difficulty.bmp",0,0,800,600);
    while(1)
    {
        if(kbhit())
        {
            ch=getch();
            if(p==1&&ch==13)
            {
                inoption();
                //return;
            }
            if(p==2&&ch==13)
            {
                //credits();
            }
            if(p==3&&ch==13)
            {
                return;
            }
            if(ch==80)
            {
                p++;
                if(p>3)
                {
                    p=1;
                }
            }
            else if(ch==72)
            {
                p--;
                if(p<=0)
                {
                    p=3;
                }
            }
            if(p==1)
            {
                readimagefile("difficulty.bmp",0,0,800,600);
            }
            else if(p==2)
            {
                readimagefile("credits.bmp",0,0,800,600);
            }
            else if(p==3)
            {
                readimagefile("back.bmp",0,0,800,600);
            }
        }
    }
}


