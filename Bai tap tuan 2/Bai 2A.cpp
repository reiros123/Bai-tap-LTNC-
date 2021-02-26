#include<iostream>
using namespace std;
int main(){
	    int k;
	    cin >> k;
	    if(k<3) cout << k;
	    else{
	        while(k>=3)k=k/3;
	        cout << k;
	    }
	    return 0;
	}


