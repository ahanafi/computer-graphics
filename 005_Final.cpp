#include <iostream>
#include <stdio.h>
#include <cmath>
#include <math.h>
#include <stdlib.h>

using namespace std;

void header()
{
    cout<<"******************************************************************\n";
    cout<<"  Nama\t:  Ahmad Hanafi\n";
    cout<<"  NIM\t:  2017102020\n";
    cout<<"  Kelas\t:  TI - SE 1/5\n";
    cout<<" Mata Kuliah\t: Grafika Komputer dan Pengolahan Citra \n";
    cout<<"******************************************************************\n\n"<<endl;

}

void bresenhamAlgorithm(int x0, int y0, int x1, int y1, int dx, int dy) {
    int __2dy = 2 * dy;
    int __2dx = 2 * dx;
    int __2dy_2dx = __2dy - __2dx;
    int x, y, p;

    int p0 = __2dy - dx;

    cout<<"\n"<<endl;
    cout<<"========================================================================= "<<endl;
    cout<<"iterasi\t|\tPk\t|\tx\t|\ty\t|\tPlot(X,Y)"<<endl;
    cout<<"========================================================================= "<<endl;
    for (int i = 0; i <= dx; ++i)
    {

        if(i > 0) {
            if(p < 0) {
                x = x + 1;
                p = p + __2dy;
                y = y;
            } else {
                p = p + __2dy_2dx;
                x = x + 1;
                y = y + 1;
            }
        } else {
            x = x0 + 1;
            y = y0 + 1;
            p = p0;
        }

        cout<<"    "<<i<<"\t|\t"<<p<<"\t|\t"<<x<<"\t|\t"<<y<<"\t|\t("<<x<<", "<<y<<")"<<endl;
    }
}

void ddaAlgorithm(float x0, float y0, float x1, float y1, int dx, int dy) {
    float step, x, y, x_inc, y_inc;

    if(abs(dx) > abs(dy)) {
        step = abs(dx);
    } else {
        step = abs(dy);
    }

    x_inc = dx / step;
    y_inc = dy / step;

    cout<<"\n"<<endl;
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

main()
{
    int kode;
    int x0, y0, x1, y1;
    char replay;

    do {
        system("cls");
        header();

        cout<<"***********************************************\n";
        cout<<" Kode | Jenis Algoritma \n";
        cout<<"***********************************************\n";
        cout<<"   1  | DDA (Digital Differential Analyze) \n";
        cout<<"   2  | Bresenham\n"<<endl;
        cout<<"***********************************************\n"<<endl;

        cout<<"Masukkan kode [1/2] : ";
        cin>>kode;

        while(kode > 2 || kode <= 0) {
            cout<<"KODE YANG ANDA INPUT SALAH!\n";
            cout<<"SILAHKAN INPUT KODE ULANG\n"<<endl;
            cout<<"Masukkan kode [1/2] : ";
            cin>>kode;
        }

        if(kode == 1 || kode == 2) {
            system("cls");
            string type_of_algorithm;
            if(kode == 1) {
                type_of_algorithm = "DDA";
            } else if(kode == 2) {
                type_of_algorithm = "BRESENHAM";
            }

            cout<<"*******************************************\n";
            cout<<" Algoritma "<<type_of_algorithm<<endl;
            cout<<"*******************************************\n"<<endl;

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

            if(kode == 1) {
                ddaAlgorithm(x0, y0, x1, y1, dx, dy);
            } else if(kode == 2) {
                bresenhamAlgorithm(x0, y0, x1, y1, dx, dy);
            }
        }

        cout<<"\n"<<endl;
        cout<<"Apakah Anda mau mengulan ? [Y/T] : ";
        cin>>replay;

    } while(replay == 'Y' || replay == 'y');

    return 0;

}
