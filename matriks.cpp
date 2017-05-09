#include <iostream>
using namespace std;

int main(){
	int matriks[3][3];
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3 ; j++){
			cout << "Masukkan Baris ke-" << i << " Kolom ke-" << j << " : ";
			cin >> matriks[i][j];
		}
	}
	
	cout << endl << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3 ; j++){
			cout << matriks[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
	
}