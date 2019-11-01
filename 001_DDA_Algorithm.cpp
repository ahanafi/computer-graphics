#include <iostream>
#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

main() {
    float x0, y0, x1, y1;
    float step;

    x0 = 20;
    y0 = 10;
    x1 = 30;
    y1 = 18;

    int dx = x1 - x0;
    int dy = y1 - y0;

    if(abs(dx) > abs(dy)) {
    	step = abs(dx);
    } else {
    	step = abs(dx);
    }

    float x_inc = dx / step;

    float x, y;
    float y_inc = dy / step;

    cout<<"iterasi | x = x + x_inc\t |  y = y + y_inc |\t Plot(X,Y)"<<endl;
    cout<<"=========================================================== "<<endl;
    for (int i = 0; i <= dx; ++i)
    {
    	if(i > 0) {
    		x = x + x_inc;
    		y = y + y_inc;
    	} else {
    		x = x0;
    		y = y0;
    	}

    	cout<<"    "<<i<<"   |\t "<<x<<"\t |\t"<<y<<"\t  |\t"<<"("<<x<<", "<<round(y)<<")"<<endl;
    }
}
