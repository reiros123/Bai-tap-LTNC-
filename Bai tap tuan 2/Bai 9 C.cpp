#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n bat ki: ";
    cin >> n;
    int sum=0,d;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    cout << "Tong cac chu so nguyen duong da nhap la: ";
    cout << sum;
    return 0;
}
