#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(1024, 700);
    delay(500);
    line(100, 100, 100, 600);//(int x1, int y1, int x2, int y2);
    delay(500);
    line(150, 150, 150, 310);
    delay(500);
    line(150, 360, 150, 600);
    delay(500);

    line(100, 100, 300, 100);//1
    delay(500);
    line(150, 150, 300, 150);//2
    delay(500);
    line(150, 310, 300, 310);//3 .. 160..80 half
    delay(500);
    line(150, 360, 300, 360);//4 ..130 half
    delay(500);

    arc(300, 230, 270, 90, 130);// 100 + 130(half of the distance of 1st and last horizontal line)
    delay(500);
    arc(300, 230, 270, 90, 80);
    delay(500);

    line(100, 600, 150, 600);


    cin.get();
}
