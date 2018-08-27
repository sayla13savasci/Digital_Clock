# include "iGraphics.h"
# include "time.h"
int a,x,hr,min,sec,count,page=0,hr1;
time_t rawtime;
struct tm* time_struct;
void drawZero()
{
	
	iLine(20+x,300,80+x,300);
	iLine(20+x,310,20+x,400);
	iLine(20+x,410,20+x,500);
	iLine(20+x,510,80+x,510);
	iLine(80+x,500,80+x,410);
	iLine(80+x,400,80+x,310);
}
void drawOne()
{
	iLine(80+x,310,80+x,400);
	iLine(80+x,410,80+x,500);
}
void drawTwo()
{
	iLine(20+x,300,80+x,300);
	iLine(20+x,310,20+x,400);
	iLine(20+x,405,80+x,405);
	iLine(80+x,410,80+x,500);
	iLine(80+x,510,20+x,510);
}
void drawThree()
{
	iLine(20+x,300,80+x,300);
	iLine(80+x,310,80+x,400);
	iLine(20+x,405,80+x,405);
	iLine(80+x,410,80+x,500);
	iLine(20+x,510,80+x,510);
}
void drawFour()
{
	iLine(20+x,405,80+x,405);
	iLine(20+x,410,20+x,500);
	iLine(80+x,410,80+x,500);
	iLine(80+x,400,80+x,310);
}
void drawFive()
{
	iLine(20+x,300,80+x,300);
	iLine(20+x,405,80+x,405);
	iLine(20+x,410,20+x,500);
	iLine(20+x,510,80+x,510);
	iLine(80+x,400,80+x,310);
}
void drawSix()
{
	iLine(20+x,300,80+x,300);
	iLine(20+x,310,20+x,400);
	iLine(20+x,405,80+x,405);
	iLine(20+x,410,20+x,500);
	iLine(20+x,510,80+x,510);
	iLine(80+x,400,80+x,310);
}
void drawSeven()
{
	iLine(20+x,510,80+x,510);
	iLine(80+x,500,80+x,410);
	iLine(80+x,400,80+x,310);
}
void drawEight()
{
	iLine(20+x,300,80+x,300);
	iLine(20+x,310,20+x,400);
	iLine(20+x,405,80+x,405);
	iLine(20+x,410,20+x,500);
	iLine(20+x,510,80+x,510);
	iLine(80+x,500,80+x,410);
	iLine(80+x,400,80+x,310);
}
void drawNine()
{
	iLine(20+x,300,80+x,300);
	iLine(20+x,405,80+x,405);
	iLine(20+x,410,20+x,500);
	iLine(20+x,510,80+x,510);
	iLine(80+x,500,80+x,410);
	iLine(80+x,400,80+x,310);
}

