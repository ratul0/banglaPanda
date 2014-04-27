#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<cstdio>
extern int glo,score,life;
void scoref(void)
{
    char score_ch[10],life_ch[10],*life_c,*score_c;
    FILE *life_read;
    FILE *score_read;

    life_read=fopen("life.txt", "r");
            fscanf(life_read, "%d", &life);
            fclose(life_read);
    score_read=fopen("score.txt", "r");

            fscanf(score_read, "%d", &score);
            fclose(score_read);



    setcolor(6);
    settextstyle(6,4,4);
    setcolor(6);
    outtextxy(180, 60, "SCORE: ");
    itoa(score,score_ch,10);
    outtextxy(270, 60, score_ch);

    setcolor(6);
    settextstyle(6,4,4);
    outtextxy(750, 60, "LIFE: ");
    itoa(life,life_ch,10);
    outtextxy(800, 60, life_ch);

    return;

}
