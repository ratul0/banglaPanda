#include<stdio.h>
#include<graphics.h>
#include<windows.h>
extern int glo,score,life;
extern char cher[50000];
extern void scoref(void);
extern FILE *life_read,*score_read;
extern char score_ch[10],life_ch[10];
void shen()
{
    char a=0;
    int gd = DETECT, gm;
    int x1=350,y1=400,i=0;
    int sx,sy=400;
    int k=50;
    setfillstyle(1,15);
    bar(0,0,800,600);
    scoref();
    readimagefile("de.bmp",x1+i,y1+i,x1+150,y1+200);
    for(sx=850; sx>=500; sx-=4)
    {
        readimagefile("s.bmp",sx,sy,sx+250,sy+200);

        if(kbhit())
        {
            a=getch();
            if(a==77)
            {
                char *song="punch.wav";
                sndPlaySound(song,SND_ASYNC);
                score+=10;
                score_read=fopen("score.txt", "w");
                itoa(score,score_ch,10);
                outtextxy(270, 60, score_ch);
                fprintf(score_read,"%d",score);
                fclose(score_read);
                readimagefile("right.bmp",x1+i,y1+i,x1+150,y1+200);
                delay(350);
                readimagefile("de.bmp",x1+i,y1+i,x1+150,y1+200);
                if(sx>=500)
                {
                    //life_read=fopen("life.txt", "a");
                    //fscanf(life_read, "%s", life_file);
                    //fclose(life_read);
                    goto shen;
                }
            }

        }
        //printf("%d\n",glo);
        delay(7-glo);
    }

shen:
    if(a!=77)
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
    for(; sx<=800; sx+=5)
    {


        readimagefile("s.bmp",sx,sy,sx+250,sy+200);
        setfillstyle(1,15);
        bar(sx-3,sy,sx+2,sy+264);
        //delay(0);
    }
    readimagefile("de.bmp",x1+i,y1+i,x1+150,y1+200);
}
