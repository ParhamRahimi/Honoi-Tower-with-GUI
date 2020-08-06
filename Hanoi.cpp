#include <stdio.h>
#include <conio.h>
#include "graphics.h"
int a[3][9];
void drawDisc(int size,int x,int y)
{
	int color = size;
	if (size == 1)
		color = 10;
	else if (size == 7)
		color = 11;
	else if (size == 8)
		color = 12;
	setcolor(color);
	setfillstyle(SOLID_FILL, color);
	if (x == 0)
	{
		bar(200 - 15 * size, 500 - 30 * (y + 1), 200 + 15 * size, 500 - 30 * y);
		sector(200, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(200, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size)/2);
		setfillstyle(SOLID_FILL, BLUE);
		bar(190, 500 - (30 * (y + 1) + (15 * size) / 2), 210, 500 - 30 * (y + 1));
		sector(200, 500 - 30 * (y + 1), 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, color);
	}
	if (x == 1)
	{
		bar(500 - 15 * size, 500 - 30 * (y + 1), 500 + 15 * size, 500 - 30 * y);
		sector(500, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(500, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(SOLID_FILL, BLUE);
		bar(490, 500 - (30 * (y + 1) + (15 * size) / 2), 510, 500 - 30 * (y + 1));
		sector(500, 500 - 30 * (y + 1), 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, color);
	}
	if (x == 2)
	{
		bar(800 - 15 * size, 500 - 30 * (y + 1), 800 + 15 * size, 500 - 30 * y);
		sector(800, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(800, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(SOLID_FILL, BLUE);
		bar(790, 500 - (30 * (y + 1) + (15 * size) / 2), 810, 500 - 30 * (y + 1));
		sector(800, 500 - 30 * (y + 1), 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, color);
	}
}
void clearDisc(int size, int x, int y,int usize)
{
	int color = usize;
	if (usize == 1)
		color = 10;
	if (usize == 7)
		color = 11;
	if (usize == 8)
		color = 12;
	if (usize == 15)
	{
		color = 15;
		setcolor(15);
		setfillstyle(SOLID_FILL, 15);
		if (x == 0)
		{
			bar(200 - 15 * size, 500 - 30 * (y + 1), 200 + 15 * size, 500 - 30 * y);
			sector(200, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
			setfillstyle(INTERLEAVE_FILL, 15);
			sector(200, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
//			setfillstyle(INTERLEAVE_FILL, color);
//			sector(200, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
			setcolor(BLUE);
			setfillstyle(SOLID_FILL, BLUE);
			bar(190, 50, 210, 500 - 30 * y);
			setfillstyle(INTERLEAVE_FILL, BLUE);
			sector(200, 50, 0, 360, 10, 5);
			setfillstyle(SOLID_FILL, BLUE);
			sector(200, 500 - 30 * y, 0, 360, 10, 5);
			bar(190, 500 - (30 * y  + (15 * size) / 2), 210, 500 - (30 * y - (15 * size) / 2));
			setfillstyle(SOLID_FILL, 15);
		}
		if (x == 1)
		{
			bar(500 - 15 * size, 500 - 30 * (y + 1), 500 + 15 * size, 500 - 30 * y);
			sector(500, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
			setfillstyle(INTERLEAVE_FILL, 15);
			sector(500, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
//			setfillstyle(INTERLEAVE_FILL, color);
//			sector(500, 500 - 30 * y, 0, 360, 15 * usize, (15 * usize) / 2);
			setcolor(BLUE);
			setfillstyle(SOLID_FILL, BLUE);
			bar(490, 50, 510, 500 - 30 * y);
			setfillstyle(INTERLEAVE_FILL, BLUE);
			sector(500, 50, 0, 360, 10, 5);
			setfillstyle(SOLID_FILL, BLUE);
			sector(500, 500 - 30 * y, 0, 360, 10, 5);
			bar(490, 500 - (30 * y + (15 * size) / 2), 510, 500 - (30 * y - (15 * size) / 2));
			setfillstyle(SOLID_FILL, 15);
		}
		if (x == 2)
		{
			bar(800 - 15 * size, 500 - 30 * (y + 1), 800 + 15 * size, 500 - 30 * y);
			sector(800, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
			setfillstyle(INTERLEAVE_FILL, 15);
			sector(800, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
//			setfillstyle(INTERLEAVE_FILL, color);
//			sector(800, 500 - 30 * y, 0, 360, 15 * usize, (15 * usize) / 2);
			setcolor(BLUE);
			setfillstyle(SOLID_FILL, BLUE);
			bar(790, 50, 810, 500 - 30 * y);
			setfillstyle(INTERLEAVE_FILL, BLUE);
			sector(800, 50, 0, 360, 10, 5);
			setfillstyle(SOLID_FILL, BLUE);
			sector(800, 500 - 30 * y, 0, 360, 10, 5);
			bar(790, 500 - (30 * y + (15 * size) / 2), 810, 500 - (30 * y - (15 * size) / 2));
			setfillstyle(SOLID_FILL, 15);
		}
		return;
	}
	setcolor(15);
	setfillstyle(SOLID_FILL, 15);
	if (x == 0)
	{
		bar(200 - 15 * size, 500 - 30 * (y + 1), 200 + 15 * size, 500 - 30 * y);
		sector(200, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, 15);
		sector(200, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(200, 500 - 30 * y, 0, 360, 15 * usize, (15 * usize) / 2);
		setcolor(BLUE);
		setfillstyle(SOLID_FILL, BLUE);
		bar(190, 50, 210, 500 - 30 * y);
		setfillstyle(INTERLEAVE_FILL, BLUE);
		sector(200, 50, 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, BLUE);
		sector(200, 500 - 30 * y , 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, 15);
	}
	if (x == 1)
	{
		bar(500 - 15 * size, 500 - 30 * (y + 1), 500 + 15 * size, 500 - 30 * y);
		sector(500, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, 15);
		sector(500, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(500, 500 - 30 * y, 0, 360, 15 * usize, (15 * usize) / 2);
		setcolor(BLUE);
		setfillstyle(SOLID_FILL, BLUE);
		bar(490, 50, 510, 500 - 30 * y);
		setfillstyle(INTERLEAVE_FILL, BLUE);
		sector(500, 50, 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, BLUE);
		sector(500, 500 - 30 * y, 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, 15);
	}
	if (x == 2)
	{
		bar(800 - 15 * size, 500 - 30 * (y + 1), 800 + 15 * size, 500 - 30 * y);
		sector(800, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, 15);
		sector(800, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(800, 500 - 30 * y, 0, 360, 15 * usize, (15 * usize) / 2);
		setcolor(BLUE);
		setfillstyle(SOLID_FILL, BLUE);
		bar(790, 50, 810, 500 - 30 * y);
		setfillstyle(INTERLEAVE_FILL, BLUE);
		sector(800, 50, 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, BLUE);
		sector(800, 500 - 30 * y, 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, 15);
	}
}
void Hanoi(int n, int fromcol, int tocol, int usecol)
{
    int i,j,k;
    if (n==1) 
    {
        printf("\n Move disk 1 from column %d to column %d", fromcol, tocol);
        for (i=0;i<9;i++)
            if (a[tocol][i]==0)
                break;
		a[tocol][i]=n;
		for (j=0;j<9;j++)
            if (a[fromcol][j]==0)
                break;
		clearDisc(n, fromcol, j - 1, a[fromcol][j - 2]);
		drawDisc(n, fromcol, j + 2);
		for (k = j + 3; k < 15; k++)
		{
			clearDisc(n, fromcol, k - 1, 15);
			drawDisc(n, fromcol, k);
			delay(70);
		}
		clearDisc(n, fromcol, 14, 15);
		drawDisc(n, tocol, 14);
		for (k = 14; k > i; k--)
		{
			clearDisc(n, tocol, k, 15);
			drawDisc(n, tocol, k - 1);
			delay(70);
		}
        a[fromcol][j-1]=0;
        printf("\n");
        for (i=0;i<3;i++)
        {
            for (j=0;j<9;j++)
				printf("%d ", a[i][j]);
            printf("\n");
        }
        return;
    }
    Hanoi(n-1, fromcol, usecol, tocol);
    printf("\n Move disk %d from column %d to column %d", n, fromcol, tocol);
    for (i=0;i<9;i++)
        if (a[tocol][i]==0)
            break;
    a[tocol][i]=n;
	for (j=0;j<9;j++)
        if (a[fromcol][j]==0)
            break;

	clearDisc(n, fromcol, j - 1, a[fromcol][j - 2]);
	drawDisc(n, fromcol, j + 2);
	for (k = j + 3; k < 15; k++)
	{
		clearDisc(n, fromcol, k - 1, 15);
		drawDisc(n, fromcol, k);
		delay(70);
	}
	clearDisc(n, fromcol, 14, 15);
	drawDisc(n, tocol, 14);
	for (k = 14; k > i; k--)
	{
		clearDisc(n, tocol, k, 15);
		drawDisc(n, tocol, k - 1);
		delay(70);
	}
    a[fromcol][j-1]=0;
	printf("\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
    Hanoi(n-1, usecol, tocol, fromcol);
}

int main()
{
	int n,i,j,c,x=190;
	initwindow(1000,600);
	setbkcolor(WHITE);
	clearviewport();
	setcolor(BLUE);
	setfillstyle(SOLID_FILL, BLUE);
	bar(190, 500, 210, 50);
	sector(200, 500, 0, 360, 10, 5);
	setfillstyle(INTERLEAVE_FILL, BLUE);
	sector(200, 50, 0, 360, 10, 5);
	setfillstyle(SOLID_FILL, BLUE);
	bar(490, 500, 510, 50);
	sector(500, 500, 0, 360, 10, 5);
	setfillstyle(INTERLEAVE_FILL, BLUE);
	sector(500, 50, 0, 360, 10, 5);
	setfillstyle(SOLID_FILL, BLUE);
	bar(790, 500, 810, 50);
	sector(800, 500, 0, 360, 10, 5);
	setfillstyle(INTERLEAVE_FILL, BLUE);
	sector(800, 50, 0, 360, 10, 5);
	setfillstyle(SOLID_FILL, BLACK);
	setcolor(BLACK);
	outtextxy(198, 550, "A");
	outtextxy(498, 550, "B");
	outtextxy(798, 550, "C");
	setcolor(RED);
	outtextxy(0, 0, "Parham Rahimi");
	outtextxy(0, 20, "9531031");
    printf("Please insert n:\n");
    scanf_s("%d",&n);
    for (i=0;i<9;i++)
        for (j=0;j<3;j++)
            a[j][i]=0;
    for (i=0;i<n;i++)
        a[0][i]=n-i;
	for (i = 0; i<3; i++)
		for (j = 0; j<9; j++)
			drawDisc(a[i][j], i, j);
    Hanoi(n, 0, 2, 1);
	scanf_s("%d", &c);
    return 0;
}
