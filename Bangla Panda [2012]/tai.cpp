#include<stdio.h>
#include<graphics.h>
#include<windows.h>
extern int glo,score,life;
extern char cher[50000];
extern void scoref(void);
extern FILE *life_read,*score_read;
extern char score_ch[10],life_ch[10];
void tailong()
{
    char a=0;
    //int gd = DETECT, gm;
    int x1=350,y1=400,i=0;
    int tx=300,ty=250;
    int k=50;
    setfillstyle(1,15);
    bar(0,0,800,600);
    scoref();
    readimagefile("de.bmp",x1+i,y1+i,x1+150,y1+200);
    for(ty=-300; ty<=200; ty+=3)
    {
        readimagefile("tai.bmp",tx,ty,tx+250,ty+200);

        if(kbhit())
        {
            a=getch();
            if(a==72)
            {
                char *song="kick.wav";
                sndPlaySound(song,SND_ASYNC);
                score+=10;
                score_read=fopen("score.txt", "w");
                itoa(score,score_ch,10);
                outtextxy(270, 60, score_ch);
                fprintf(score_read,"%d",score);
                fclose(score_read);
                readimagefile("up.bmp",x1+i,y1+i,x1+150,y1+200);
                delay(350);
                readimagefile("de.bmp",x1+i,y1+i,x1+150,y1+200);
                if(ty<=200)
                {
                    goto point;
                }

            }

        }
        //printf("%d\n",glo);
        delay(7-glo);
    }
point:
    if(a!=72)
    {
        char *song="mara.wav";
        sndPlaySound(song,SND_ASYNC);
        readimagefile("dead.bmp",x1+i,y1+i,x1+150,y1+200);
        life--;
        if(life<=0)
        {
            life_read=fopen("life.txt", "w");
            itoa(life,life_ch,10);
            outtextxy(800, 60, life_ch);
            fprintf(life_read,"%d",life);
            fclose(life_read);
            return;

        }
        life_read=fopen("life.txt", "w");
        itoa(life,life_ch,10);
        outtextxy(800, 60, life_ch);
        fprintf(life_read,"%d",life);
        fclose(life_read);
    }
    for(; ty>=-250; ty-=3)
    {
        readimagefile("tai.bmp",tx,ty,tx+250,ty+200);
        setfillstyle(1,15);
        bar(tx,ty,tx+2,ty+264);
        delay(0);
    }
    readimagefile("de.bmp",x1+i,y1+i,x1+150,y1+200);
}
