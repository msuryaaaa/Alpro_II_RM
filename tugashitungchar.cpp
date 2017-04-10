#include <iostream>
using namespace std;

//Program Utama
int main () {
	char nilai [10];
	int i, hasil=0 ;
	
	//Input
	for (int i=0; i< 10; i++) {
	cout << "masukkan karakter : ";
	cin >> nilai[i];
	
	//Seleksi
	if (nilai[i] == 'a' || nilai[i] == 'A'){
		hasil++;
	}
	}
	
	//Output
	cout << "hasil elemen array : ";
	for (int i=0; i< 10; i++) {
	cout << nilai [i];
		}
	cout << endl << "jumlah karakter (a/A) : " << hasil;
	}
