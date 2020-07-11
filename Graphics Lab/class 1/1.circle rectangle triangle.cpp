#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(1024, 700);
    circle(80, 80, 70);//(x,y,radius)
    rectangle(200, 200, 300, 130);//(left,top,right,bottom)
    line(500, 300, 400, 400);//(int x1, int y1, int x2, int y2);
    line(500, 300, 600, 400);
    line(400, 400, 600, 400);


    cin.get();
}
