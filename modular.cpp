#include <iostream>

using namespace std;

//prototype
void prosesBaca();
void prosesTukar();
void prosesTampil();

//variabel global
int a, b, temp;

//program utama
int main() {
	prosesBaca();
	prosesTukar();
	prosesTampil();
	return 0;
}

//prosesBaca
void prosesBaca() {
	cout << "Masukkan nilai A : ";
	cin >> a;
	
	cout << "Masukkan nilai B : ";
	cin >> b;
}

//prosesTukar
void prosesTukar() {
	temp = b;
	b = a;
	a = temp;
}

//prosesTampil
void prosesTampil() {
	cout << "========================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b;
	
}
