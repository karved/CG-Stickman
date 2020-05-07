#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include <dos.h>
int d, shouldMove;
int sceneOneFlag=1,sceneTwoFlag=1,sceneThreeFlag=1,sceneFourFlag=1;

void displayMan(int x,int y,int colour)
{
    setcolor(colour);
    circle(x,y,20);         //face
    line(x,y+20,x,y+30);        //neck
    line(x,y+30,x-20,y+40);    //left hand
    line(x,y+30,x+20,y+40);    //right hand
    line(x,y+30,x,y+60);    //body
    setcolor(WHITE);
}

void displayMan2(int x,int y,int colour)
{
    setcolor(colour);
    outtextxy(x-20, y-45, "THAIN THAIN");
    circle(x,y,20);         //face
    line(x,y+20,x,y+30);        //neck
    line(x,y+30,x-20,y+40);    //left hand
    line(x,y+30,x+20,y+40);    //right hand
    line(x,y+30,x,y+60);
    line(x, y+60, x-30, y+90);
    line(x, y+60, x+30, y+90);   //body
    setcolor(WHITE);
}

void displayMan3(int x,int y,int colour)
{
    setcolor(colour);
    //outtextxy(x-20, y-45, "THAIN THAIN");
    circle(x,y,20);         //face
    line(x,y+20,x,y+30);        //neck
    line(x,y+30,x-20,y+40);    //left hand
    line(x,y+30,x+20,y+40);    //right hand
    line(x,y+30,x,y+60);
    line(x, y+60, x-20, y+90);
    line(x, y+60, x+20, y+90);   //body
    setcolor(WHITE);
}

void shoot(int x, int y)
{
    setcolor(RED);
    while(x<=150)
    {
        line(x+20, y+40, x+23, y+40);
        x+=5;
    }
    setcolor(WHITE);
}

void commerceMan(int x, int y, int colour)
{
    setcolor(colour);
    outtextxy(x-25, y-40, "COMMERCE");
    circle(x, y, 15);
    line(x, y+15, x, y+25);
    line(x, y+25, x-15, y+35);
    line(x, y+25, x+15, y+35);
    line(x, y+25, x, y+55);
    setcolor(WHITE);
}
void artsMan(int x, int y, int colour)
{
    setcolor(colour);
    outtextxy(x-10, y-30, "ARTS");
    circle(x, y, 15);
    //setfillstyle(SOLID_FILL, RED);
    //floodfill(x, y, WHITE);
    putpixel(x-5, y-5, WHITE);
    putpixel(x+5, y-5, WHITE);
    line(x, y+15, x, y+25);
    line(x, y+25, x-15, y+35);
    line(x, y+25, x+15, y+35);
    line(x, y+25, x, y+55);
    line(x, y+55, x-20, y+80);
    line(x, y+55, x+20, y+80);
    setcolor(CYAN);
    while(y<=400)
    {
        line(x-5, y-4, x-5, y-2);
        line(x+5, y-4, x+5, y-2);
        y+=5;
    }

    setcolor(WHITE);
}
int moveCommerceMan(int x, int y)
{
    if(shouldMove)
    {
        if(d<20)
            d+=4;
        else
            shouldMove=0;
        line(x,y+65,x-d,y+90);
        line(x,y+65,x+d,y+90);
    }
    else
    {
        if(d>0)
            d-=4;
        else
            shouldMove=1;
        line(x,y+65,x-d,y+90);
        line(x,y+65,x+d,y+90);
    }
    delay(200);
    x=(x-10);
    return x;
}

void drawBrickWallFarhan()
{
    outtextxy(345, 200, "95% in 10th");
    line(320, 220, 470, 220);
    line(320, 250, 470, 250);
    line(320, 220, 320, 250);
    line(470, 220, 470, 250);
    setfillstyle(INTERLEAVE_FILL, RED);
    floodfill(350, 240, WHITE);
    line(430, 220, 430, 250);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(440, 240, WHITE);
}

