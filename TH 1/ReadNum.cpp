/*- D�ng d?u ti�n ch?a s? n l� d? d�i d�y s?
- N d�ng ti?p theo ch?a n s? nguy�n v?i m?i s? nguy�n du?c vi?t tr�n 1 d�ng
Ngo�i ra, chuong tr�nh c�n th?c hi?n nh?ng vi?c sau d�y:
a) In ra s? nguy�n cu?i c�ng c?a d�y
b) In ra s? nguy�n l?n th? hai trong d�y
c) In ra k s? nguy�n l?n nh?t trong d�y, v?i k du?c d?c v�o t? b�n ph�m */

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n;
    ifstream DocSo ("DAYSO1.txt");
    if(! DocSo) {
        cout << "Khong the mo file.\n";
        return 0;
    }
    else {
    	DocSo >> n;
        int a[n],b,i,j,k;
    	cout << "Nhap k: " ;
    	cin >> k;
        for(i = 0; i < n; i++) {
            DocSo >> a[i];
    	}
        cout << "\n1.So cuoi cung: " << a[n-1] <<endl;
        for (i=0; i<n-1 ; i++) {
        	for (j=i+1; j<n; j++ ) {
        		if (a[i]<a[j]) {
        			b = a[i];
        			a[i] = a[j];
        			a[j] = b;
        		}
        	}
        }   // day nho dan
		j=1;
        for (i=1; i<n; i++) {
        	if (a[0]==a[i]) j++;            // so cac so lon nhat
        }
        cout << "2.So lon t2: " << a[j] << endl ;
        if (k > n) {
        	cout << "3.Thieu du lieu:\n -> " <<n << " so lon nhat: " ;
        	for (i=0; i<n; i++) cout << a[i] << ",";
        } else {
        	cout << "3." <<k << " so lon nhat: " ;
        	for (i=0; i<k; i++) cout << a[i] << ",";
        }
        return 0;
    }
    
}  
