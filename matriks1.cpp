#include <iostream>
using namespace std;

int main(){
	int x[3][3];
	int matriks1[3][3];
	int matriks2[3][3];
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << "Matriks1 : Masukkan Baris ke- " << i <<" Kolom ke- " << j << " : ";
			cin >> matriks1[i][j];	
			
		}
	}
	
	cout << endl << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){	
			cout << "Matriks2 : Masukkan Baris ke- " << i <<" Kolom ke- " << j << " : ";
			cin >> matriks2[i][j];
			
		}
	}
	
	cout << endl << endl;
	cout << "Matriks 1	" << endl;
	cout << "============" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << matriks1[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl << endl;
	cout << "Matriks 2	" << endl;
	cout << "============" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << matriks2[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl << endl;
	cout << "Penjumlahan	" << endl;
	cout << "============" << endl;

	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			x[i][j] = matriks1[i][j] + matriks2[i][j];
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
	
}