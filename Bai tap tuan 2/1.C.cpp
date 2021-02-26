#include <iostream>
#include <math.h>
using namespace std;
int main()
	{
		int n;
		int a=0;
		cout << "Nhap n: ";
		cin >> n;
		if (n<2)
		{ cout << "No"; }
	    for (int i=2;i<=sqrt(n);i++){
	    	if (n%i==0){
                a++;
	    		}
	    }
	    if (a==0){ cout << "Yes";}
		else { cout <<"No";}
	}
