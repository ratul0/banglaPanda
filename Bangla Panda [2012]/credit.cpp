#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<cstdio>
extern FILE *credit;
extern char highscore_ch[10];
void credits()
{
    readimagefile("credits.bmp",0,0,800,600);
 getch();
}

