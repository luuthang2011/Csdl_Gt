#include <iostream>
#include <cstdlib>        // rand()
#include <ctime>     // thu vien time cho random
#include <fstream>  //thu vien tao file

/* using std::cin;
using std::cout; */
using namespace std;


int main () {
	ofstream GenNum ("DAYSO1.txt");   // if doc file
	srand(time(0));
	//int n = rand ();
	int n = 1 + rand()%(100);
	int i;
	GenNum << n << endl ;
	int m[n+1];
	for ( i = 0; i < n; i++) {
		//m[i] = rand ();
		m[i] = 1 + rand()%(10000000-22+1);
		GenNum << m[i] << endl;
	}
	/*GenNum << endl;
	for (i=0; i<n; i++) {
		GenNum << m[i] <<"; " << endl; 
	}*/
	
//system("pause");
return 0;
}
