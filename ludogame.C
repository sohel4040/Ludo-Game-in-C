#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
char p1[10],p2[10],p3[10],p4[10];
int redx[57]={34,62,90,118,148,184,184,184,184,184,184,216,258,258,258,258,258,258,286,314,342,370,398,426,426,426,398,370,342,314,286,258,258,258,258,258,258,216,184,184,184,184,184,184,148,118,90,62,34,6,6,34,62,90,118,148,184};
int redy[57]={184,184,184,184,184,156,128,100,72,44,16,16,16,44,72,100,128,156,184,184,184,184,184,184,218,255,255,255,255,255,255,292,320,348,376,404,432,432,432,404,376,348,320,292,255,255,255,255,255,255,218,218,218,218,218,218,218};
int greenx[57]={258,258,258,258,258,286,314,342,370,398,426,426,426,398,370,342,314,286,258,258,258,258,258,258,216,184,184,184,184,184,184,148,118,90,62,34,6,6,6,34,62,90,118,148,184,184,184,184,184,184,216,216,216,216,216,216,216};
int greeny[57]={44,72,100,128,156,184,184,184,184,184,184,218,255,255,255,255,255,255,292,320,348,376,404,432,432,432,404,376,348,320,292,255,255,255,255,255,255,218,184,184,184,184,184,184,156,128,100,72,44,16,16,44,72,100,128,156,184};
int yellowx[57]={398,370,342,314,286,258,258,258,258,258,258,216,184,184,184,184,184,184,148,118,90,62,34,6,6,6,34,62,90,118,148,184,184,184,184,184,184,216,258,258,258,258,258,258,286,314,342,370,398,426,426,398,370,342,314,286,258};
int yellowy[57]={255,255,255,255,255,292,320,348,376,404,432,432,432,404,376,348,320,292,255,255,255,255,255,255,218,184,184,184,184,184,184,156,128,100,72,44,16,16,16,44,72,100,128,156,184,184,184,184,184,184,218,218,218,218,218,218,218};
int bluex[57]={184,184,184,184,184,148,118,90,62,34,6,6,6,34,62,90,118,148,184,184,184,184,184,184,216,258,258,258,258,258,258,286,314,342,370,398,426,426,426,398,370,342,314,286,258,258,258,258,258,258,216,216,216,216,216,216,216};
int bluey[57]={404,376,348,320,292,255,255,255,255,255,255,218,184,184,184,184,184,184,156,128,100,72,44,16,16,16,44,72,100,128,156,184,184,184,184,184,184,218,255,255,255,255,255,255,292,320,348,376,404,432,432,404,376,348,320,292,255};
int rx[4]={50,100,50,100};
int ry[4]={50,50,100,100};
int gx[4]={330,380,330,380};
int gy[4]={50,50,100,100};
int yx[4]={330,380,330,380};
int yy[4]={330,330,380,380};
int bx[4]={50,100,50,100};
int by[4]={330,330,380,380};
int d;
int r1=0,r2=0,r3=0,r4=0;
int g1=0,g2=0,g3=0,g4=0;
int y1=0,y2=0,y3=0,y4=0;
int b1=0,b2=0,b3=0,b4=0;

void call();
void secondview();
int dice();
int random_no(int,int);
void red_player();
void green_player();
void yellow_player();
void blue_player();
void firstview();
void rotation();
void red_kill();
void green_kill();
void yellow_kill();
void blue_kill();
void check();