void drawFlagFarhan()
{
    outtextxy(100, 220, "10th Standard");
    //Pole
    line(100, 430, 100, 250);
    line(105, 430, 105, 250);
    line(100, 250, 105, 250);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(102, 300, WHITE);

    //Flag
    line(105, 250, 200, 290);
    line(105, 330, 200, 290);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(110, 260, WHITE);
}

void drawFlag()
{
    //Pole
    line(220,430,220,250);
    line(225,430,225,250);
    line(220,250,225,250);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(222,300,WHITE);

    //Flag
    line(225,250,300,275);
    line(225,300,300,275);
    setfillstyle(SOLID_FILL,RED);
    floodfill(230,260,WHITE);
}

void drawCastle()
{
    //Castle Wall
    line(420,250,420,430);
    line(600,250,600,430);
    int a,b,c,d;
    a=420;
    for(int i=0;i<5;i++)
    {
        b=a+20;
        c=b;
        d=c+20;
        line(a,250,b,250);
        line(b,250,b,270);
        if(i==4)
            continue;
        line(c,270,d,270);
        line(d,250,d,270);
        a=d;
    }

    //Door
    line(480,305,480,430);
    line(540,305,540,430);
    line(480,305,540,305);


    setfillstyle(WIDE_DOT_FILL,RED);
    floodfill(500,300,WHITE);

}

void drawCastle4()
{

    //Castle Wall
    line(420,250,420,430);
    line(600,250,600,430);
    int a,b,c,d;
    a=420;
    for(int i=0;i<5;i++)
    {
        b=a+20;
        c=b;
        d=c+20;
        line(a,250,b,250);
        line(b,250,b,270);
        if(i==4)
            continue;
        line(c,270,d,270);
        line(d,250,d,270);
        a=d;
    }

    //Door
    line(480,305,480,430);
    line(540,305,540,430);
    line(480,305,540,305);


    setfillstyle(WIDE_DOT_FILL,BLUE);
    floodfill(500,300,WHITE);

}

void drawBrickWall()
{
    outtextxy(75, 200, "Trigonometry");
    line(50,220,200,220);
    line(50,250,200,250);
    line(50,220,50,250);
    line(200,220,200,250);
    setfillstyle(INTERLEAVE_FILL,RED);
    floodfill(100,240,WHITE);
    line(160,220,160,250);

    setfillstyle(SOLID_FILL,BROWN);
    floodfill(180,240,WHITE);
}

void drawPipe()
{
    outtextxy(355, 290, "I");
    outtextxy(355, 310, "U");
    outtextxy(355, 330, "P");
    outtextxy(355, 350, "A");
    outtextxy(355, 370, "C");

    line(330,250,330,430);
    line(380,250,380,430);

    line(320,250,390,250);
    line(320,220,390,220);
    line(320,220,320,250);
    line(390,220,390,250);

    setfillstyle(SOLID_FILL,GREEN);
    floodfill(350,300,WHITE);
    floodfill(350,230,WHITE);
}

void drawStaircase()
{

    line(200,390,260,390);
    line(260,350,320,350);
    line(320,310,380,310);
    line(380,270,440,270);
    line(440,230,getmaxx(),230);

    line(200,390,200,430);
    line(260,350,260,390);
    line(320,310,320,350);
    line(380,270,380,310);
    line(440,230,440,270);

    setfillstyle(INTERLEAVE_FILL,RED);
    floodfill(500,420,WHITE);

    outtextxy(210, 400, "Practicals");
    outtextxy(270, 360, "River-Boat Problem");
    outtextxy(330, 320, "Past Year Questions");
    outtextxy(390, 280, "HC Verma");
    outtextxy(450, 240, "Mock Tests");

}


void jump(int x, int y,int factor)
{
    for(int i=0;i<factor;i+=2)
    {
        drawBrickWall();
        displayMan(x,y,WHITE);
        //legs
        line(x,y+60,x-8,y+90);
        line(x,y+60,x+8,y+90);
        y-=i;
        line(0,430,640,430);
        delay(100);
        cleardevice();
    }

    for(int e=0;e<factor;e+=2)
    {
	drawBrickWall();
	displayMan(x,y,WHITE);
	//COIN
	circle(x+5,200,15);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(x+5,200,WHITE);
	//legs
	line(x,y+60,x-8,y+90);
	line(x,y+60,x+8,y+90);

	y+=e;
	line(0,430,640,430);
	delay(100);
	cleardevice();
    }
}

