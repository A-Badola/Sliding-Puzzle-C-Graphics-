/*
 ---------------------Sliding Puzzle---------------------

 This Project is made by :
		     >>	Aman Gupta_Cse 1_S.No.18
		     >>	Ankur Badola_Cse 1_S.No.08
*/
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
//#include<windows>
#define true  1
#define false 0
#define GREEN CYAN
void disp();
void printmenu(); void intro();
void levelmenu(); void easy();
void initial(int x);
void randomize(int arr[], int n);
void draw(int x, int y);
void userwin(int no); int check(int key);
int load, i, step, level, num[25], win;
void main()
{	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "..\\bgi");
	getch();
	intro();
	getch();
	levelmenu();
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	easy();
}
void levelmenu()
{	level = 0;
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	settextstyle(1, 0, 1);
	setcolor(GREEN);
	int l = getmaxy();
	int u = getmaxx();
	int wid = 30;
	rectangle(2, 2, 32, l / 4 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(3, 3, GREEN);
	rectangle(2, l / 4 + 1, 32, l / 2 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(3, l / 4 + 7, GREEN);
	rectangle(2, l / 2 + 1, 32, 3 * (l / 4) - 1);
	setfillstyle(2, MAGENTA);
	floodfill(3, l / 2 + 4, GREEN);
	rectangle(2, 3 * (l / 4) + 1, 32, l - 2);
	setfillstyle(2, LIGHTBLUE);
	floodfill(3, l - 5, GREEN);
	rectangle(34, 2, 66, l / 4 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(35, 3, GREEN);
	rectangle(34, l / 4 + 1, 66, l / 2 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(35, l / 4 + 7, GREEN);
	rectangle(34, l / 2 + 1, 66, 3 * (l / 4) - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(35, l / 2 + 4, GREEN);
	rectangle(34, 3 * (l / 4) + 1, 66, l - 2);
	setfillstyle(2, MAGENTA);
	floodfill(35, l - 5, GREEN);
	rectangle(68, 2, 98, l / 4 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(69, 5, GREEN);
	rectangle(68, l / 4 + 1, 98, l / 2 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(69, l / 4 + 7, GREEN);
	rectangle(68, l / 2 + 1, 98, 3 * (l / 4) - 1);
	setfillstyle(2, MAGENTA);
	floodfill(69, l / 2 + 4, GREEN);
	rectangle(68, 3 * (l / 4) + 1, 98, l - 2);
	setfillstyle(2, LIGHTBLUE);
	floodfill(69, l - 5, GREEN);
	rectangle(100, 2, 130, l / 4 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(102, 5, GREEN);
	rectangle(100, l / 4 + 1, 130, l / 2 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(102, l / 4 + 7, GREEN);
	rectangle(100, l / 2 + 1, 130, 3 * (l / 4) - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(102, l / 2 + 4, GREEN);
	rectangle(100, 3 * (l / 4) + 1, 130, l - 2);
	setfillstyle(2, MAGENTA);
	floodfill(102, l - 5, GREEN);
	rectangle(490, 2, 520, l / 4 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(492, 3, GREEN);
	rectangle(490, l / 4 + 1, 520, l / 2 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(492, l / 4 + 7, GREEN);
	rectangle(490, l / 2 + 1, 520, 3 * (l / 4) - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(492, l / 2 + 4, GREEN);
	rectangle(490, 3 * (l / 4) + 1, 520, l - 2);
	setfillstyle(2, MAGENTA);
	floodfill(492, l - 5, GREEN);
	rectangle(522, 2, 552, l / 4 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(524, 3, GREEN);
	rectangle(490, l / 4 + 1, 552, l / 2 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(524, l / 4 + 7, GREEN);
	rectangle(522, l / 2 + 1, 552, 3 * (l / 4) - 1);
	setfillstyle(2, MAGENTA);
	floodfill(524, l / 2 + 4, GREEN);
	rectangle(522, 3 * (l / 4) + 1, 552, l - 2);
	setfillstyle(2, LIGHTBLUE);
	floodfill(524, l - 5, GREEN);
	rectangle(554, 2, 584, l / 4 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(556, 3, GREEN);
	rectangle(554, l / 4 + 1, 584, l / 2 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(556, l / 4 + 7, GREEN);
	rectangle(554, l / 2 + 1, 584, 3 * (l / 4) - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(556, l / 2 + 4, GREEN);
	rectangle(554, 3 * (l / 4) + 1, 584, l - 2);
	setfillstyle(2, MAGENTA);
	floodfill(556, l - 5, GREEN);
	rectangle(586, 2, 616, l / 4 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(588, 3, GREEN);
	rectangle(586, l / 4 + 1, 616, l / 2 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(588, l / 4 + 7, GREEN);
	rectangle(586, l / 2 + 1, 616, 3 * (l / 4) - 1);
	setfillstyle(2, MAGENTA);
	floodfill(588, l / 2 + 4, GREEN);
	rectangle(586, 3 * (l / 4) + 1, 616, l - 2);
	setfillstyle(2, LIGHTBLUE);
	floodfill(588, l - 5, GREEN);
	outtextxy(200, 240, "Press 1 to start");
	outtextxy(200, 260, "----------------");
	outtextxy(200, 280, "1. Start");
	outtextxy(200, 300, "2. Rules");
	outtextxy(200, 330, "Enter a choice: ");
	gotoxy(45 + 4, 22);
	scanf("%d", &level);
	if (level == 2)
	{
		setcolor(BLACK);
		outtextxy(200, 240, "Press 1 to start");
		outtextxy(200, 260, "----------------");
		outtextxy(200, 280, "1. Start");
		outtextxy(200, 300, "2. Rules");
		outtextxy(200, 330, "Enter a choice: ");
		gotoxy(45 + 4, 22);

		printf("\x1b[30m2\x1b[0m");
		setcolor(GREEN);
		//

		outtextxy(135, 40, "Read the rules :");
		outtextxy(135, 80, "1: Arrange the nos in ascending order");
		outtextxy(135, 120, "2: Press the no key to move the nos");
		outtextxy(135, 160, "3: Goal : Complete the Puzzle in less ");
		outtextxy(135, 200, "   than 100 Moves");
		outtextxy(135, 240, "4: X-Exit");
		delay(3000);
		levelmenu();
	}
}
void intro()
{	int i, j;
	clrscr();
	cleardevice();	setbkcolor(BLACK);
	for (int col = 0; col < 6; col++)
	{
		setcolor(col);
		for (int k = 0; k < 6; k++) {
			line(0 + 6 * col, 0 + k + 6 * col, getmaxx() - 6 * col, 0 + k + 6 * col);
			line(0 + 6 * col, getmaxy() - k - 6 * col, getmaxx() - 6 * col, getmaxy() - k - 6 * col);
			line(getmaxx() - k - 6 * col, 0 + 6 * col, getmaxx() - k - 6 * col, getmaxy() - 6 * col);
			line(0 + k + 6 * col, 0 + 6 * col, 0 + k + 6 * col, getmaxy() - 6 * col);
			outtextxy(getmaxx() / 2 - 35, getmaxy() / 2, "Loading....");
			delay(80);
		}
		getch();
		setcolor(BLACK);
		outtextxy(getmaxx() / 2 - 35, getmaxy() / 2, "Loading....");
	}
	gotoxy (25, 12);
	settextstyle(2, 0, 6);
	for (i = 2; i <= 6; i++)
	{
		setcolor(((i - 1) % 8) % 16);
		settextstyle(1, 0, 5);
		for (int n = 0; n <= 3; n++)
		{	rectangle(140 - i, 85 - i, 490 + i, 145 + i);
		}
		setcolor((i % 8) % 16);
		outtextxy(175, 90, "Sliding Puzzle");
		outtextxy(20, 200, "");
		delay(80);
		int x = 210, y = 90, z = 190, w = 70;
		setcolor(((i + 1) % 8) % 16);
		outtextxy(x, z, "1");
		delay(80);
		outtextxy(x + y, z, "2");
		delay(80);
		outtextxy(x + 2 * y, z, "3");
		delay(80);
		outtextxy(x, z + w, "4");
		delay(80);
		outtextxy(x + y, z + w, "5");
		delay(80);
		outtextxy(x + 2 * y, z + w, "6");
		delay(80);
		outtextxy(x, z + 2 * w, "7");
		delay(80);
		outtextxy(x + y, z + 2 * w, "8");
		settextstyle(1, 0, 8);
		delay(200);
	}
}
void printmenu()
{
	int i;
	int l = getmaxy();
	rectangle(2, 2, 32, l / 4 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(3, 3, GREEN);
	rectangle(2, l / 4 + 1, 32, l / 2 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(3, l / 4 + 7, GREEN);
	rectangle(2, l / 2 + 1, 32, 3 * (l / 4) - 1);
	setfillstyle(2, MAGENTA);
	floodfill(3, l / 2 + 4, GREEN);
	rectangle(2, 3 * (l / 4) + 1, 32, l - 2);
	setfillstyle(2, LIGHTBLUE);
	floodfill(3, l - 5, GREEN);
	rectangle(34, 2, 66, l / 4 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(35, 3, GREEN);
	rectangle(34, l / 4 + 1, 66, l / 2 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(35, l / 4 + 7, GREEN);
	rectangle(34, l / 2 + 1, 66, 3 * (l / 4) - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(35, l / 2 + 4, GREEN);
	rectangle(34, 3 * (l / 4) + 1, 66, l - 2);
	setfillstyle(2, MAGENTA);
	floodfill(35, l - 5, GREEN);
	rectangle(68, 2, 98, l / 4 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(69, 5, GREEN);
	rectangle(68, l / 4 + 1, 98, l / 2 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(69, l / 4 + 7, GREEN);
	rectangle(68, l / 2 + 1, 98, 3 * (l / 4) - 1);
	setfillstyle(2, MAGENTA);
	floodfill(69, l / 2 + 4, GREEN);
	rectangle(68, 3 * (l / 4) + 1, 98, l - 2);
	setfillstyle(2, LIGHTBLUE);
	floodfill(69, l - 5, GREEN);
	rectangle(100, 2, 130, l / 4 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(102, 5, GREEN);
	rectangle(100, l / 4 + 1, 130, l / 2 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(102, l / 4 + 7, GREEN);
	rectangle(100, l / 2 + 1, 130, 3 * (l / 4) - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(102, l / 2 + 4, GREEN);
	rectangle(100, 3 * (l / 4) + 1, 130, l - 2);
	setfillstyle(2, MAGENTA);
	floodfill(102, l - 5, GREEN);
	rectangle(490, 2, 520, l / 4 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(492, 3, GREEN);
	rectangle(490, l / 4 + 1, 520, l / 2 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(492, l / 4 + 7, GREEN);
	rectangle(490, l / 2 + 1, 520, 3 * (l / 4) - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(492, l / 2 + 4, GREEN);
	rectangle(490, 3 * (l / 4) + 1, 520, l - 2);
	setfillstyle(2, MAGENTA);
	floodfill(492, l - 5, GREEN);
	rectangle(522, 2, 552, l / 4 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(524, 3, GREEN);
	rectangle(490, l / 4 + 1, 552, l / 2 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(524, l / 4 + 7, GREEN);
	rectangle(522, l / 2 + 1, 552, 3 * (l / 4) - 1);
	setfillstyle(2, MAGENTA);
	floodfill(524, l / 2 + 4, GREEN);
	rectangle(522, 3 * (l / 4) + 1, 552, l - 2);
	setfillstyle(2, LIGHTBLUE);
	floodfill(524, l - 5, GREEN);
	rectangle(554, 2, 584, l / 4 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(556, 3, GREEN);
	rectangle(554, l / 4 + 1, 584, l / 2 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(556, l / 4 + 7, GREEN);
	rectangle(554, l / 2 + 1, 584, 3 * (l / 4) - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(556, l / 2 + 4, GREEN);
	rectangle(554, 3 * (l / 4) + 1, 584, l - 2);
	setfillstyle(2, MAGENTA);
	floodfill(556, l - 5, GREEN);
	rectangle(586, 2, 616, l / 4 - 1);
	setfillstyle(2, MAGENTA);
	floodfill(588, 3, GREEN);
	rectangle(586, l / 4 + 1, 616, l / 2 - 1);
	setfillstyle(2, LIGHTBLUE);
	floodfill(588, l / 4 + 7, GREEN);
	rectangle(586, l / 2 + 1, 616, 3 * (l / 4) - 1);
	setfillstyle(2, MAGENTA);
	floodfill(588, l / 2 + 4, GREEN);
	rectangle(586, 3 * (l / 4) + 1, 616, l - 2);
	setfillstyle(2, LIGHTBLUE);
	floodfill(588, l - 5, GREEN);

	gotoxy (28, 3); printf("\x1b[35m___ Sliding Puzzle ___\x1b[0m");
	gotoxy (30, 5);
	//	for (i = 0; i < 80; i++)
	//		printf("\xcd");
	printf("\x1b[31m < X : Exit Game >\x1b[0m\n");
	//	for (i = 0; i < 80; i++)
	//	printf("\xcd");
	//	gotoxy (60, 13); printf("Moves = %d", step);
}
void easy()
{
	int i, x, y, key, valid;
	char press[2];
	if (load == false)
		initial(9);
	else
		load = false;
	do {
start:
		printmenu();
		i = 0;
		for (x = 0; x <= 2; x++)
		{
			for (y = 0; y <= 2; y++)
			{
				draw(x, y);
			}
		}
		float h = 2, w = 3;

		for (int u = 0; u < 3 * h; u += h)
		{
			for (int v = 0; v < 3 * w; v += w)
			{

				gotoxy(30 + v * w, 9 + u * h);
				if (num[i] == 0)
				{

					printf(" ");
					i++;
				}
				else
				{

					// printf("\e[0;40m");
					printf("\x1b[33m%d\x1b[0m", num[i++]);
				}
			}
		}

//----------------------------------------------------------------------------------------------
		userwin(8);
		if (win == true)
		{	cleardevice(); settextstyle(1, 0, 4);
			for (int col = 0; col < 8; col++)
			{
				setcolor(col);
				for (int k = 0; k < 8; k++) {
					line(0 + 6 * col, 0 + k + 6 * col, getmaxx() - 6 * col, 0 + k + 6 * col);
					line(0 + 6 * col, getmaxy() - k - 6 * col, getmaxx() - 6 * col, getmaxy() - k - 6 * col);
					line(getmaxx() - k - 6 * col, 0 + 6 * col, getmaxx() - k - 6 * col, getmaxy() - 6 * col);
					line(0 + k + 6 * col, 0 + 6 * col, 0 + k + 6 * col, getmaxy() - 6 * col);
					outtextxy(getmaxx() / 2 - 75, getmaxy() / 2, "YOU WON !!!");
					delay(80);
				}
				delay(50);
			}
			/*outtextxy(2, 2, "You have won the game");
			delay(2000);*/
			disp();
			delay(2000);
			win = false;
			return;
		}
		gotoxy (28, 21); printf("\x1b[34mTips\x1b[0m:");
		gotoxy (33, 22); printf("\x1b[37mNumber will move");
		gotoxy (33, 23); printf("when you key in!\x1b[0m");
		gotoxy (43, 23);
		gotoxy (33, 25); printf("\x1b[31mMOVES\x1b[0m  :  \x1b[33m%d\x1b[0m", step); fflush(stdin);
		//	gotoxy (30,32); printf("\x1b[31mPress\x1b[0m\x1b[31m X \x1b[0m\x1b[34mto exit\x1b[0m");
		press[0] = toupper(getche());
		if (press[0] == 'X')
		{
			disp();
			exit(1);
		} key = atoi(press);
		if ((valid = check(key)) == false)
			goto start;
		step++;
//--------------------------------------------------------------------------------
		if (step == 100)
		{
			cleardevice(); settextstyle(1, 0, 4);
			for (int col = 0; col < 8; col++)
			{
				setcolor(col);
				for (int k = 0; k < 8; k++) {
					line(0 + 6 * col, 0 + k + 6 * col, getmaxx() - 6 * col, 0 + k + 6 * col);
					line(0 + 6 * col, getmaxy() - k - 6 * col, getmaxx() - 6 * col, getmaxy() - k - 6 * col);
					line(getmaxx() - k - 6 * col, 0 + 6 * col, getmaxx() - k - 6 * col, getmaxy() - 6 * col);
					line(0 + k + 6 * col, 0 + 6 * col, 0 + k + 6 * col, getmaxy() - 6 * col);
					outtextxy(getmaxx() / 2 - 75, getmaxy() / 2, "YOU LOST");
					delay(80);
				}
				delay(50);
			}/*
			outtextxy(20, 200, "YOU HAVE SURPASSED MAXIMUM POSSIBLE MOVES");
			delay(1500);*/
			disp();
			delay(2500);
			exit(1);
		}
		for (i = 0; i < 9; i++)
		{
			if (num[i] == key)
				num[i] = 0;
			else if (num[i] == 0)
				num[i] = key;
		}
	} while (true);
}


void initial(int x)
{	int i, no;
	step = 0;
	no = 0 % x;
	if (no == 1)
		no += 5;
	for (i = 0; i < x; i++)
	{
		num[i] = no;
		no += 2;
		if (no >= x)
			if (!(no % 2))
				no = 1;
			else
				no = 0;
	}
	randomize(num, 9);
}

void randomize(int arr[], int n)
{
	srand(time(NULL));
	int i;
	for (i = n - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
void draw(int x, int y)
{
	//	gotoxy (x, y);
	/*	for(int k=0;k<1;k++)
	{
		rectangle(x+80*i,y,x+(i+1)*80,y+(i+1)*60);
	}*/
	/*	if (level == 1)
	{
	       //	printf("%c%c%c", 201, 205, 187);
	       //	gotoxy (x, y + 1);
	       //	printf("%c", 186);
		if (num[i] == 0)
			printf(" ");
		else        kmn,
			printf("%d", num[i]);
		printf("%c", 186);
		gotoxy (x, y + 2);
		printf("%c%c%c", 200, 205, 188);
	}*/
	int lucx = 196, lucy = 99, width = 75, height = 65;
	int xdrawleft = lucx + x * width;
	int ydrawleft = lucy + y * height;
	rectangle(xdrawleft, ydrawleft, xdrawleft + width, ydrawleft + height);
	setfillstyle(1, 0);
	floodfill(xdrawleft + 2, ydrawleft + 2, CYAN);
}
void disp()
{	cleardevice();
	setbkcolor(BLACK);
	settextstyle(1, 0, 4);
	setcolor(RED);
	outtextxy(200, 100, "CREDITS:");
	settextstyle(1, 0, 4);
	setcolor(YELLOW);
	outtextxy(200, 220, "Aman Gupta");
	outtextxy(200, 180, "Ankur Badola");
	outtextxy(200, 260, "CSE-I");
	outtextxy(200, 300, "MSIT");
	delay(30);
	getch();
}
int check(int key)
{
	int i, valid = false;
	if (level == 1)
		for (i = 0; i < 9; i++)
		{
			if (num[i] == key)
			{
				valid = true;
				switch (i)
				{
				case 0: if (num[1] != 0 && num[3] != 0)valid = false; break;
				case 1: if (num[0] != 0 && (num[2] != 0 && num[4] != 0))
						valid = false; break;
				case 2: if (num[1] != 0 && num[5] != 0)valid = false; break;
				case 3: if (num[0] != 0 && (num[4] != 0 && num[6] != 0))
						valid = false; break;
				case 4: if ((num[1] != 0 && num[3] != 0) &&
					            (num[5] != 0 && num[7] != 0))valid = false; break;
				case 5: if (num[2] != 0 && (num[4] != 0 && num[8] != 0))
						valid = false; break;
				case 6: if (num[3] != 0 && num[7] != 0)valid = false; break;
				case 7: if (num[4] != 0 && (num[6] != 0 && num[8] != 0))
						valid = false; break;
				case 8: if (num[5] != 0 && num[7] != 0)valid = false; break;
				default: valid = false; break;
				}
			}
		}
	return valid;
}
void userwin(int no)
{	int i;
	for (i = 0; i < no; i++)
		if (num[i] != i + 1)
		{
			win = false;
			break;
		}
		else
			win = true;
}
