#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
void panda(void)
{
    int x=439,y=263,x1=470,y1=263,p=20;
    int a,b,c,d,i;
    for(i=1;; i++)
    {
        delay(10);
        cleardevice();
        //setfillstyle(2,3);
        ellipse(500+i,100,0,360,36,25);
        fillellipse(500+i,100,36,25);
        setcolor(GREEN);
        circle(485+i,100,7);
        //floodfill(485+i,100,GREEN);
        circle(515+i,100,7);
        //floodfill(500+i,100,3);
        //outtextxy(537,179,"b");
        //setfillstyle(INTERLEAVE_FILL,14);
        //setfillstyle(XHATCH_FILL, RED);
        arc(537+i,179,135,199,100);
        arc(536+i,179,135,199,100);
        fillellipse(496+i,173,43,40);

        //floodfill(460,174,1);
        //outtextxy(456,173,"c");
        arc(456+i,173,337,40,100);
        arc(457+i,173,337,40,100);
        //floodfill(470,176,WHITE);

        arc(496+i,130,235,303,96);

        arc(538+i,246,160,191,100);
        arc(455+i,241,346,18,96);
        //outtextxy(x,y,"b");
        line(439+i,263,470+i,263);
        line(547+i,264,521+i,264);

        line(470+i,263,495+i,247);
        line(521+i,264,495+i,247);


        line(470+i,263,470+i,285);
        line(439+i,263,439+i,285);

        line(521+i,264,521+i,286);
        line(547+i,264,547+i,286);

        ellipse(455+i,286,0,360,15,10);
        ellipse(535+i,286,0,360,13,8);
        if(i>50)
        {
            i=0;
            break;
        }
    }
}
