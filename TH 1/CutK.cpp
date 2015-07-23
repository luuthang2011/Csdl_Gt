/* d?c vào t?t c? các s? nguyên t? DAYSO2.TXT trong chu?i và l?y ra k s? (0<k<=n)
(k du?c nh?p vào t? bàn phím) ghi vào file KETQUA2.TXT du?i d?ng sau:
- M?i s? du?c ghi trên m?t dòng
- n-k dòng d?u tiên ch?a các s? th? k+1 d?n n
- K dòng ti?p theo ghi các s? th? 1 d?n k */

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
