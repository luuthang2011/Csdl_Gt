/*- Dòng d?u tiên ch?a s? n là d? dài dãy s?
- N dòng ti?p theo ch?a n s? nguyên v?i m?i s? nguyên du?c vi?t trên 1 dòng
Ngoài ra, chuong trình còn th?c hi?n nh?ng vi?c sau dây:
a) In ra s? nguyên cu?i cùng c?a dãy
b) In ra s? nguyên l?n th? hai trong dãy
c) In ra k s? nguyên l?n nh?t trong dãy, v?i k du?c d?c vào t? bàn phím */

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
