#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int x,y;
double khoangcach;
            cout<<"Nhap Hoanh Do: "; cin>> x;
            cout<<"Nhap Tung Do: "  ; cin>> y;
             khoangcach=sqrt(double(x*x+y*y));
            cout << "Khoang cach la : "<< khoangcach;
            return 0;
    }
