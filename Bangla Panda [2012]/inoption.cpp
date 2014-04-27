#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<cstdio>
extern void game(void);
extern void high1(void);
extern int glo,score,life;
void inoption()
{
    char ch,take;
    int count=0,p=1;
    int gd = DETECT, gm;
    readimagefile("easy.bmp",0,0,800,600);
    while(1)
    {
        if(kbhit())
        {
            ch=getch();
            if(p==1&&ch==13)
            {
                glo=0;
                score=0;
                life=5;
                return;
            }
            if(p==2&&ch==13)
            {
                glo=2;
                score=0;
                life=3;
                return;
            }
            if(p==3&&ch==13)
            {
                glo=4;
                score=0;
                life=2;
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
                readimagefile("easy.bmp",0,0,800,600);
            }
            else if(p==2)
            {
                readimagefile("normal.bmp",0,0,800,600);
            }
            else if(p==3)
            {
                readimagefile("hard.bmp",0,0,800,600);
            }
        }
    }
}



