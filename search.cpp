#include <iostream>

using namespace std;

int main(){
	int a[10],b,cari;
	
	for(int i=0; i < 10; i++){
		cout << "Masukkan Nilai, Index ke - " << i << " : ";
		cin >> a[i];
		
	}
	
	cout << "\nMasukkan Nilai yang dicari : ";
	cin >> cari;
	b=0;
	
	 for (int i=0; i<10; i++){
            if(cari == a[i]){
			cout << "Data Ditemukan" << endl;
                cout << "Nilai " << cari << " ada pada index ke - " << i << endl;
            b++;
            } 
        }
			if(b == 0 ){
				cout << "Data tidak Ditemukan " << endl;
            	cout << "angka " << cari << " tidak ada pada array";
			}
     
	return 0;
}