#include <iostream>

using namespace std;

//prototype
void prosesBaca();
int prosesTambah();
int prosesKurang();
void prosesTampil();

//variabel global
int a, b;

//program utama
int main() {
	prosesBaca();
	prosesTampil ();
	return 0;
}

//prosesBaca
void prosesBaca() {
	cout << "Masukkan nilai A : ";
	cin >> a;
	
	cout << "Masukkan nilai B : ";
	cin >> b;
}
//prosesTambah
int prosesTambah () {
	return a + b;
}
//prosesKurang
int prosesKurang () {
	int hasil;
	hasil = a - b;
	return hasil;
}
//prosesTampil
void prosesTampil() {
	cout << "========================" << endl;
	cout << "hasil tambah  : " << prosesTambah ()<< endl;
	cout << "hasil kurang : " << prosesKurang ();
	
}
