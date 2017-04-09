#include <iostream>

using namespace std;

//Prototype
void pilihanA();
void pilihanB();

//Program Utama
int main() {
	char pilihan;
	
		cout << "A. nilai minimum" << endl;
		cout << "B. nilai maksimum" << endl;
		cout << "C. keluar" << endl;
		cout << "Masukkan Pilihan (A/B): ";
		cin >> pilihan;
		
		if (pilihan == 'A') {
			pilihanA();
		}else if(pilihan == 'B'){
			pilihanB();
		}
	return 0;
}
//Nilai Minimum
void pilihanA() {
	int n,angka,min,jumlah_min=1;
	
	cout << "Masukkan Jumlah N : ";
	cin >> n;
	
	cout << "Masukkan Angka : ";
	cin >> angka;
	min = angka;

	for (int i = 2;i <= n;i++) {
	cout << "Masukkan Angka : ";
	cin >> angka;
	
	if (angka == min){
		jumlah_min++;
	} else if ( angka < min ){
		min = angka;
	}
	}
	cout << "Nilai Minimum : " << min << endl;
	cout << "Banyak Kemunculan Nilai Minimum : " << jumlah_min;
}

//Nilai Maximum
void pilihanB() {
	int n,angka,max,jumlah_max=1;
	
	cout << "Masukkan Jumlah N : ";
	cin >> n;
	
	cout << "Masukkan Angka : ";
	cin >> angka;
	max = angka;

	for (int i = 2;i <= n;i++) {
	cout << "Masukkan Angka : ";
	cin >> angka;
	
	if (angka == max){
		jumlah_max++;
	} else if ( angka > max ){
		max = angka;
	}
	}
	cout << "Nilai Maximum : " << max << endl;
	cout << "Banyak Kemunculan Nilai Maximum : " << jumlah_max;
}