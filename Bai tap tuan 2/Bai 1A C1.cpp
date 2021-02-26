#include <iostream>
using namespace std;
int main()
	{
		int n;
		cout << "nhap vao n<=100: ";
		cin >> n;
		if ( n > 100)
			{ cout << "nhap lai n: ";
			  cin >> n ;
			}
		for ( int i=1;i<=n;i++)
		{
			if (i>0&&i%2==0)
			{
				cout << i << " ";
			}
		}
	}


