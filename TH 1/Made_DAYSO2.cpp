// Tao day so nguyen <10000, moi so in ra 1 dong. Random cho B2

#include <iostream>
#include <cstdlib>        
#include <ctime>     
#include <fstream>  

using namespace std;

int main () {
	ofstream GenNum ("DAYSO2.txt");   
	srand(time(0));
	int n = 1 + rand()%(10000+1);
	int i;
	int m[n+1];
	for ( i = 0; i < n; i++) {
		m[i] = 1 + rand()%(10000000-0+1);
		GenNum << m[i] << endl;
	}

return 0;
}
