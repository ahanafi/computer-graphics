#include <iostream>
#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

main() {
    float x0, y0, x1, y1;
    float step;


    cout<<"ALGORITMA DDA \n"<<endl;

    cout<<"Masukkan titik X0 = ";
    cin>>x0;

    cout<<"Masukkan titik Y0 = ";
    cin>>y0;

    cout<<"Masukkan titik X1 = ";
    cin>>x1;

    cout<<"Masukkan titik Y1 = ";
    cin>>y1;

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

    cout<<"\n"<<endl;
    cout<<"============\n";
    cout<<"Ket | Nilai\n";
    cout<<"============\n";
    cout<<"X0  |  "<<x0<<"\n";
    cout<<"Y0  |  "<<y0<<"\n";
    cout<<"X1  |  "<<x1<<"\n";
    cout<<"Y1  |  "<<y1<<"\n";
    cout<<"dx  |  "<<dx<<"\n";
    cout<<"dy  |  "<<dy<<"\n";
    cout<<"step|  "<<step<<"\n";
    cout<<"x++ |  "<<x_inc<<"\n";
    cout<<"y++ |  "<<y_inc<<"\n";
    cout<<"============\n"<<endl;

    cout<<"Hasilnya adalah : \n"<<endl;

    cout<<"=========================================================== "<<endl;
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
