#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=1000;

bool podzielnosc2(string a){
	if(a[a.size()-1]=='1')
		return false;
	else
		return true;
}

bool podzielnosc8(string a){
	int i=0;
	for(i=1; i<=3; i++){
		if(a[a.size()-i]=='1')
			return false;
	}
	return true;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	string a="";
	int i=0, LiczbyPodzielneNa2=0, LiczbyPodzielneNa8=0;

	for(i=0; i<n; i++){
		we>>a;
		if(podzielnosc2(a)) LiczbyPodzielneNa2++;
		if(podzielnosc8(a)) LiczbyPodzielneNa8++;
	}
	
	cout<<"Liczby podzielne na 2:"<<LiczbyPodzielneNa2<<endl;
	cout<<"Liczby podzielne na 8:"<<LiczbyPodzielneNa8;
	
	return 0;
}
