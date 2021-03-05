#include<iostream>
using namespace std;
int main()
{
	int i;
	double n,a[100],sum=0;
	cout << "Nhap N: ";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cout << "Nhap vao so thu " << i << ": ";
		cin >> a[i];
		sum=sum+a[i];
	}
	double tb=sum/n,ps=0;
	for(i=1;i<=n;i++)
	ps=ps+(a[i]-tb)*(a[i]-tb)/(n-1);
	cout << "GT trung binh cua day so la " << tb << endl;
	cout << "Phuong sai cua day so la " << ps;
}
