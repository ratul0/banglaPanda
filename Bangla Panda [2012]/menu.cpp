#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<cstdio>
extern void game(void);
extern void high1(void);
void inoption();
void credits();
extern int glo,score,life,soundhero;
void menu()
{
    soundhero++;
   /* if(soundhero >1)
   01711485003
   {
        printf("dsadsdsadasdas");
        char *song="soundhero.wav";
        sndPlaySound(song,SND_ASYNC);
   }*/
    char ch,take;
    int count=0,p=1;
    int gd = DETECT, gm;
    readimagefile("menu1.bmp",0,0,800,600);
    while(1)
    {
        if(kbhit())
        {
            ch=getch();
            if(p==1&&ch==13)
            {
                game();
            }
            if(p==2&&ch==13)
            {
                high1();
            }
            if(p==3&&ch==13)
            {
                inoption();
            }
            if(p==4&&ch==13)
            {
                credits();
            }
            if(p==5&&ch==13)
            {
                return;
            }
            if(ch==80)
            {
                p++;
                if(p>5)
                {
                    p=1;
                }
            }
            else if(ch==72)
            {
                p--;
                if(p<=0)
                {
                    p=5;
                }
            }
            if(p==1)
            {
                readimagefile("menu1.bmp",0,0,800,600);
            }
            else if(p==2)
            {
                readimagefile("menu2.bmp",0,0,800,600);
            }
            else if(p==3)
            {
                readimagefile("menu3.bmp",0,0,800,600);
            }
            else if(p==4)
            {
                readimagefile("menu4.bmp",0,0,800,600);
            }
             else if(p==5)
            {
                readimagefile("menu5.bmp",0,0,800,600);
            }
        }
    }
}
