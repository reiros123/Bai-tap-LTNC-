#include<iostream>
using namespace std;
int main()
	{
	    double x,n;
	    int y,i;
	    cout << "Nhap x va y: ";
	    cin >> x >> y;
	    n=1;
	    for(i=1;i<=y;i++)
	    n=x*n;
	    cout << "x^y = ";
	    cout << n;
	    return 0;
	}

