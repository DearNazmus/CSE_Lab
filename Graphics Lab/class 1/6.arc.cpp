#include<iostream>
#include<graphics.h>
#include <cstdlib>
using namespace std;
int main()
{
    initwindow(1024, 900);
    setlinestyle(0, 1, 8);
    arc(400, 400, 60, 300, 200); //int x, int y, int stangle, int endangle, int radius
    cin.get();
}
