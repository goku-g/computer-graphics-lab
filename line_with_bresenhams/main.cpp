#include <iostream>
#include <math.h>
#include <graphics.h>
#include<stdio.h>

using namespace std;

void line_bresenhem(int x1, int y1, int x2, int y2)
{
    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");

    int dx, dy, p, x, y, xen;
    dx=x2-x1;
    dy=y2-y1;

    if (dx >= 0 )
    {
        x = x1;
        y = y1;
        xen = x2;
    }
    else
    {
        x = x2;
        y = y2;
        xen = x1;
    }

    p=2*(dy - dx);

    while(x < xen)
    {
        if(p >= 0)
        {
            putpixel(x,y,RED);
            y = y + 1;
            p = p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,RED);
            p=p+2*dy;
        }
            x=x+1;

        delay(10);
    }
}
int main()
{

    int x1,y1,x2,y2;


    cout << "Give the value of x1,y1,x2,y2 \n";
    cout << "Value of x1:\n";
    cin >> x1;
    cout << "Value of y1:\n";
    cin >> y1;
    cout << "Value of x2:\n";
    cin >> x2;
    cout << "Value of y2:\n";
    cin >> y2;


    line_bresenhem(x1, y1, x2, y2);

    getch();
    closegraph();
}