void jump2(int x, int y,int factor)
{
	 displayMan(x+20,y-100,WHITE);
        //legs
        line(x+10,y-100+60,x+10-8,y-100+90);
        line(x+10,y-100+60,x+10+8,y-100+90);
	delay(100);

	outtextxy(280, 30, "Coins            X 100");
    circle(340,35,10);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(340,35,WHITE);

	cleardevice();
	x=x+20;y=y-100;
    for(int i=0;i<factor;i+=2)
    {
        displayMan(x,y,WHITE);
        //legs
        line(x,y+60,x-8,y+90);
        line(x,y+60,x+8,y+90);
        y+=i;x+=i;
        line(0,430,250,430);
	line(550,430,640,430);
	line(250,430,250,480);
	line(550,430,550,480);

        delay(100);
        cleardevice();
    }
}

void jump69(int x, int y,int factor)
{
	 displayMan(x+20,y-100,WHITE);
        //legs
        line(x+10,y-100+60,x+10-8,y-100+90);
        line(x+10,y-100+60,x+10+8,y-100+90);
	delay(100);
	cleardevice();
	x=x+20;y=y-100;
    for(int i=0;i<factor;i+=2)
    {
        displayMan(x,y,WHITE);

        outtextxy(520, 100, "Engineering");
        outtextxy(520, 130 ,"Drawing");
        outtextxy(520, 200, "BEE");
        outtextxy(520, 300, "ECCF");
        //legs
        line(x,y+60,x-8,y+90);
        line(x,y+60,x+8,y+90);
        y+=i;x+=i;
	line(0,230,200,230);
	line(200,230,200,480);

	setfillstyle(WIDE_DOT_FILL,BLUE);
    	floodfill(100,300,WHITE);


        delay(100);
        cleardevice();
    }
	outtextxy(320, 240, "Ded...");

}

void jumpFarhan(int x, int y,int factor)
{
    for(int i=0;i<factor;i+=2)
    {
        drawBrickWallFarhan();

        displayMan(x,y,WHITE);
        //legs

        line(x,y+60,x-8,y+90);
        line(x,y+60,x+8,y+90);
        y-=i;
        line(0,430,640,430);
        delay(100);
        cleardevice();
    }

    for(int m=0;m<factor;m+=2)
    {
	drawBrickWallFarhan();
	displayMan(x,y,WHITE);
	//COIN
	circle(x+5,200,15);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(x+5,200,WHITE);
	//legs
	line(x,y+60,x-8,y+90);
	line(x,y+60,x+8,y+90);

	y+=m;
	line(0,430,640,430);
        delay(100);
        cleardevice();
    }
}

int moveMan(int x, int y)
{
    //legs
        if(shouldMove)
        {
            if(d<20)
                d+=4;
            else
                shouldMove=0;
            line(x,y+65,x-d,y+90);
            line(x,y+65,x+d,y+90);
        }
        else
        {
            if(d>0)
                d-=4;
            else
                shouldMove=1;
            line(x,y+65,x-d,y+90);
            line(x,y+65,x+d,y+90);
        }
        delay(200);
        x=(x+10);
        return x;

}

int moveMan2(int x, int y)
{
    //legs
        if(shouldMove)
        {
            if(d<20)
                d+=4;
            else
                shouldMove=0;
            line(x,y+65,x-d,y+90);
            line(x,y+65,x+d,y+90);
        }
        else
        {
            if(d>0)
                d-=4;
            else
                shouldMove=1;
            line(x,y+65,x-d,y+90);
            line(x,y+65,x+d,y+90);
        }
        delay(10);
        x=(x-10);
        return x;

}