void iDraw()
{

	iClear();
	if(page==0)
	{
		iShowBMP(0,0,"front.bmp");

	}
	else if(page==1)
	{
	iShowBMP(0,0,"background.bmp");
	iSetColor(255,0,0);
	
	iFilledRectangle(200,330,20,20);
	iFilledRectangle(200,450,20,20);
	iFilledRectangle(430,330,20,20);
	iFilledRectangle(430,450,20,20);
	
	if(hr<=12)
	{
		x=0;
	a=hr/10;
	switch(a)
	{
		case 0:
			drawZero();
			break;
		case 1:
			drawOne();
			break;
		//case 2:
			//drawTwo();
			//break;
	}
	x=90;
	a=hr%10;
	switch(a)
	{
		case 0:
			drawZero();
			break;
		case 1:
			drawOne();
			break;
		case 2:
			drawTwo();
			break;
		case 3:
			drawThree();
			break;
		case 4:
			drawFour();
			break;
		case 5:
			drawFive();
			break;
		case 6:
			drawSix();
			break;
		case 7:
			drawSeven();
			break;
		case 8:
			drawEight();
			break;
		case 9:
			drawNine();
			break;
	}
	}
	else
	{
			x=0;
	a=hr1/10;
	switch(a)
	{
		case 0:
			drawZero();
			break;
		case 1:
			drawOne();
			break;
		//case 2:
			//drawTwo();
			//break;
	}
	x=90;
	a=hr1%10;
	switch(a)
	{
		case 0:
			drawZero();
			break;
		case 1:
			drawOne();
			break;
		case 2:
			drawTwo();
			break;
		case 3:
			drawThree();
			break;
		case 4:
			drawFour();
			break;
		case 5:
			drawFive();
			break;
		case 6:
			drawSix();
			break;
		case 7:
			drawSeven();
			break;
		case 8:
			drawEight();
			break;
		case 9:
			drawNine();
			break;
	}
	}

	x=230;
	a=min/10;
	switch(a)
	{
		case 0:
			drawZero();
			break;
		case 1:
			drawOne();
			break;
		case 2:
			drawTwo();
			break;
		case 3:
			drawThree();
			break;
		case 4:
			drawFour();
			break;
		case 5:
			drawFive();
			break;
	}

	x=320;
	a=min%10;
	switch(a)
	{
		case 0:
			drawZero();
			break;
		case 1:
			drawOne();
			break;
		case 2:
			drawTwo();
			break;
		case 3:
			drawThree();
			break;
		case 4:
			drawFour();
			break;
		case 5:
			drawFive();
			break;
		case 6:
			drawSix();
			break;
		case 7:
			drawSeven();
			break;
		case 8:
			drawEight();
			break;
		case 9:
			drawNine();
			break;
	}

	x=460;
	a=sec/10;
	switch(a)
	{
		case 0:
			drawZero();
			break;
		case 1:
			drawOne();
			break;
		case 2:
			drawTwo();
			break;
		case 3:
			drawThree();
			break;
		case 4:
			drawFour();
			break;
		case 5:
			drawFive();
			break;
	}
	
	x=550;
	a=sec%10;
	switch(a)
	{
		case 0:
			drawZero();
			break;
		case 1:
			drawOne();
			break;
		case 2:
			drawTwo();
			break;
		case 3:
			drawThree();
			break;
		case 4:
			drawFour();
			break;
		case 5:
			drawFive();
			break;
		case 6:
			drawSix();
			break;
		case 7:
			drawSeven();
			break;
		case 8:
			drawEight();
			break;
		case 9:
			drawNine();
			break;
	}
	
	//if(count%2!=0)
	//	iText(650,300,"am",GLUT_BITMAP_TIMES_ROMAN_24);
	//else
	//	iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	if(hr>=0 && hr<=12)
		iText(650,300,"am",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==13)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==14)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==15)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==16)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==17)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==18)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==19)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==20)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==21)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==22)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==23)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	else if(hr==24)
		iText(650,300,"pm",GLUT_BITMAP_TIMES_ROMAN_24);
	
	}
	else if(page==2)
	{
		iSetColor(255,255,255);
		iShowBMP(0,0,"credits.bmp");
		iRectangle(42,55,154,63);
	}
}


/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(page==0)
		{
			if((mx>=218 && mx<=473) && (my>=257 && my<=324))
			{
				page=1;
				PlaySound("sound.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			else if((mx>=220 && mx<=478) && (my>=155 && my<=222))
				page=2;
			else if((mx>=220 && mx<=480) && (my>=55 && my<=122))
				exit(0);
		}
		else if(page==2)
		{
			if((mx>=42 && mx<=196) && (my>=55 && my<=118))
				page=0;
		}
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}

void iChange()
{
	time(&rawtime);
	struct tm *tm_struct = localtime(&rawtime);
	min = tm_struct->tm_min;
	hr = tm_struct->tm_hour;
	sec = tm_struct->tm_sec;
	
	if(hr==13)
	{
		hr1=1;
	}
	else if(hr==14)
	{
		hr1=2;
		
	}
	else if(hr==15)
	{
		hr1=3;
		
	}
	else if(hr==16)
	{
		hr1=4;
		
	}
	else if(hr==17)
	{
		hr1=5;
	}
	else if(hr==18)
	{
		hr1=6;
	}
	else if(hr==19)
	{
		hr1=7;
	}
	else if(hr==20)
	{
		hr1=8;
	}
	else if(hr==21)
	{
		hr1=9;
	}
	else if(hr==22)
	{
		hr1=10;
	}
	else if(hr==23)
	{
		hr1=11;
	}
	else if(hr==24)
	{
		hr1=12;
	}
	/*
	sec++;
	min+=sec/60;
	hr+=min/60;
	sec=sec%60;
	min=min%60;
	if(hr==12)
	{	
		hr=0;
		//count++;
	}*/
}

int main()
{
	time(&rawtime);
	struct tm *tm_struct = localtime(&rawtime);

	min = tm_struct->tm_min;
	hr = tm_struct->tm_hour;
	sec = tm_struct->tm_sec;
	
	count = 0;
	x=0;
	//sec=0;
	/*printf("Hour:");
	scanf("%d",&hr);
	printf("Minute:");
	scanf("%d",&min);
	printf("\nAM - press 1\nPM - press 2\n");
	scanf("%d",&count);*/
	iSetTimer(1000,iChange);
	iInitialize(800, 700, "Digital clock");
	return 0;
}
