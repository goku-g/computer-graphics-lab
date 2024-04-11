#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

/* mid point ellipse drawing algorithm */
void drawellipse(int h, int k, int a, int b)
{
    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");

    int x, y;
    float prm1, prm2, dx, dy;

    x = 0;
    y = b;

    prm1 = (a*a)-(b*b*a)+(b*b)/4;

    dx = 2*b*b*x;
    dy = 2*a*a*y;

    while(dx < dy)
    {
        putpixel(x+h, -y+k, WHITE);
        putpixel(x+h, y+k, WHITE);
        putpixel(-x+h, y+k, WHITE);
        putpixel(-x+h, -y+k, WHITE);

        if(prm1 < 0)
        {
            x++;
            dx = dx + 2*b*b;
            prm1 = prm1 + dx + (b*b);
        }
        else
        {
            x++;
            y--;
            dx = dx + 2*b*b;
            dy = dy - 2*a*a;
            prm1 = prm1 + (dx -dy) + (b*b);
        }

    }

    //((ry * ry) * ((x + 0.5) * (x + 0.5))) +((rx * rx) * ((y - 1) * (y - 1))) - (rx * rx * ry * ry);
    prm2 = ((b * b) * ((x + 0.5)*(x + 0.5))) + ((a * a) * ((y - 1)*(y - 1))) - (a * a * b * b);

    while(y >= 0)
    {
        putpixel(x+h, -y+k, WHITE);
        putpixel(x+h, y+k, WHITE);
        putpixel(-x+h, y+k, WHITE);
        putpixel(-x+h, -y+k, WHITE);


        if( prm2 > 0)
        {
            y--;
            dy = dy - 2*a*a;
            prm2 = prm2 + a*a - dy;
        }
        else
        {
            y--;
            x++;
            dy = dy - 2*a*a;
            dx = dx + 2*b*b;
            prm2 = prm2 + (dx - dy) + a*a;
        }
    }


}

int main()
{
    int x, y, a, b;

    cout << "Enter the ellipse's parameters: center (x, y), a & b \n";
    cout << "\nEnter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    cout << "\nCenter is: (" << x << ", " << y << ") \n";
    cout << "\nEnter semi-major axis 'a': \n";
    cin >> a;
    cout << "\nEnter semi-minor axis 'b': \n";
    cin >> b;


    drawellipse(x, y, a, b);

    getch();
    closegraph();
    return 0;
}