void levelTwo()
{
    int i,x=50,y=340,z=50,page=0;
    sceneOneFlag=1,sceneTwoFlag=1,sceneThreeFlag=1,sceneFourFlag=1;

        /************************** LEVEL TWO SCENE ONE *****************************************/
        //Flags to ensure that the previous scene do not repeat
        if(sceneOneFlag)
        {
            //Movement before flag
            while(x<200)
            {
                cleardevice();
                line(0,430,640,430);

                outtextxy(280, 30, "Coins            X 20");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                displayMan(x,345,WHITE);
                x=moveMan(x,y);

            }
            //Flag appears
            drawFlag();
            outtextxy(220, 230, "Standard 11");
            delay(800);

            //Movement after flag
            while(x<=510)
            {
                cleardevice();
                line(0,430,640,430);
                displayMan(x,345,WHITE);

                outtextxy(280, 30, "Coins            X 20");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                drawFlag();
                outtextxy(220, 230, "Standard 11");

                drawCastle();
                outtextxy(480, 230, "IIT COACHING");

                x=moveMan(x,y);

            }

           //Make man disappear through door
            displayMan(x-10,345,BLACK);
            setcolor(BLACK);
            line(x-10,y+65,x-10-d,y+90);
            line(x-10,y+65,x-10+d,y+90);
            setcolor(WHITE);
            delay(400);
            sceneOneFlag=0;
            cleardevice();
        }


 /********************************** LEVEL TWO SCENE TWO ****************************************************/
        d=0,x=50,y=340,z=50,shouldMove=1;

        if(sceneTwoFlag)
        {
            while(x<180)
            {
                cleardevice();
                line(0,430,640,430);
                displayMan(x,345,WHITE);

                outtextxy(280, 30, "Coins            X 20");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                drawBrickWall();
                x=moveMan(x,y);
            }

            jump(x-10,y,15);
           // drawCoin(x,200);

            while(x<=240)
            {
                cleardevice();
                line(0,430,640,430);
                displayMan(x,345,WHITE);
                drawBrickWall();

                outtextxy(280, 30, "Coins            X 20");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                //Move coin along with man
                circle(x,200,15);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(x,210,WHITE);
                x=moveMan(x,y);

            }

            // Dropping coin on man's head
            int temp=200;
            for(int i=0;i<11;i++)
            {
                cleardevice();
                temp+=10;
                circle(240,temp,15);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(240,temp,WHITE);
                line(0,430,640,430);

                displayMan(240,345,WHITE);
                line(x-10,345+60,x-8-10,345+85);
                line(x-10,345+60,x+8-10,345+85);

                drawBrickWall();
                delay(100);
            }
            outtextxy(300, 450, "Hurray");
            outtextxy(280, 30, "Coins            X 30");
            circle(340,35,10);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(340,35,WHITE);
            delay(1000);

            float temp2;
            while(x<=460)
            {
                line(0,430,640,430);

                drawBrickWall();
                drawPipe();
                //Display message
                outtextxy(280, 30, "Coins            X 30");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                 if(x<=355)
                 {
                    circle(355,200,15);
                    setfillstyle(SOLID_FILL,YELLOW);
                    floodfill(355,200,WHITE);
                 }
                 else{
                    outtextxy(280, 30, "Coins            X 40");
                    outtextxy(300, 450, "Tadaaa");
                    circle(340,35,10);
                    setfillstyle(SOLID_FILL,YELLOW);
                    floodfill(340,35,WHITE);
                 }

                 if(x<250)
                 {
                    circle(355,200,15);
                    setfillstyle(SOLID_FILL,YELLOW);
                    floodfill(355,200,WHITE);
                     displayMan(x,345,WHITE);
                     x=moveMan(x,y);
                 }

                else
                {
                    temp2=(0.0208*x*x)-(14.81*x)+(2744);
                    displayMan(x,temp2,WHITE);
                    line(x,temp2+60,x-8,temp2+85);
                    line(x,temp2+60,x+8,temp2+85);

                    delay(150);
                    x=x+10;
                }

            cleardevice();
            }

            float temp3;
             while(x<=570)
            {
                cleardevice();
                line(0,430,640,430);
                outtextxy(500, 440, "Kinematics");
                drawBrickWall();
                drawPipe();
                //Display message
                outtextxy(280, 30, "Coins            X 40");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                //Coin on top of block
                if(x<=560)
                {
                    circle(560,380,15);
                    setfillstyle(SOLID_FILL,YELLOW);
                    floodfill(560,380,WHITE);
                }

                 if(x<=470)
                 {
                    setfillstyle(HATCH_FILL,LIGHTCYAN);
                    bar(480,400,600,430);
                     displayMan(x,345,WHITE);
                     x=moveMan(x,y);
                 }

                else
                {
                    temp3=  (0.0585*x*x)-(60.6*x)+15870;
                    displayMan(x,temp3,WHITE);
                    line(x,temp3+60,x-8,temp3+85);
                    line(x,temp3+60,x+8,temp3+85);
                    if(x>560)
                    {
                        setfillstyle(HATCH_FILL,LIGHTCYAN);
                        bar(480,temp3+85,600,430);
                    }
                    else
                    {
                        setfillstyle(HATCH_FILL,LIGHTCYAN);
                        bar(480,400,600,430);
                    }

                    delay(200);
                    x=x+10;
                }

            }

            while(x<=getmaxx())
            {
                cleardevice();
                line(0,430,640,430);
                 outtextxy(500, 440, "Kinematics");

                drawBrickWall();
                drawPipe();
                setfillstyle(HATCH_FILL,LIGHTCYAN);
                bar(480,425,600,430);
                //Display message
                outtextxy(280, 30, "Coins            X 50");
                outtextxy(300, 450, "Yipee");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);
                displayMan(x,345,WHITE);
                x=moveMan(x,y);

            }
            sceneTwoFlag=0;
        }

        /********************************** LEVEL TWO SCENE THREE ****************************************************/
        d=0,x=50,y=340,z=50,shouldMove=1;

        if(sceneThreeFlag)
        {
            while(x<150)
            {
                cleardevice();
                line(0,430,640,430);
                drawStaircase();
                outtextxy(280, 30, "Coins            X 50");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);
                displayMan(x,345,WHITE);
                x=moveMan(x,y);
            }
            x=230;
            int temp4=305;
            while(x<=480)
            {
                cleardevice();
                line(0,430,640,430);
                drawStaircase();

                outtextxy(280, 30, "Coins            X 50");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                displayMan(x,temp4,WHITE);
                line(x,temp4+60,x-8,temp4+85);
                line(x,temp4+60,x+8,temp4+85);

                x+=60;
                temp4-=40;
                delay(700);
            }
            //Drawing end flag
            outtextxy(500,80,"Success");
            line(500,230,500,100);
            line(505,230,505,100);
            line(500,100,505,100);
            setfillstyle(SOLID_FILL,BROWN);
            floodfill(502,101,WHITE);

            line(505,100,575,125);
            line(575,125,505,150);
            setfillstyle(SOLID_FILL,RED);
            floodfill(510,110,WHITE);
            delay(400);

            x=470;
            while(x<=getmaxx())
            {

                line(0,430,640,430);
                drawStaircase();

                outtextxy(280, 30, "Coins            X 100");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                outtextxy(500,80,"Success");
                outtextxy(510,15,"Promoted to");
                outtextxy(510,35,"Standard 12");

                //Arrow
                line(590,30,610,30);
                line(590,35,610,35);
                line(590,30,590,35);

                line(610,30,610,25);
                line(610,35,610,40);

                line(610,25,630,32);
                line(610,40,630,32);

                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(600,32,WHITE);

                //Drawing end flag
                line(500,230,500,100);
                line(505,230,505,100);
                line(500,100,505,100);
                setfillstyle(SOLID_FILL,BROWN);
                floodfill(502,101,WHITE);

                line(505,100,575,125);
                line(575,125,505,150);
                setfillstyle(SOLID_FILL,RED);
                floodfill(510,110,WHITE);
                displayMan(x,145,WHITE);
                x=moveMan(x,140);
                cleardevice();

            }
        }

}

