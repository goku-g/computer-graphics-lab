#include <iostream>
#include <math.h>
#include <graphics.h>
#include<stdio.h>

using namespace std;

void line_draw(int x1,int y1,int x2,int y2)
{
        int gd = DETECT, gm;

        // Initialize graphics function
        initgraph (&gd, &gm, "");

        int dy,dx,step;
        float x,y,xin,yin;

        dx = x2 - x1;
        dy = y2 - y1;

        step = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

        xin = dx / (float)step;
        yin = dy / (float)step;

        x= x1;
        y= y1;

        //putpixel(dc,x,y,WHITE);

        for(int i = 0; i <= step; i++)
        {
            putpixel(x,y,WHITE);
            x = x + xin;
            y = y + yin;
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

    line_draw(x1,y1,x2,y2);

    getch();
    closegraph();
}
