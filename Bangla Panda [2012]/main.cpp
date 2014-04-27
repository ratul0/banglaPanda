#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<cstdio>
void count(void);
void logo(void);
void panda(void);
void crt(void);
void menu(void);
void game(void);
void high1(void);
void credits(void);
int high;
extern int soundhero=0;
int glo,score,life;
FILE *life_read,*score_read,*high_score;
int main()
{
    FILE *high_score;

    high_score=fopen("highscore.txt", "r");
    fscanf(high_score, "%d", &high);
    fclose(high_score);
    glo=0;
    score=0;
    life=5;
    int gd = DETECT, gm;
    char *song="hero.wav";
    initwindow(800,600,"Bangla Panda");
 crt();
  count();
   logo();
    menu();
   // game();
    sndPlaySound(song,SND_ASYNC);
    //getch();
    closegraph();
    return 0;
}
