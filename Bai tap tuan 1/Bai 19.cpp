#include <iostream>
#include <math.h>
using namespace std;
int main()
{ int a,b,c;
cout <<"Nhap 3 so nguyen: ";
cin >> a >> b >> c;
	if (((a<b)&&(b<c)&&(a<c))||((a>b)&&(b>c)&&(a>c)))
	{
		cout << "True";
	}
	else cout << "False";
}
