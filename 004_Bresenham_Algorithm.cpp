#include <iostream>
#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

main() {
    int x0, y0, x1, y1;
    int step;

    cout<<"Masukkan nilai X0 = ";
    cin>>x0;
    cout<<"Masukkan nilai Y0 = ";
    cin>>y0;
    cout<<"Masukkan nilai X1 = ";
    cin>>x1;
    cout<<"Masukkan nilai Y1 = ";
    cin>>y1;

    int dx = x1 - x0;
    int dy = y1 - y0;
    int _2dy = 2 * dy;
    int _2dx = 2 * dx;
    int _2d_min_2dy = (2 * dy) - (2 * dx);
    int p0 = _2dy - dx;

    int x, y, p;

    cout<<"iterasi\t|\tPk\t|\tx\t|\ty\t|\tPlot(X,Y)"<<endl;
    cout<<"========================================================================= "<<endl;
    for (int i = 0; i <= dx; ++i)
    {

        if(i > 0) {
            if(p < 0) {
                x = x + 1;
                p = p + _2dy;
                y = y;
            } else {
                p = p + (_2dy - _2dx);
                x = x + 1;
                y = y + 1;
            }
        } else {
            x = x0 + 1;
            y = y0 + 1;
            p = p0;
        }

        //cout<<"Nilai p ke-"<<i<<" adalah p = "<<p<<endl;
    	cout<<"    "<<i<<"\t|\t"<<p<<"\t|\t"<<x<<"\t|\t"<<y<<"\t|\t("<<x<<", "<<y<<")"<<endl;
    }
}
