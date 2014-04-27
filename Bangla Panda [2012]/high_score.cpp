#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<cstdio>
extern FILE *high_score;
extern char highscore_ch[10];
extern int glo,score,life;
extern int high;
void high1()
{

   readimagefile("high.bmp",0,0,800,600);
    high_score=fopen("highscore.txt", "r");
    fprintf(high_score,"%d",high);

    itoa(high,highscore_ch,10);
    settextstyle(6,4,10);
    outtextxy(420, 450, highscore_ch);
    //delay(2000);
    getch();
    fclose(high_score);
}
