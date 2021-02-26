#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int xA,yA,xB,yB ;
double AB;
            cout<<"Nhap Hoanh Do diem A: "; cin>> xA;
            cout<<"Nhap Tung Do diem A : "; cin>> yA;
            cout<<"Nhap Hoanh Do diem B: "; cin>> xB;
            cout<<"Nhap Tung Do diem B : "; cin>> yB;

             AB=sqrt(double((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB)));
            cout << "AB= : "<< AB;
            return 0;
}
