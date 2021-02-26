#include <iostream>
using namespace std;
int main()
	{
	    int n;
	    cout << "Nhap n: ";
	    cin >> n;
	    for (int i=n;i>=1;i--)
	    {
	        for (int j=n-i;j>=0;j--)
	            cout << " ";
	        for (int k=1;k<=i*2-1;k++)
	        {
	            cout << "*";
	        }
	        cout << endl;
	    }
	}
