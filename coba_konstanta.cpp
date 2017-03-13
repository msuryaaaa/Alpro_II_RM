#include <iostream>

#define PHI 3.14 // konstanta global

using namespace std;

int main () {
	float jari_jari, luas;
	
	//konstanta lokal
	jari_jari=25;
	
	// operasi aritmatika
	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout << "Data Lingkaran";
	cout << "\nJari-jari : " << jari_jari;
	cout << "\nLuas : " << luas;
	cout << "\n";
	return 0;
	
}
