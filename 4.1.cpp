#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=1000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	string a="";
	int i=0, j=0, l=0, zera=0, jedynki=0;
	
	for(i=0; i<n; i++){
		we>>a;
		zera=0, jedynki=0;
		for(j=0; j<a.size(); j++){
			if(a[j]=='0')
				zera++;
			else
				jedynki++;
		}
		if(zera>jedynki) l++;
	}
	
	cout<<l;

	return 0;
}
