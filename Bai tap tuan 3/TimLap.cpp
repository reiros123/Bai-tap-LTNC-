#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Nhap so nguyen duong N = ";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cout << "Nhap vao so thu " << i+1 << ": ";
        cin >> a[i];
    }
    int dem=0;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
            dem++;
        }
        }
    }
    if(dem==0){
        cout << "No";
    }else{
    cout << "Yes";
    }
}