void levelOne()
{
    int i,x=50,y=340,z=50, x1= 300;
    sceneOneFlag=1,sceneTwoFlag=1,sceneThreeFlag=1,sceneFourFlag=1;

        /************************LEVEL ONE SCENE ONE************************************/
        if(sceneOneFlag)
        {
            while(x<450)
            {
                cleardevice();
                line(0, 430, 640, 430);
                displayMan(x, 345, WHITE);
                drawFlagFarhan();
                x= moveMan(x, y);
            }
           // delay(400);
            jumpFarhan(x, y, 15);
            while(x<600)
            {
                cleardevice();
                line(0, 430, 640, 430);
                drawFlagFarhan();
                drawBrickWallFarhan();
                displayMan(x, 345, WHITE);
                circle(x, 200, 15);
                setfillstyle(SOLID_FILL, YELLOW);
                floodfill(x, 210, WHITE);
                x= moveMan(x, y);
            }

            int temp=200;
            for(int i=0;i<11;i++)
            {
                cleardevice();
                temp+=10;
                circle(600,temp,15);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(600,temp,WHITE);
                line(0,430,640,430);

                displayMan(600,345,WHITE);
                line(x,345+60,x-8,345+85);
                line(x,345+60,x+8,345+85);

                drawBrickWallFarhan();
                delay(100);
            }
            outtextxy(300, 450, "Hurray");
            outtextxy(280, 30, "Coins            X 10");
            circle(340,35,10);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(340,35,WHITE);
            delay(1000);
        }
        cleardevice();
        sceneOneFlag= 0;

        /************************LEVEL ONE SCENE TWO************************************/
        d=0,x=100,y=340,z=50,shouldMove=1;
        if(sceneTwoFlag)
        {
                while(x1>200)
                {
                    cleardevice();
                    line(0, 430, 640, 430);
                    commerceMan(x1, 350, WHITE);
                    outtextxy(280, 30, "Coins            X 10");
                    circle(340,35,10);
                    setfillstyle(SOLID_FILL,YELLOW);
                    floodfill(340,35,WHITE);
                    x1= moveCommerceMan(x1, y);
                }
                d=0, shouldMove=1;
                   line(0, 430, 640, 430);
                   displayMan2(100, y, WHITE);
                   shoot(x, y);
                   delay(2000);
                   cleardevice();
                   x++;
                while(x<250 && x>100)
                {
                    cleardevice();
                    line(0, 430, 640, 430);
                    outtextxy(280, 30, "Coins            X 10");
                    circle(340,35,10);
                    setfillstyle(SOLID_FILL,YELLOW);
                    floodfill(340,35,WHITE);
                    displayMan(x, 345, WHITE);
                    x= moveMan(x, y);
                }
                outtextxy(x-50, y-40, "ARTS? HAHAHAHAH");
                artsMan(300, 350, WHITE);
                delay(2000);
                cleardevice();
                while(x<400)
                {
                    cleardevice();
                    line(0, 430, 640, 430);
                    displayMan(x, 345, WHITE);

                    outtextxy(280, 30, "Coins            X 10");
                    circle(340,35,10);
                    setfillstyle(SOLID_FILL,YELLOW);
                    floodfill(340,35,WHITE);

                    //COIN
                    circle(400, 415, 15);
                    outtextxy(390, 380, "SCIENCE");
                    setfillstyle(SOLID_FILL, YELLOW);
                    floodfill(400, 415, WHITE);
                    x= moveMan(x, y);
                }

                outtextxy(280, 30, "Coins            X 20");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);
                delay(1000);
                while(x<=510)
                {
                    cleardevice();
                    line(0,430,640,430);
                    displayMan(x,345,WHITE);

                    outtextxy(280, 30, "Coins            X 20");
                    circle(340,35,10);
                    setfillstyle(SOLID_FILL,YELLOW);
                    floodfill(340,35,WHITE);

                    drawCastle();
                    outtextxy(480, 230, "Junior College");

                    x=moveMan(x,y);

                }
                /*displayMan(x-10,345,BLACK);
                setcolor(BLACK);
                line(x-10,y+65,x-10-4,y+90);
                line(x-10,y+65,x-10+4,y+90);
                setcolor(WHITE);
                delay(400);
            //sceneOneFlag=0;
                cleardevice();*/

                outtextxy(500, 440, "NAAH");
                delay(600);

                while(x<=getmaxx())
                {
                    cleardevice();
                    line(0,430,640,430);
                    displayMan(x,345,WHITE);

                    outtextxy(280, 30, "Coins            X 20");
                    circle(340,35,10);
                    setfillstyle(SOLID_FILL,YELLOW);
                    floodfill(340,35,WHITE);

                    drawCastle();
                    outtextxy(480, 230, "Junior College");

                    x=moveMan(x,y);

                }
        sceneTwoFlag= 0;
        }

}

