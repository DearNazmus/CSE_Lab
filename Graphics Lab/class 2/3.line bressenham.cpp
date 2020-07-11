#include <graphics.h>
#include <stdio.h>

     int main()
	 {
	     int x1, y1, x2, y2, dx, dy, ds, dt, d, x, y;

	     int gdriver = DETECT, gmode, errorcode;

	     initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

	     x1=100;
	     x2=600;
	     y1=100;
	     y2=400;

	     x=x1;
	     y=y1;
	     dx=x2-x1;
	     dy=y2-y1;
	     dt=2*(dy-dx);
	     ds=2*dy;
	     d=2*dy-dx;

	     printf("\nUsing Bresenham's Line Algorithm");

	     putpixel(x, y, 5);// 5= color value

	     while(x<=x2)
		    {
                x=x+1;
                if(d<0)
                    d=d+ds;
                else
                {
                    y=y+1;
                    d=d+dt;
                }

			putpixel(x, y, 5);
		    }

	       getch();
	   closegraph();
}

