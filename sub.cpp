#include <iostream>

using namespace std;

//prototype
void pilihan();
void proses();
	
//program utama	
int main() {
	pilihan();
	proses();
	return 0;
}

//proses pemilihan
void pilihan() {
	
	cout << "=================" << endl;
	cout << "1. Luas Lingkaran" << endl;
	cout << "2. Luas Persegi" << endl;
	cout << "=================";
	
}

//proses sesuai input
void proses() {
	int pilihan;
	while(pilihan>2) {
		cout << "\nPilihan Anda (1/2) : ";
		cin >> pilihan;
		
		if (pilihan==1) {
			cout << "=======================" << endl;
			cout << "=====Luas Lingkaran====" << endl;
			float r;
			cout << "Masukkan jari jari : ";
			cin >> r;
			float Ll = 3.14*r*r;
			cout << "Luas Lingkaran : " << Ll;
		}
		if (pilihan==2) {
			cout << "=======================" << endl;
			cout << "======Luas Persegi=====" << endl;
			float p,l;
			cout << "Masukkan Panjang : ";
			cin >> p;
			cout << "Masukkan Lebar : ";
			cin >> l;
			float Lp = p*l;
			cout << "Luas Persegi : " << Lp;
		}
	}
}