void levelThree()
{
	 int i,x=50,y=340,z=50;
	 sceneOneFlag=1,sceneTwoFlag=1,sceneThreeFlag=1,sceneFourFlag=1;
	 setcolor(YELLOW);
	 //settextstyle(10,0,6);
   // outtextxy(150, 300, "Standard 12");
	line(100-50,100-50,120-50,150-50);
	line(100+500,100-50,120+500,150-50);
	delay(800);
	line(120-50,150-50,100-50,170-50);
	line(120+500,150-50,100+500,170-50);
	delay(800);

	line(100-50,170-50,130-50,230-50);
	line(100+500,170-50,130+500,230-50);
	delay(800);

	line(100+200,100-50,120+200,150-50);
	delay(800);
	line(120+200,150-50,100+200,170-50);
	 delay(800);
	line(100+200,170-50,130+200,230-50);
	delay(800);


    /* int d=0,shouldMove=1;

        /********************************** SCENE ONE ****************************************************/
        //Flags to ensure that the previous scene do not repeat
        if(sceneOneFlag)
        {
            //Movement before flag
            while(x<200)
            {
                cleardevice();
                line(0,430,640,430);

                outtextxy(280, 30, "Coins            X 100");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                displayMan(x,345,WHITE);
                x=moveMan(x,y);

            }
            //Flag appears
            drawFlag();
            outtextxy(220, 230, "Standard 12");
            delay(800);

            //Movement after flag
            while(x<=450)
            {
                cleardevice();
                line(0,430,640,430);
                displayMan(x,345,WHITE);

                outtextxy(280, 30, "Coins            X 100");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                drawFlag();
                outtextxy(220, 230, "Standard 12");


                x=moveMan(x,y);

            }
		setcolor(YELLOW);
		line(500,100,380,230);
		delay(800);
		line(380,230,500,300);
	 	delay(800);
		line(500,300,450,345);
		delay(800);
		setcolor(WHITE);
		outtextxy(500, 200, "Differentiation");
		delay(800);
		cleardevice();
		line(0,430,640,430);
		outtextxy(500, 200, "Differentiation");
		setcolor(WHITE);
   		 //circle(200,400,20);         //face
		line(450,345,480,385);        //body
        line(460,355,450,365);    //left hand
        line(460,355,470,365);    //right hand
        line(480,385,470,400);
		line(480,385,490,400);  //legs

		int temp=345;
        for(int i=0;i<5;i++)
        {
            cleardevice();
            line(0,430,640,430);
            outtextxy(500, 200, "Differentiation");
            setcolor(WHITE);

            outtextxy(280, 30, "Coins            X 100");
            circle(340,35,10);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(340,35,WHITE);

            line(450,345,480,385);        //body
    		line(460,355,450,365);    //left hand
    		line(460,355,470,365);    //right hand
    		line(480,385,470,400);
            line(480,385,490,400);  //legs
            circle(x-(100*i),y+(15*i),20);         //face

            temp-=50;
            circle(350,temp,15);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(350,temp,WHITE);
            line(0,430,640,430);

            delay(800);
            }

        outtextxy(280, 30, "Coins            X 50");
        circle(340,35,10);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(340,35,WHITE);
        delay(800);
	}


		/********************************** SCENE TWO ****************************************************/
		 d=0,x=50,y=340,z=50,shouldMove=1;
		 while(x<=250)
            {
                cleardevice();
                line(0,430,250,430);
                line(550,430,640,430);
                line(250,430,250,480);
                line(550,430,550,480);

                outtextxy(280, 30, "Coins            X 50");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                displayMan(x,345,WHITE);
                x=moveMan(x,y);

            }
		outtextxy(350, 450, "Organic Chem");
		delay(800);
		cleardevice();
		line(0,430,250,430);
		line(550,430,640,430);
		line(250,430,250,480);
		line(550,430,550,480);
		outtextxy(350, 450, "Organic Chem");
		jump2(x,345,50);

		int temp=getmaxy();
            for(i=0;i<100;i++)
            {
                cleardevice();
                line(0,430,250,430);
                line(550,430,640,430);
                line(250,430,250,480);
                line(550,430,550,480);
                outtextxy(350, 450, "Organic Chem");

                outtextxy(280, 30, "Coins            X 50");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                temp-=5;
                circle(350,temp,15);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(350,temp,WHITE);

                delay(50);
            }

                outtextxy(280, 30, "Coins            X 00");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);
                delay(800);

		/********************************** SCENE THREE****************************************************/

		 d=0,x=50,y=340,z=50,shouldMove=1;
		 while(x<=300)
            {
                cleardevice();
                line(0,430,640,430);

                outtextxy(280, 30, "Coins            X 00");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                displayMan(x,345,WHITE);
                x=moveMan(x,y);


            }  //Rock
    		line(400,430,500,200);
            line(500,200,600,430);
    		setfillstyle(SOLID_FILL,BROWN);
    		floodfill(440,410,WHITE);
            outtextxy(450,150, "INTEGRATION");
            delay(800);


	 while(x>=0)
            {
                cleardevice();
                line(0,430,640,430);
		//Rock
                line(400,430,500,200);
                line(500,200,600,430);
                setfillstyle(SOLID_FILL,BROWN);
                floodfill(440,410,WHITE);
                outtextxy(450,150, "INTEGRATION");

                outtextxy(280, 30, "Coins            X 00");
                circle(340,35,10);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(340,35,WHITE);

                displayMan(x,345,WHITE);
                x=moveMan2(x,y);

            }
}

