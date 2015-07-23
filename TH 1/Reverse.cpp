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
		ofstream made ("KETQUA1.txt");
		for (i=1; i<=n; i++) made << a[n-i] << endl;
	}
	
	
	//fclose (doc);
return 0;
}
