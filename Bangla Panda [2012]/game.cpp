#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
#include<cstdio>
extern int soundhero;
void shen();
void tailong();
void cro();
void scoref(void);
extern int glo,score,life;
extern int high;
char score_ch[10],life_ch[10],highscore_ch[10];
extern FILE *life_read,*score_read,*high_score;

void game()
{
    high_score=fopen("highscore.txt", "r");
    fscanf(high_score, "%d", &high);
    fclose(high_score);
    //score=0;
    score_read=fopen("score.txt", "w");
    itoa(score,score_ch,10);
    fclose(score_read);
    life_read=fopen("life.txt", "w");
    //life=2;
    itoa(life,life_ch,10);
    fclose(life_read);
    //int x=439,y=263,x1=470,y1=263,p=20;
    int save;
    int gd = DETECT, gm;
    srand(3);
    for(int i=1;; i++)
    {
        if(life<=0)
        {
            setfillstyle(1,0);
            bar(0,0,800,600);
            readimagefile("gameover.bmp",0,0,800,600);
            delay(2000);
            if(score>high)
            {
                high_score=fopen("highscore.txt", "w");
                high=score;
                fprintf(high_score,"%d",high);
                readimagefile("high.bmp",0,0,800,600);
                itoa(high,highscore_ch,10);
                settextstyle(6,4,10);
                outtextxy(450, 450, highscore_ch);
                delay(2000);
                fclose(high_score);
                //return;
            }
            else
            {
                readimagefile("score.bmp",0,0,800,600);
                score_read=fopen("score.txt", "w");
                itoa(score,score_ch,10);
                settextstyle(6,4,10);
                outtextxy(420, 450, score_ch);
                fprintf(score_read,"%d",score);
                delay(2000);
            }
            if(score<=100)
            {
                readimagefile("rank1.bmp",0,0,800,600);
                delay(5000);
                fclose(score_read);
                 char *song="soundhero.wav";
        sndPlaySound(song,SND_ASYNC);
               // getch();
            }
            else if(score>100&&score<=180)
            {
                readimagefile("rank2.bmp",0,0,800,600);
                delay(5000);
                fclose(score_read);
               char *song="soundhero.wav";
        sndPlaySound(song,SND_ASYNC);
               // getch();
            }

            else if(score>180&&score<=240)
            {
                readimagefile("rank3.bmp",0,0,800,600);
                delay(5000);
                fclose(score_read);
                 char *song="soundhero.wav";
        sndPlaySound(song,SND_ASYNC);
               // getch();
            }
            else if(score>240&&score<=300)
            {
                readimagefile("rank4.bmp",0,0,800,600);
                delay(5000);
                fclose(score_read);
                 char *song="soundhero.wav";
        sndPlaySound(song,SND_ASYNC);
               // getch();
            }
            else if(score>300)
            {
                readimagefile("rank5.bmp",0,0,800,600);
                delay(5000);
                fclose(score_read);
                 char *song="soundhero.wav";
        sndPlaySound(song,SND_ASYNC);
                //getch();
            }
            glo=0;
            score=0;
            life=5;
            //getch();
            return;
            //getch();
        }
        if(i%3==0&&glo<7)
        {
            glo+=1;
        }
        save=rand();
        save%=3;
        if(save==0)
        {
            //scoref();
            shen();
        }
        else if(save==1)
        {
            //scoref();
            tailong();
        }
        else if(save==2)
        {
            //scoref();
            cro();
        }


    }

}

