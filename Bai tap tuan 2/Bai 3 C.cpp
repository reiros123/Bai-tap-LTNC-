#include<iostream>
using namespace std;
int main()
	{
	    double a,b,c;
	    cout << "Nhap vao a, b, c la 3 canh cua mot tam giac: ";
	    cin >> a >> b >> c;
	    if(a+b<c||a+c<b || b+c<a) return 0;
	    else
	    {
	        cout << "Chu vi cua hinh tam giac la: " << a+b+c << endl;
	        if(a==b&&b==c) cout << "Day la tam giac deu";
	        else if(a*a+b*b==c*c||b*b+c*c==a*a || c*c+a*a==b*b)
	        {
	        cout << "Day la tam giac vuong";}
	        else if(a==b||b==c||a==c){ cout << "Day la tam giac can";}
	    }
	    return 0;
	}