void call()
{
      int i;
      firstview();
      clrscr();
      secondview();
      rotation();

}
void firstview()
{
	clrscr();
	setbkcolor(BLACK);
	printf("\n Enter player 1 : ");
	scanf("%s",&p1);
	clrscr();
	printf("\n Enter player 2 : ");
	scanf("%s",&p2);
	clrscr();
	printf("\n Enter player 3 : ");
	scanf("%s",&p3);
	clrscr();
	printf("\n Enter player 4 : ");
	scanf("%s",&p4);

}
void secondview()
{
	int i=0,ch;
	cleardevice();
	rectangle(1,1,450,450);

	setfillstyle(SOLID_FILL,RED);
	rectangle(1,1,170,170);
	floodfill(2,2,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	rectangle(30,30,140,140);
	floodfill(51,51,WHITE);

	setfillstyle(SOLID_FILL,GREEN);
	rectangle(280,1,450,170);
	floodfill(281,2,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	rectangle(310,30,420,140);
	floodfill(311,31,WHITE);

	setfillstyle(SOLID_FILL,BLUE);
	rectangle(1,280,170,450);
	floodfill(2,281,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	rectangle(30,310,140,420);
	floodfill(31,331,WHITE);

	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(280,280,450,450);
	floodfill(281,281,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	rectangle(310,310,420,420);
	floodfill(311,311,WHITE);

	line(210,1,210,170);
	line(210,280,210,450);
	line(240,1,240,170);
	line(240,280,240,450);

	line(1,210,170,210);
	line(1,240,170,240);
	line(280,210,450,210);
	line(280,240,450,240);

	setfillstyle(SOLID_FILL,RED);
	rectangle(170,170,280,280);//mid retangle
	line(170,170,280,280);//digonal 1
	line(280,170,170,280);//diagonal 2
	floodfill(172,177,WHITE);

	setfillstyle(SOLID_FILL,GREEN);
	rectangle(170,170,280,280);//mid retangle
	line(170,170,280,280);//digonal 1
	line(280,170,170,280);//diagonal 2
	floodfill(177,172,WHITE);

	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(170,170,280,280);//mid retangle
	line(170,170,280,280);//digonal 1
	line(280,170,170,280);//diagonal 2
	floodfill(278,177,WHITE);

	setfillstyle(SOLID_FILL,BLUE);
	rectangle(170,170,280,280);//mid retangle
	line(170,170,280,280);//digonal 1
	line(280,170,170,280);//diagonal 2
	floodfill(177,278,WHITE);


	//red path
	setfillstyle(SOLID_FILL,RED);
	line(28,170,28,280);
	line(56,170,56,280);
	line(84,170,84,280);
	line(112,170,112,280);
	line(140,170,140,280);
       for(i=29;i<170;i=i+27)
       {
	floodfill(i,238,WHITE);
       }

	//Green path
	setfillstyle(SOLID_FILL,GREEN);
	line(170,28,280,28);
	line(170,56,280,56);
	line(170,84,280,84);
	line(170,112,280,112);
	line(170,140,280,140);
	for(i=29;i<170;i=i+27)
	{
	  floodfill(238,i,WHITE);
	}
	//Yellow path
	setfillstyle(SOLID_FILL,YELLOW);
	line(308,170,308,280);
	line(336,170,336,280);
	line(364,170,364,280);
	line(392,170,392,280);
	line(420,170,420,280);
	for(i=281;i<422;i=i+27)
       {
	floodfill(i,238,WHITE);
       }
	//blue path
	setfillstyle(SOLID_FILL,BLUE);
	line(170,308,280,308);
	line(170,336,280,336);
	line(170,364,280,364);
	line(170,392,280,392);
	line(170,420,280,420);
	for(i=280;i<422;i=i+27)
	{
	     floodfill(238,i,WHITE);
	}

	setfillstyle(SOLID_FILL,RED);
	rectangle(28,170,56,210);
	floodfill(29,171,WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	rectangle(240,28,280,56);
	floodfill(253,29,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(392,240,420,280);
	floodfill(395,253,WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(170,392,210,420);
	floodfill(171,395,WHITE);
}
void rotation()
{
	int i=0,ch;
	while(1)
	{
		for(i=0;i<4;i++)
		{
			switch(i)
			{
				case 0:
					setcolor(BLACK);
					outtextxy(453,170,"\n BLUE PLAYER's CHANCE");
					setcolor(RED);
					outtextxy(453,170,"\n RED PLAYER's CHANCE");
					red_player();
					break;

				case 1:
					setcolor(BLACK);
					outtextxy(453,170,"\n RED PLAYER's CHANCE");
					setcolor(GREEN);
					outtextxy(453,170,"\n GREEN PLAYER's CHANCE");
					green_player();
					break;
				case 2:
					setcolor(BLACK);
					outtextxy(453,170,"\n GREEN PLAYER's CHANCE");
					setcolor(YELLOW);
					outtextxy(453,170,"\n YELLOW PLAYER's CHANCE");
					yellow_player();
					break;

				case 3:
					setcolor(BLACK);
					outtextxy(453,170,"\n YELLOW PLAYER's CHANCE");
					setcolor(BLUE);
					outtextxy(453,170,"\n BLUE PLAYER's CHANCE");
					blue_player();
					break;
			}
		}
	}
}
void red_player()
{
	int i=0,ch,ch1;
	outtextxy(453,200,"Press Backspace key to move the dice:");
	ch=getch();
	if(ch==8)
	{
		dice();
	}
	setcolor(RED);
	if(rx[0]==50)
		outtextxy(rx[0],ry[0],"R1");
	if(rx[1]==100)
		outtextxy(rx[1],ry[1],"R2");
	if(rx[2]==50)
		outtextxy(rx[2],ry[2],"R3");
	if(rx[3]==100)
		outtextxy(rx[3],ry[3],"R4");
	setcolor(BLACK);
	outtextxy(453,200,"Press Backspace key to move the dice :");
	setcolor(RED);
	outtextxy(470,250,"\n To move R1 press 1 : ");
	outtextxy(470,300,"\n To move R2 press 2 : ");
	outtextxy(470,350,"\n To move R3 press 3 : ");
	outtextxy(470,400,"\n To move R4 press 4 : ");
	ch1=getch();

	switch(ch1)
	{
		case 49:

			for(i=r1;i<=(r1+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(50,50,"R1");
				delay(400);
				if(rx[0]==redx[0] && ry[0]==redy[0])// || rx[0]>=redx[53] && ry[0]>=redy[53])
				setcolor(RED);
				else if(rx[0]==redx[13] && ry[0]==redy[13])
				setcolor(GREEN);
				else if(rx[0]==redx[26] && ry[0]==redy[26])
				setcolor(YELLOW);
				else if(rx[0]==redx[39] && ry[0]==redy[39])
				setcolor(BLUE);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(redx[i-1],redy[i-1],"R1");
				if(rx[0]==redx[0] && ry[0]==redy[0])// || rx[0]>=redx[53]  && ry[0]>=redy[53])
				setcolor(BLACK);
				else
				setcolor(RED);
				outtextxy(redx[i],redy[i],"R1");
				rx[0]=redx[i];
				ry[0]=redy[i];
			}
			r1=r1+d;
			break;
		case 50:
			for(i=r2;i<=(r2+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(100,50,"R2");
				delay(400);
				if(rx[1]==redx[0] && ry[1]==redy[0])// || rx[1]>=redx[53]  && ry[1]>=redy[53])
				setcolor(RED);
				else if(rx[1]==redx[13] && ry[1]==redy[13])
				setcolor(GREEN);
				else if(rx[1]==redx[26] && ry[1]==redy[26])
				setcolor(YELLOW);
				else if(rx[1]==redx[39] && ry[1]==redy[39])
				setcolor(BLUE);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(redx[i-1],redy[i-1],"R2");
				if(rx[1]==redx[0] && ry[1]==redy[0])// || rx[1]>=redx[53]  && ry[1]>=redy[53])
				setcolor(BLACK);
				else
				setcolor(RED);
				outtextxy(redx[i],redy[i],"R2");
				rx[1]=redx[i];
				ry[1]=redy[i];
			}
			r2=r2+d;
			break;

		case 51:
			for(i=r3;i<=(r3+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(50,100,"R3");
				delay(400);
				if(rx[2]==redx[0] && ry[2]==redy[0])//  || rx[2]>=redx[53] && ry[2]>=redy[53])
				setcolor(RED);
				else if(rx[2]==redx[13] && ry[2]==redy[13])
				setcolor(GREEN);
				else if(rx[2]==redx[26] && ry[2]==redy[26])
				setcolor(YELLOW);
				else if(rx[2]==redx[39] && ry[2]==redy[39])
				setcolor(BLUE);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(redx[i-1],redy[i-1],"R3");
				if(rx[2]==redx[0] && ry[2]==redy[0])// || rx[2]>=redx[53] && ry[2]>=redy[53])
				setcolor(BLACK);
				else
				setcolor(RED);
				outtextxy(redx[i],redy[i],"R3");
				rx[2]=redx[i];
				ry[2]=redy[i];
			}
			r3=r3+d;
			break;

		case 52:
			for(i=r4;i<=(r4+d)-1;i++)
			{

				setcolor(WHITE);
				outtextxy(100,100,"R4");
				delay(400);
				if(rx[3]==redx[0] && ry[3]==redy[0])// || rx[3]>=redx[53] && ry[3]>=redy[53])
				setcolor(RED);
				else if(rx[3]==redx[13] && ry[3]==redy[13])
				setcolor(GREEN);
				else if(rx[3]==redx[26] && ry[3]==redy[26])
				setcolor(YELLOW);
				else if(rx[3]==redx[39] && ry[3]==redy[39])
				setcolor(BLUE);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(redx[i-1],redy[i-1],"R4");
				if(rx[3]==redx[0] && ry[3]==redy[0])// || rx[3]>=redx[53] && ry[3]>=redy[53])
				setcolor(BLACK);
				else
				setcolor(RED);
				outtextxy(redx[i],redy[i],"R4");
				rx[3]=redx[i];
				ry[3]=redy[i];
			}
			r4=r4+d;
			break;
	}
	red_kill();
	if(d==6)
	{
		red_player();
	}
	setcolor(BLACK);
	outtextxy(470,250,"\n To move R1 press 1 : ");
	outtextxy(470,300,"\n To move R2 press 2 : ");
	outtextxy(470,350,"\n To move R3 press 3 : ");
	outtextxy(470,400,"\n To move R4 press 4 : ");
}
void green_player()
{
	int i=0,ch,ch1;
	setcolor(GREEN);
	outtextxy(453,200,"Press Backspace key to move the dice:");
	ch=getch();
	if(ch==8)
	{
		dice();
	}
	setcolor(GREEN);
	      if(gx[0]==330)
		outtextxy(gx[0],gy[0],"G1");
	      if(gx[1]==380)
		outtextxy(gx[1],gy[1],"G2");
	      if(gx[2]==330)
		outtextxy(gx[2],gy[2],"G3");
	      if(gx[3]==380)
		outtextxy(gx[3],gy[3],"G4");
	setcolor(BLACK);
	outtextxy(453,200,"Press Backspace key to move the dice:");
	setcolor(GREEN);
	outtextxy(470,250,"\n To move G1 press 1 : ");
	outtextxy(470,300,"\n To move G2 press 2 : ");
	outtextxy(470,350,"\n To move G3 press 3 : ");
	outtextxy(470,400,"\n To move G4 press 4 : ");
	ch1=getch();
	switch(ch1)
	{
		case 49:

			for(i=g1;i<=(g1+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(330,50,"G1");
				delay(400);
				if(gx[0]==greenx[0] && gy[0]==greeny[0])//  || gx[0]>=greenx[53]  && gy[0]>=greeny[53])
				setcolor(GREEN);
				else if(gx[0]==greenx[13] && gy[0]==greeny[13])
				setcolor(YELLOW);
				else if(gx[0]==greenx[26] && gy[0]==greeny[26])
				setcolor(BLUE);
				else if(gx[0]==greenx[39] && gy[0]==greeny[39])
				setcolor(RED);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(greenx[i-1],greeny[i-1],"G1");
				if(gx[0]==greenx[0] && gy[0]==greeny[0])// || gx[0]>=greenx[53]  && gy[0]>=greeny[53])
				setcolor(BLACK);
				else
				setcolor(GREEN);
				outtextxy(greenx[i],greeny[i],"G1");
				gx[0]=greenx[i];
				gy[0]=greeny[i];
			}
			g1=g1+d;
			break;
		case 50:
			for(i=g2;i<=(g2+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(380,50,"G2");
				delay(400);
				if(gx[1]==greenx[0] && gy[1]==greeny[0])// || gx[1]>=greenx[53]  && gy[1]>=greeny[53])
				setcolor(GREEN);
				else if(gx[1]==greenx[13] && gy[1]==greeny[13])
				setcolor(YELLOW);
				else if(gx[1]==greenx[26] && gy[1]==greeny[26])
				setcolor(BLUE);
				else if(gx[1]==greenx[39] && gy[1]==greeny[39])
				setcolor(RED);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(greenx[i-1],greeny[i-1],"G2");
				if(gx[1]==greenx[0] && gy[1]==greeny[0])// || gx[1]>=greenx[53]  && gy[1]>=greeny[53])
				setcolor(BLACK);
				else
				setcolor(GREEN);
				outtextxy(greenx[i],greeny[i],"G2");
				gx[1]=greenx[i];
				gy[1]=greeny[i];
			}
			g2=g2+d;
			break;
		case 51:
			for(i=g3;i<=(g3+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(330,100,"G3");
				delay(400);
				if(gx[2]==greenx[0] && gy[2]==greeny[0])// || gx[2]>=greenx[53]  && gy[2]>=greeny[53])
				setcolor(GREEN);
				else if(gx[2]==greenx[13] && gy[2]==greeny[13])
				setcolor(YELLOW);
				else if(gx[2]==greenx[26] && gy[2]==greeny[26])
				setcolor(BLUE);
				else if(gx[2]==greenx[39] && gy[2]==greeny[39])
				setcolor(RED);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(greenx[i-1],greeny[i-1],"G3");
				if(gx[2]==greenx[0] && gy[2]==greeny[0])// || gx[2]>=greenx[53]  && gy[2]>=greeny[53])
				setcolor(BLACK);
				else
				setcolor(GREEN);
				outtextxy(greenx[i],greeny[i],"G3");
				gx[2]=greenx[i];
				gy[2]=greeny[i];
			}
			g3=g3+d;
			break;
		case 52:
			for(i=g4;i<=(g4+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(380,100,"G4");
				delay(400);
				if(gx[3]==greenx[0] && gy[3]==greeny[0])// || gx[3]>=greenx[53]  && gy[3]>=greeny[53])
				setcolor(GREEN);
				else if(gx[3]==greenx[13] && gy[3]==greeny[13])
				setcolor(YELLOW);
				else if(gx[3]==greenx[26] && gy[3]==greeny[26])
				setcolor(BLUE);
				else if(gx[3]==greenx[39] && gy[3]==greeny[39])
				setcolor(RED);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(greenx[i-1],greeny[i-1],"G4");
				if(gx[3]==greenx[0] && gy[3]==greeny[0])// || gx[3]>=greenx[53]  && gy[3]>=greeny[53])
				setcolor(BLACK);
				else
				setcolor(GREEN);
				outtextxy(greenx[i],greeny[i],"G4");
				gx[3]=greenx[i];
				gy[3]=greeny[i];
			}
			g4=g4+d;
			break;
	}
	green_kill();
	if(d==6)
	{
		green_player();
	}
	setcolor(BLACK);
	outtextxy(470,250,"\n To move G1 press 1 : ");
	outtextxy(470,300,"\n To move G2 press 2 : ");
	outtextxy(470,350,"\n To move G3 press 3 : ");
	outtextxy(470,400,"\n To move G4 press 4 : ");
}
void yellow_player()
{
	int i=0,ch,ch1;
	setcolor(YELLOW);
	outtextxy(453,200,"Press Backspace key to move the dice:");
	ch=getch();
	if(ch==8)
	{
		dice();
	}
	setcolor(YELLOW);
	      if(yx[0]==330)
		outtextxy(yx[0],yy[0],"Y1");
	      if(yx[1]==380)
		outtextxy(yx[1],yy[1],"Y2");
	      if(yx[2]==330)
		outtextxy(yx[2],yy[2],"Y3");
	      if(yx[3]==380)
		outtextxy(yx[3],yy[3],"Y4");
	setcolor(BLACK);
	outtextxy(453,200,"Press Backspace key to move the dice:");
	setcolor(YELLOW);
	outtextxy(470,250,"\n To move Y1 press 1 : ");
	outtextxy(470,300,"\n To move Y2 press 2 : ");
	outtextxy(470,350,"\n To move Y3 press 3 : ");
	outtextxy(470,400,"\n To move Y4 press 4 : ");
	ch1=getch();
	switch(ch1)
	{
		case 49:
			for(i=y1;i<=(y1+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(330,330,"Y1");
				delay(400);
				if(yx[0]==yellowx[0] && yy[0]==yellowy[0])// || yx[0]>=yellowx[53]  && yy[0]>=yellowy[53])
				setcolor(YELLOW);
				else if(yx[0]==yellowx[13] && yy[0]==yellowy[13])
				setcolor(BLUE);
				else if(yx[0]==yellowx[26] && yy[0]==yellowy[26])
				setcolor(RED);
				else if(yx[0]==yellowx[39] && yy[0]==yellowy[39])
				setcolor(GREEN);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(yellowx[i-1],yellowy[i-1],"Y1");
				if(yx[0]==yellowx[0] && yy[0]==yellowy[0])// || yx[0]>=yellowx[53]  && yy[0]>=yellowy[53])
				setcolor(BLACK);
				else
				setcolor(YELLOW);
				outtextxy(yellowx[i],yellowy[i],"Y1");
				yx[0]=yellowx[i];
				yy[0]=yellowy[i];
			}
			y1=y1+d;
			break;
		case 50:
			for(i=y2;i<=(y2+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(380,330,"Y2");
				delay(400);
				if(yx[1]==yellowx[0] && yy[1]==yellowy[0])// || yx[1]>=yellowx[53]  && yy[1]>=yellowy[53])
				setcolor(YELLOW);
				else if(yx[1]==yellowx[13] && yy[1]==yellowy[13])
				setcolor(BLUE);
				else if(yx[1]==yellowx[26] && yy[1]==yellowy[26])
				setcolor(RED);
				else if(yx[1]==yellowx[39] && yy[1]==yellowy[39])
				setcolor(GREEN);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(yellowx[i-1],yellowy[i-1],"Y2");
				if(yx[1]==yellowx[0] && yy[1]==yellowy[0])// || yx[1]>=yellowx[53]  && yy[1]>=yellowy[53])
				setcolor(BLACK);
				else
				setcolor(YELLOW);
				outtextxy(yellowx[i],yellowy[i],"Y2");
				yx[1]=yellowx[i];
				yy[1]=yellowy[i];
			}
			y2=y2+d;
			break;
		case 51:
			for(i=y3;i<=(y3+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(330,380,"Y3");
				delay(400);
				if(yx[2]==yellowx[0] && yy[2]==yellowy[0])
				setcolor(YELLOW);
				else if(yx[2]==yellowx[13] && yy[2]==yellowy[13])
				setcolor(BLUE);
				else if(yx[2]==yellowx[26] && yy[2]==yellowy[26])
				setcolor(RED);
				else if(yx[2]==yellowx[39] && yy[2]==yellowy[39])
				setcolor(GREEN);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(yellowx[i-1],yellowy[i-1],"Y3");
				if(yx[2]==yellowx[0] && yy[2]==yellowy[0])// || yx[2]>=yellowx[53]  && yy[2]>=yellowy[53])
				setcolor(BLACK);
				else
				setcolor(YELLOW);
				outtextxy(yellowx[i],yellowy[i],"Y3");
				yx[2]=yellowx[i];
				yy[2]=yellowy[i];
			}
			y3=y3+d;
			break;
		case 52:
			for(i=y4;i<=(y4+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(380,380,"Y4");
				delay(400);
				if(yx[3]==yellowx[0] && yy[3]==yellowy[0])// || yx[3]>=yellowx[53]  && yy[3]>=yellowy[53])
				setcolor(YELLOW);
				else if(yx[3]==yellowx[13] && yy[3]==yellowy[13])
				setcolor(BLUE);
				else if(yx[3]==yellowx[26] && yy[3]==yellowy[26])
				setcolor(RED);
				else if(yx[3]==yellowx[39] && yy[3]==yellowy[39])
				setcolor(GREEN);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(yellowx[i-1],yellowy[i-1],"Y4");
				if(yx[3]==yellowx[0] && yy[3]==yellowy[0])// || yx[3]>=yellowx[53]  && yy[3]>=yellowy[53])
				setcolor(BLACK);
				else
				setcolor(YELLOW);
				outtextxy(yellowx[i],yellowy[i],"Y4");
				yx[3]=yellowx[i];
				yy[3]=yellowy[i];
			}
			y4=y4+d;
			break;
	}
	yellow_kill();
	if(d==6)
	{
		yellow_player();
	}
	setcolor(BLACK);
	outtextxy(470,250,"\n To move Y1 press 1 : ");
	outtextxy(470,300,"\n To move Y2 press 2 : ");
	outtextxy(470,350,"\n To move Y3 press 3 : ");
	outtextxy(470,400,"\n To move Y4 press 4 : ");
}
void blue_player()
{
	int i=0,ch,ch1;
	setcolor(BLUE);
	outtextxy(453,200,"Press Backspace key to move the dice:");
	ch=getch();
	if(ch==8)
	{
		dice();
	}
	setcolor(BLUE);
	      if(bx[0]==50)
		outtextxy(bx[0],by[0],"B1");
	      if(bx[1]==100)
		outtextxy(bx[1],by[1],"B2");
	      if(bx[2]==50)
		outtextxy(bx[2],by[2],"B3");
	      if(bx[3]==100)
		outtextxy(bx[3],by[3],"B4");
	setcolor(BLACK);
	outtextxy(453,200,"Press Backspace key to move the dice:");
	setcolor(BLUE);
	outtextxy(470,250,"\n To move B1 press 1 : ");
	outtextxy(470,300,"\n To move B2 press 2 : ");
	outtextxy(470,350,"\n To move B3 press 3 : ");
	outtextxy(470,400,"\n To move B4 press 4 : ");
	ch1=getch();
	switch(ch1)
	{
		case 49:
			for(i=b1;i<=(b1+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(50,330,"B1");
				delay(400);
				if(bx[0]==bluex[0] && by[0]==bluey[0])// || bx[0]>=bluex[53] && by[0]>=bluex[53])
				setcolor(BLUE);
				else if(bx[0]==bluex[13] && by[0]==bluey[13])
				setcolor(RED);
				else if(bx[0]==bluex[26] && by[0]==bluey[26])
				setcolor(GREEN);
				else if(bx[0]==bluex[39] && by[0]==bluey[39])
				setcolor(YELLOW);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(bluex[i-1],bluey[i-1],"B1");
				if(bx[0]==bluex[0] && by[0]==bluey[0])// || bx[0]>=bluex[53] && by[0]>=bluex[53])
				setcolor(BLACK);
				else
				setcolor(BLUE);
				outtextxy(bluex[i],bluey[i],"B1");
				bx[0]=bluex[i];
				by[0]=bluey[i];
			}
			b1=b1+d;
			break;
		case 50:
		       for(i=b2;i<=(b2+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(100,330,"B2");
				delay(400);
				if(bx[1]==bluex[0] && by[1]==bluey[0])// || bx[1]>=bluex[53]  && by[1]>=bluey[53])
				setcolor(BLUE);
				else if(bx[1]==bluex[13] && by[1]==bluey[13])
				setcolor(RED);
				else if(bx[1]==bluex[26] && by[1]==bluey[26])
				setcolor(GREEN);
				else if(bx[1]==bluex[39] && by[1]==bluey[39])
				setcolor(YELLOW);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(bluex[i-1],bluey[i-1],"B2");
				if(bx[1]==bluex[0] && by[1]==bluey[0])// || bx[1]>=bluex[53]  && by[1]>=bluey[53])
				setcolor(BLACK);
				else
				setcolor(BLUE);
				outtextxy(bluex[i],bluey[i],"B2");
				bx[1]=bluex[i];
				by[1]=bluey[i];
			}
			b2=b2+d;
			break;
		case 51:
		       for(i=b3;i<=(b3+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(50,380,"B3");
				delay(400);
				if(bx[0]==bluex[2] && by[2]==bluey[0])// || bx[2]>=bluex[53]  && by[2]>=bluey[53])
				setcolor(BLUE);
				else if(bx[2]==bluex[13] && by[2]==bluey[13])
				setcolor(RED);
				else if(bx[2]==bluex[26] && by[2]==bluey[26])
				setcolor(GREEN);
				else if(bx[2]==bluex[39] && by[2]==bluey[39])
				setcolor(YELLOW);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(bluex[i-1],bluey[i-1],"B3");
				if(bx[2]==bluex[0] && by[2]==bluey[0])// || bx[2]>=bluex[53]  && by[2]>=bluey[53])
				setcolor(BLACK);
				else
				setcolor(BLUE);
				outtextxy(bluex[i],bluey[i],"B3");
				bx[2]=bluex[i];
				by[2]=bluey[i];
			}
			b3=b3+d;
			break;
		case 52:
			for(i=b4;i<=(b4+d)-1;i++)
			{
				setcolor(WHITE);
				outtextxy(100,380,"B4");
				delay(400);
				if(bx[3]==bluex[2] && by[3]==bluey[0])// || bx[3]>=bluex[53]  && by[3]>=bluey[53])
				setcolor(BLUE);
				else if(bx[3]==bluex[13] && by[3]==bluey[13])
				setcolor(RED);
				else if(bx[3]==bluex[26] && by[3]==bluey[26])
				setcolor(GREEN);
				else if(bx[3]==bluex[39] && by[3]==bluey[39])
				setcolor(YELLOW);
				else
				setcolor(BLACK);
				if(i>1)
				outtextxy(bluex[i-1],bluey[i-1],"B4");
				if(bx[3]==bluex[0] && by[3]==bluey[0])// || bx[3]>=bluex[53]  && by[3]>=bluey[53])
				setcolor(BLACK);
				else
				setcolor(BLUE);
				outtextxy(bluex[i],bluey[i],"B4");
				bx[3]=bluex[i];
				by[3]=bluey[i];

			}
			b4=b4+d;
			break;
		}
		blue_kill();
		if(d==6)
		{
			blue_player();
		}

		setcolor(BLACK);
		outtextxy(470,250,"\n To move B1 press 1 : ");
		outtextxy(470,300,"\n To move B2 press 2 : ");
		outtextxy(470,350,"\n To move B3 press 3 : ");
		outtextxy(470,400,"\n To move B4 press 4 : ");
}
void red_kill()
{
	int j,k;

		if(rx[0]==rx[1]==rx[2]==rx[3]==redx[57] && ry[0]==ry[1]==ry[2]==ry[3]==redy[57])
		{
			   clrscr();
			   setcolor(RED);
			   settextstyle(1,0,1);
			   outtextxy(150,200,"RED Player Won the match !!..");
			   getch();
		}
		for(j=0;j<4;j++)
			{
				for(k=0;k<4;k++)
				{

					if(rx[j]==gx[k] && ry[j]==gy[k])
					{
					    if(gx[k]==redx[0] && gy[k]==redy[0])
						setcolor(RED);
					    else if(gx[k]==redx[13] && gy[k]==redy[13])
						setcolor(GREEN);
					    else if(gx[k]==redx[26] && gy[k]==redy[26])
						setcolor(YELLOW);
					    else if(gx[k]==redx[39] && gy[k]==redy[39])
						setcolor(BLUE);
					    else
						setcolor(BLACK);
					    if(k==0)
					    {
						outtextxy(gx[0],gy[0],"G1");
						gx[0]=330;
						gy[0]=50;
						g1=0;
					    }
					    else if(k==1)
					    {
						outtextxy(gx[1],gy[1],"G2");
						gx[1]=380;
						gy[1]=50;
						g2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(gx[2],gy[2],"G3");
						gx[2]=330;
						gy[2]=100;
						g3=0;
					    }
					    else
					    {
						outtextxy(gx[3],gy[3],"G4");
						gx[3]=380;
						gy[3]=100;
						g4=0;
					    }
					}
					if(rx[j]==yx[k] && ry[j]==yy[k])
					{
					    if(yx[k]==redx[0] && yy[k]==redy[0])
						setcolor(RED);
					    else if(yx[k]==redx[13] && yy[k]==redy[13])
						setcolor(GREEN);
					    else if(yx[k]==redx[26] && yy[k]==redy[26])
						setcolor(YELLOW);
					    else if(yx[k]==redx[39] && yy[k]==redy[39])
						setcolor(BLUE);
					    else
						setcolor(BLACK);
					    if(k==0)
					    {
						outtextxy(yx[0],yy[0],"Y1");
						yx[0]=330;
						yy[0]=330;
						y1=0;
					    }
					   else if(k==1)
					    {
						outtextxy(yx[1],yy[1],"Y2");
						yx[1]=380;
						yy[1]=330;
						y2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(yx[2],yy[2],"Y3");
						yx[2]=330;
						yy[2]=380;
						y3=0;
					    }
					    else
					    {
						outtextxy(yx[3],yy[3],"Y4");
						yx[3]=380;
						yy[3]=380;
						y4=0;
					    }
					}
					if(rx[j]==bx[k] && ry[j]==by[k])
					{
					    if(bx[k]==redx[0] && by[k]==redy[0])
						setcolor(RED);
					    else if(bx[k]==redx[13] && by[k]==redy[13])
						setcolor(GREEN);
					    else if(bx[k]==redx[26] && by[k]==redy[26])
						setcolor(YELLOW);
					    else if(bx[k]==redx[39] && by[k]==redy[39])
						setcolor(BLUE);
					    if(k==0)
					    {
						outtextxy(bx[0],by[0],"B1");
						bx[0]=50;
						by[0]=330;
						b1=0;
					    }
					   else if(k==1)
					    {
						outtextxy(bx[1],by[1],"B2");
						bx[1]=100;
						by[1]=330;
						b2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(bx[2],by[2],"B3");
						bx[2]=50;
						by[2]=380;
						b3=0;
					    }
					    else
					    {
						outtextxy(bx[3],by[3],"B4");
						bx[3]=100;
						by[3]=380;
						b4=0;
					    }
					}
					setcolor(RED);
					if(j==0)
					outtextxy(rx[j],ry[j],"R1");
					else if(j==1)
					outtextxy(rx[j],ry[j],"R2");
					else if(j==2)
					outtextxy(rx[j],ry[j],"R3");
					else
					outtextxy(rx[j],ry[j],"R4");

				}
			}
}
void green_kill()
{
	int j,k;
		if(gx[0]==gx[1]==gx[2]==gx[3]==greenx[57] && gy[0]==gy[1]==gy[2]==gy[3]==greeny[57])
		{
			   clrscr();
			   setcolor(GREEN);
			   settextstyle(1,0,1);
			   outtextxy(150,200,"GREEN Player Won the match !!..");
			   getch();
		}
		for(j=0;j<4;j++)
			{
				for(k=0;k<4;k++)
				{

					if(gx[j]==rx[k] && gy[j]==ry[k])
					{
					    if(rx[k]==redx[0] && ry[k]==redy[0])
						setcolor(RED);
					    else if(rx[k]==redx[13] && ry[k]==redy[13])
						setcolor(GREEN);
					    else if(rx[k]==redx[26] && ry[k]==redy[26])
						setcolor(YELLOW);
					    else if(rx[k]==redx[39] && ry[k]==redy[39])
						setcolor(BLUE);
					    else
						setcolor(BLACK);
					    if(k==0)
					    {
						outtextxy(rx[0],ry[0],"R1");
						rx[0]=50;
						ry[0]=50;
						r1=0;
					    }
					    else if(k==1)
					    {
						outtextxy(rx[1],ry[1],"R2");
						rx[1]=100;
						ry[1]=50;
						r2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(rx[2],ry[2],"R3");
						rx[2]=50;
						ry[2]=100;
						r3=0;
					    }
					    else
					    {
						outtextxy(rx[3],ry[3],"R4");
						rx[3]=100;
						ry[3]=100;
						r4=0;
					    }
					}
					if(gx[j]==yx[k] && gy[j]==yy[k])
					{
					    if(yx[k]==redx[0] && yy[k]==redy[0])
						setcolor(RED);
					    else if(yx[k]==redx[13] && yy[k]==redy[13])
						setcolor(GREEN);
					    else if(yx[k]==redx[26] && yy[k]==redy[26])
						setcolor(YELLOW);
					    else if(yx[k]==redx[39] && yy[k]==redy[39])
						setcolor(BLUE);
					    else
						setcolor(BLACK);
					    if(k==0)
					    {
						outtextxy(yx[0],yy[0],"Y1");
						yx[0]=330;
						yy[0]=330;
						y1=0;
					    }
					   else if(k==1)
					    {
						outtextxy(yx[1],yy[1],"Y2");
						yx[1]=380;
						yy[1]=330;
						y2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(yx[2],yy[2],"Y3");
						yx[2]=330;
						yy[2]=380;
						y3=0;
					    }
					    else
					    {
						outtextxy(yx[3],yy[3],"Y4");
						yx[3]=380;
						yy[3]=380;
						y4=0;
					    }
					}
					if(gx[j]==bx[k] && gy[j]==by[k])
					{
					    if(bx[k]==redx[0] && by[k]==redy[0])
						setcolor(RED);
					    else if(bx[k]==redx[13] && by[k]==redy[13])
						setcolor(GREEN);
					    else if(bx[k]==redx[26] && by[k]==redy[26])
						setcolor(YELLOW);
					    else if(bx[k]==redx[39] && by[k]==redy[39])
						setcolor(BLUE);
					    if(k==0)
					    {
						outtextxy(bx[0],by[0],"B1");
						bx[0]=50;
						by[0]=330;
						b1=0;
					    }
					   else if(k==1)
					    {
						outtextxy(bx[1],by[1],"B2");
						bx[1]=100;
						by[1]=330;
						b2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(bx[2],by[2],"B3");
						bx[2]=50;
						by[2]=380;
						b3=0;
					    }
					    else
					    {
						outtextxy(bx[3],by[3],"B4");
						bx[3]=100;
						by[3]=380;
						b4=0;
					    }
					}
					setcolor(GREEN);
					if(j==0)
					outtextxy(gx[j],gy[j],"G1");
					else if(j==1)
					outtextxy(gx[j],gy[j],"G2");
					else if(j==2)
					outtextxy(gx[j],gy[j],"G3");
					else
					outtextxy(gx[j],gy[j],"G4");

				}
			}
}
void yellow_kill()
{
		int j,k;
		if(yx[0]==yx[1]==yx[2]==yx[3]==yellowx[57] && yy[0]==yy[1]==yy[2]==yy[3]==yellowy[57])
		{
			   clrscr();
			   setcolor(YELLOW);
			   settextstyle(1,0,1);
			   outtextxy(150,200,"YELLOW Player Won the match !!..");
			   getch();
		}
		for(j=0;j<4;j++)
			{
				for(k=0;k<4;k++)
				{

					if(yx[j]==rx[k] && yy[j]==ry[k])
					{
					    if(rx[k]==redx[0] && ry[k]==redy[0])
						setcolor(RED);
					    else if(rx[k]==redx[13] && ry[k]==redy[13])
						setcolor(GREEN);
					    else if(rx[k]==redx[26] && ry[k]==redy[26])
						setcolor(YELLOW);
					    else if(rx[k]==redx[39] && ry[k]==redy[39])
						setcolor(BLUE);
					    else
						setcolor(BLACK);
					    if(k==0)
					    {
						outtextxy(rx[0],ry[0],"R1");
						rx[0]=50;
						ry[0]=50;
						r1=0;
					    }
					    else if(k==1)
					    {
						outtextxy(rx[1],ry[1],"R2");
						rx[1]=100;
						ry[1]=50;
						r2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(rx[2],ry[2],"R3");
						rx[2]=50;
						ry[2]=100;
						r3=0;
					    }
					    else
					    {
						outtextxy(rx[3],ry[3],"R4");
						rx[3]=100;
						ry[3]=100;
						r4=0;
					    }
					}
					if(yx[j]==gx[k] && yy[j]==gy[k])
					{
					    if(gx[k]==redx[0] && gy[k]==redy[0])
						setcolor(RED);
					    else if(gx[k]==redx[13] && gy[k]==redy[13])
						setcolor(GREEN);
					    else if(gx[k]==redx[26] && gy[k]==redy[26])
						setcolor(YELLOW);
					    else if(gx[k]==redx[39] && gy[k]==redy[39])
						setcolor(BLUE);
					    else
						setcolor(BLACK);
					    if(k==0)
					    {
						outtextxy(gx[0],gy[0],"G1");
						gx[0]=330;
						gy[0]=50;
						g1=0;
					    }
					    else if(k==1)
					    {
						outtextxy(gx[1],gy[1],"G2");
						gx[1]=380;
						gy[1]=50;
						g2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(gx[2],gy[2],"G3");
						gx[2]=330;
						gy[2]=100;
						g3=0;
					    }
					    else
					    {
						outtextxy(gx[3],gy[3],"G4");
						gx[3]=380;
						gy[3]=100;
						g4=0;
					    }
					}

					if(yx[j]==bx[k] && yy[j]==by[k])
					{
					    if(bx[k]==redx[0] && by[k]==redy[0])
						setcolor(RED);
					    else if(bx[k]==redx[13] && by[k]==redy[13])
						setcolor(GREEN);
					    else if(bx[k]==redx[26] && by[k]==redy[26])
						setcolor(YELLOW);
					    else if(bx[k]==redx[39] && by[k]==redy[39])
						setcolor(BLUE);
					    if(k==0)
					    {
						outtextxy(bx[0],by[0],"B1");
						bx[0]=50;
						by[0]=330;
						b1=0;
					    }
					   else if(k==1)
					    {
						outtextxy(bx[1],by[1],"B2");
						bx[1]=100;
						by[1]=330;
						b2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(bx[2],by[2],"B3");
						bx[2]=50;
						by[2]=380;
						b3=0;
					    }
					    else
					    {
						outtextxy(bx[3],by[3],"B4");
						bx[3]=100;

						by[3]=380;
						b4=0;
					    }
					}
					setcolor(YELLOW);
					if(j==0)
					outtextxy(yx[j],yy[j],"Y1");
					else if(j==1)
					outtextxy(yx[j],yy[j],"Y2");
					else if(j==2)
					outtextxy(yx[j],yy[j],"Y3");
					else
					outtextxy(yx[j],yy[j],"Y4");

				}
			}
}
void blue_kill()
{
		int j,k;
		if(bx[0]==bx[1]==bx[2]==bx[3]==bluex[57] && by[0]==by[1]==by[2]==by[3]==bluey[57])
		{
			   clrscr();
			   setcolor(BLUE);
			   settextstyle(1,0,1);
			   outtextxy(150,200,"BLUE Player Won the match !!..");
			   getch();
		}
		for(j=0;j<4;j++)
			{
				for(k=0;k<4;k++)
				{

					if(bx[j]==rx[k] && by[j]==ry[k])
					{
					    if(rx[k]==redx[0] && ry[k]==redy[0])
						setcolor(RED);
					    else if(rx[k]==redx[13] && ry[k]==redy[13])
						setcolor(GREEN);
					    else if(rx[k]==redx[26] && ry[k]==redy[26])
						setcolor(YELLOW);
					    else if(rx[k]==redx[39] && ry[k]==redy[39])
						setcolor(BLUE);
					    else
						setcolor(BLACK);
					    if(k==0)
					    {
						outtextxy(rx[0],ry[0],"R1");
						rx[0]=50;
						ry[0]=50;
						r1=0;
					    }
					    else if(k==1)
					    {
						outtextxy(rx[1],ry[1],"R2");
						rx[1]=100;
						ry[1]=50;
						r2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(rx[2],ry[2],"R3");
						rx[2]=50;
						ry[2]=100;
						r3=0;
					    }
					    else
					    {
						outtextxy(rx[3],ry[3],"R4");
						rx[3]=100;
						ry[3]=100;
						r4=0;
					    }
					}
					if(bx[j]==gx[k] && by[j]==gy[k])
					{
					    if(gx[k]==redx[0] && gy[k]==redy[0])
						setcolor(RED);
					    else if(gx[k]==redx[13] && gy[k]==redy[13])
						setcolor(GREEN);
					    else if(gx[k]==redx[26] && gy[k]==redy[26])
						setcolor(YELLOW);
					    else if(gx[k]==redx[39] && gy[k]==redy[39])
						setcolor(BLUE);
					    else
						setcolor(BLACK);
					    if(k==0)
					    {
						outtextxy(gx[0],gy[0],"G1");
						gx[0]=330;
						gy[0]=50;
						g1=0;
					    }
					    else if(k==1)
					    {
						outtextxy(gx[1],gy[1],"G2");
						gx[1]=380;
						gy[1]=50;
						g2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(gx[2],gy[2],"G3");
						gx[2]=330;
						gy[2]=100;
						g3=0;
					    }
					    else
					    {
						outtextxy(gx[3],gy[3],"G4");
						gx[3]=380;
						gy[3]=100;
						g4=0;
					    }
					}
					if(bx[j]==yx[k] && by[j]==yy[k])
					{
					    if(yx[k]==redx[0] && yy[k]==redy[0])
						setcolor(RED);
					    else if(yx[k]==redx[13] && yy[k]==redy[13])
						setcolor(GREEN);
					    else if(yx[k]==redx[26] && yy[k]==redy[26])
						setcolor(YELLOW);
					    else if(yx[k]==redx[39] && yy[k]==redy[39])
						setcolor(BLUE);
					    else
						setcolor(BLACK);
					    if(k==0)
					    {
						outtextxy(yx[0],yy[0],"Y1");
						yx[0]=330;
						yy[0]=330;
						y1=0;
					    }
					   else if(k==1)
					    {
						outtextxy(yx[1],yy[1],"Y2");
						yx[1]=380;
						yy[1]=330;
						y2=0;
					    }
					    else if(k==2)
					    {
						outtextxy(yx[2],yy[2],"Y3");
						yx[2]=330;
						yy[2]=380;
						y3=0;
					    }
					    else
					    {
						outtextxy(yx[3],yy[3],"Y4");
						yx[3]=380;
						yy[3]=380;
						y4=0;
					    }
					}

					setcolor(BLUE);
					if(j==0)
					outtextxy(bx[j],by[j],"B1");
					else if(j==1)
					outtextxy(bx[j],by[j],"B2");
					else if(j==2)
					outtextxy(bx[j],by[j],"B3");
					else
					outtextxy(bx[j],by[j],"B4");

				}
			}
}
/*
void check()
{
       if(rx[0]==bx[0])
}
*/
int dice()
{
	int i;
		setcolor(WHITE);

		bar3d(500,60,550,110,15,1);

		d=random_no(1,7);

		switch(d)
		{
			case 1:
				outtextxy(520,80," ");
				break;
			case 2:
				outtextxy(510,79,"  ");
				break;
			case 3:
				outtextxy(519,69," ");
				outtextxy(508,89,"  ");
				break;
			case 4:
				outtextxy(510,67,"  ");
				outtextxy(510,92,"  ");
				break;
			case 5:
				outtextxy(510,68,"  ");
				outtextxy(520,80," ");
				outtextxy(510,93,"  ");
				break;
			case 6:
				outtextxy(510,67,"  ");

				outtextxy(510,79,"  ");

				outtextxy(510,92,"  ");
				break;
			default:
				printf("\n invalid choice");
		}

	return d;
}
int random_no(int min, int max)
{
	int random;
	srand(time(NULL));
	random=(rand()%(max-min)+1);
	return random;
}

void main()
{
	int ch;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	clrscr();
	printf("\n -------------LUDO KING -----------------------");
	printf("\n 1.Start the game");
	printf("\n 2.How to play");
	printf("\n 2.Exit");
	printf("\n ----------------------------------------------");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			call();
			break;
		case 2:
		      exit(0);
		case 3:
		       exit(0);
		default:
			printf("\n invlaid choice");

	}


	getch();
}