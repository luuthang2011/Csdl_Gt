/* d?c v�o t?t c? c�c s? nguy�n t? DAYSO2.TXT trong chu?i v� l?y ra k s? (0<k<=n)
(k du?c nh?p v�o t? b�n ph�m) ghi v�o file KETQUA2.TXT du?i d?ng sau:
- M?i s? du?c ghi tr�n m?t d�ng
- n-k d�ng d?u ti�n ch?a c�c s? th? k+1 d?n n
- K d�ng ti?p theo ghi c�c s? th? 1 d?n k */

#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main () {
	FILE * doc;
	doc=fopen ("DAYSO2.txt","r");
	ifstream docx ("DAYSO2.txt");
	int n=0;
	if (!doc) {
		cout << "Loi khi mo file";
		return 0;
	}
	else {
		char c;
		do {
     		c = getc (doc);
      		if (c == '\n') n++;
    	} while (c != EOF); 
		int a[n],i;
		for (i=0; i<n; i++) {
			docx >> a[i];
		}
		int k;
		cout << "Nhap k: ";
		cin >> k;
		ofstream made ("KETQUA2.txt");
		if (k>n) {
			cout << "\n1.Thieu du lieu\n  -> xuat ra " << n << "so" << endl; 
			return 0;
		}
		else {
			cout << "\n1.Conplete" << endl;
			for (i=0; i<n-k; i++) made << a[k+i] << endl;
			for (;i<n;i++) made << a[i-n+k] << endl;
		}
		
	}
	//fclose (doc);
return 0;
}
