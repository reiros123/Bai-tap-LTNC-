#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout <<"Nhap vao ba so a, b, c: ";
cin >> a >> b >> c;
if ((a==b)&&(b==c)&&(a==c))
cout << "True";
else cout << "False";
}