void endgame()
{
	int i,x=50,y=340,z=50;
	cleardevice();
	settextstyle(3,0,5);
	outtextxy(100, 230, "Yay!!! 12th Passed");
	delay(1000);
	settextstyle(0,0,0);

	 while(x<=510)
            {
                cleardevice();
                line(0,430,640,430);
                displayMan(x,345,WHITE);


                drawCastle4();
                outtextxy(480, 230, "ENGINEERING");

                x=moveMan(x,y);

            }

           //Make man disappear through door
            displayMan(x-10,345,BLACK);
            setcolor(BLACK);
            line(x-10,y+65,x-10-d,y+90);
            line(x-10,y+65,x-10+d,y+90);
            setcolor(WHITE);
            delay(400);

            cleardevice();

		x=50,y=140,z=50;
	 while(x<=200)
            {
                cleardevice();
                line(0,230,200,230);
                line(200,230,200,480);
                displayMan(x,145,WHITE);
                setfillstyle(WIDE_DOT_FILL,BLUE);
                floodfill(100,300,WHITE);

                outtextxy(520, 100, "Engineering");
                outtextxy(520, 130 ,"Drawing");
                outtextxy(520, 200, "BEE");
                outtextxy(520, 300, "ECCF");

                x=moveMan(x,y);

            }
		outtextxy(220, 100, "This is too much");
		delay(1000);
		jump69(x,y,50);
		delay(1000);
		cleardevice();
		settextstyle(10,0,10);
		outtextxy(200, 100, "FIN.");
		delay(1000);
}
void firstSlide()
{
    settextstyle(9, 0, 4);
    outtextxy(100, 50, "COMPUTER GRAPHICS");
    settextstyle(7, 0, 3);
    outtextxy(120, 120, "LIFE OF A STICK MAN");
    displayMan3(150, 240, WHITE);
    settextstyle(8, 0, 1);
    outtextxy(450, 320, "ISHITA KOTIAN");
    outtextxy(450, 340, "FARHAN KAPADIA");
    outtextxy(450, 360, "DHRUV KARVE");
    settextstyle(0, 0, 0);
    getch();
}

int main()
{
    int gd=DETECT, gm;
    int rx,ry;
    initgraph(&gd,&gm,"\\TURBOC3\\BGI");
    cleardevice();
    firstSlide();
    levelOne();
    levelTwo();
    levelThree();
    endgame();
    getch();
    return 0;
}

