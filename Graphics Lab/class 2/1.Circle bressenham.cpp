#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(1024, 720);
    int x = 100;
    int r=500;
    int y;
    y=r;
    int d;
    d=3-2*r;
    while(x<=y)
    {
        putpixel(y, x, 2);
        putpixel(x, y, 2);
        putpixel(x,-y, 2);
        putpixel(y,-x, 2);
        putpixel(-y,-x,2);
        putpixel(-x,-y, 2);
        putpixel(-x, y, 2);
        putpixel(-y, x, 2);
    if(d<0)
    {
        d=d+4*x+6;
    }
    else
    {
        d=d+4*(x-y)+10;
        y--;
    }
    x++;
    }
    cin.get();
}
