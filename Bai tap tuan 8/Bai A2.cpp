#include<iostream>
using namespace std;
int main( )
{
 double a[4] = {1.2,3.4,7.8,3.8};
 double *cp = &a[0];
 for (int i=0;i<4;i++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 cp+=2;
}
 return 0;
}
