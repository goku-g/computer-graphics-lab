#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

void drawcircle(int h, int k, int r)
{
    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");

    int x, y;
    float p;

    x = 0;
    y = r;

    putpixel(h, k+r, WHITE);
    putpixel(h, k-r, WHITE);
    putpixel(h-r, k, WHITE);
    putpixel(h+r, k, WHITE);

    p = (5/4) - r;

    while(x <= y)
    {
        if(p < 0)
        {
            p = (p + 2*x +3);
        }
        else
        {
            p = ( p + 2*(x -y) + 5 );
            y = y-1;
        }

        x += 1;

        putpixel(h+x, k+y, WHITE);
        putpixel(h+x, k-y, WHITE);
        putpixel(h-x, k+y, WHITE);
        putpixel(h-x, k-y, WHITE);

        putpixel(h+y, k+x, WHITE);
        putpixel(h-y, k+x, WHITE);
        putpixel(h-y, k-x, WHITE);
        putpixel(h+y, k-x, WHITE);
    }
}

int main()
{
    int x, y, r;

    cout << "Enter the circle's parameters: center (x, y) and radius 'r' \n";
    cout << "\nEnter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    cout << "\nCenter is: (" << x << ", " << y << ") \n";
    cout << "\nEnter Radius of circle: \n";
    cin >> r;

    drawcircle(x, y, r);

    getch();
    closegraph();
    return 0;
}
