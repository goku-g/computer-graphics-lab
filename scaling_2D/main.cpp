#include <iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

void do_scaling(int x1, int y1, int x2, int y2, int sx, int sy)
{
    int nx1, ny1, nx2, ny2;

    nx1 = sx * x1;
    ny1 = sy * y1;
    nx2 = sx * x2;
    ny2 = sy * y2;

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
    int x1,y1,x2,y2,sx,sy;
    cout << "Enter x1, y1 :\n";
    cin >> x1 >> y1;
    cout << "Enter x2, y2 :\n";
    cin >> x2 >> y2;

    cout << "Give scaling factor for x :\n";
    cin >> sx;
    cout << "Give scaling factor for y :\n";
    cin >> sy;

    do_scaling(x1, y1, x2, y2, sx, sy);

    getch();
    closegraph();
    return 0;
}
