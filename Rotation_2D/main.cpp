#include <iostream>
#include<math.h>
#include<graphics.h>

using namespace std;

void translate(int x1, int y1, int x2, int y2, int a)
{
    int dx, dy, nx1, ny1, nx2, ny2;

    nx1 = x1;
    ny1 = y1;

    dx = x2 - x1;
    dx = y2 - y1;

    nx2 = x1 + dx*cos(a) - dy*sin(a);
    ny2 = y1 + dx*sin(a) + dy*cos(a);

    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");

    setcolor(RED);
    line(x1, y1, x2, y2);
    setcolor(WHITE);
    line(nx1, ny1, nx2, ny2);

}


int main()
{
    int x1,y1,x2,y2,a;
    cout << "Enter x1, y1 :\n";
    cin >> x1 >> y1;
    cout << "Enter x2, y2 :\n";
    cin >> x2 >> y2;

    cout << "Give angle to rotate (a):\n";
    cin >> a;

    translate(x1, y1, x2, y2, a);

    getch();
    closegraph();
    return 0;
}
