#include<iostream>
#include<math.h>
using namespace std;
int main()
	{
	    int n;
	    do
	    {
	    cout << "Nhap vao 1 so nguyen duong: ";
	    cin >> n;
	    }
	    while(n<=0);
	    if(sqrt(n)*sqrt(n)==n)
	    cout << "Day la so chinh phuong";
	    else cout << "Day khong la so chinh phuong";
	    return 0;

	}


