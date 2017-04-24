#include <iostream>

using namespace std;

typedef struct{
	string hari;
	string bulan;
	string tahun;
	}tanggal;
	
	int main(){
		tanggal A;
		cin >> A.hari;
		cin >> A.bulan;
		cin >> A.tahun;
		
		cout <<"==================="<<endl;
		cout << "hari "<<A.hari<<endl;
		cout << "bulan "<<A.bulan<<endl;
		cout << "tahun "<<A.tahun<<endl;
		return 0;
	}