#include <iostream>
#include<graphics.h>

using namespace std;

void translate(int x1, int y1, int x2, int y2, int tx, int ty)
{
    int nx1, ny1, nx2, ny2;

    nx1 = tx + x1;
    ny1 = ty + y1;
    nx2 = tx + x2;
    ny2 = ty + y2;

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

    int x1,y1,x2,y2,tx,ty;
    cout << "Enter x1, y1 :\n";
    cin >> x1 >> y1;
    cout << "Enter x2, y2 :\n";
    cin >> x2 >> y2;

    cout << "Give Traslating factor for x :\n";
    cin >> tx;
    cout << "Give Traslating factor for y :\n";
    cin >> ty;

    translate(x1, y1, x2, y2, tx, ty);

    getch();
    closegraph();
    return 0;
}
