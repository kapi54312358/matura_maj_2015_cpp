#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int const n=1000;

long long bintodec(string a){
	int i=0, j=0;
	long long pot=1, w=0;
	for(i=a.size()-1; i>0; i--){
		if(a[i]=='0') j=0;
		else j=1;	
		w+=j*pot;
		pot*=2;
	}
	
	return w;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	string a="", max_dl="";
	string LiczbaBinarna[n];
	int i=0, j=0, najkrotsze=201, najdluzsze=0, najmniejsza=0, najwieksza=0;
	long long l=0;
	
	for(i=0; i<n; i++){
		we>>LiczbaBinarna[i];
		
		a=LiczbaBinarna[i];
		if(a.size()<najkrotsze) najkrotsze=a.size();
		if(a.size()>najdluzsze) najdluzsze=a.size();
	}
	
	for(i=0; i<n; i++){
		a=LiczbaBinarna[i];
		if(a.size()==najkrotsze){
			if(bintodec(a)<bintodec(LiczbaBinarna[najmniejsza]))
				najmniejsza=i;
		}
			
		if(a.size()==najdluzsze){
			for(j=0; j<a.size(); j++){
				if(a>max_dl){
					max_dl=a;
					najwieksza=i;
					j=a.size()+1;
				}
			}
		}
	}
	
	cout<<najmniejsza+1<<endl;
	cout<<najwieksza+1<<endl;
	
	return 0;
}
