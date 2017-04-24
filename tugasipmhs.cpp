#include <iostream>

using namespace std;

bool isWithinRange(float nilai,int max,int min);

int main() {
	float ip,rataip=0,totalip=0;
	int jmlah_mahasiswa=0,lulus=0,tdklulus=0,valid;
	
	while (ip != -999){
		cin >> ip;
	valid = isWithinRange(ip,4,0);
	if (valid == true) {
			if (ip >= 2.75) {
				lulus++;
				} else {
				tdklulus++;
				}
		totalip = totalip + ip;
		jmlah_mahasiswa++;
	}
	}
	
	
	
	cout << "Jumlah Mahasiswa : " << jmlah_mahasiswa << endl;
	cout << "Jumlah Mahasiswa Yang Lulus : " << lulus << endl;
	cout << "Jumlah Mahasiswa Yang Tidak Lulus : " << tdklulus << endl;
	cout << "Rata-rata IP : " << totalip/jmlah_mahasiswa << endl;
	
	return 0;
}

bool isWithinRange(float nilai,int max,int min) {

		return nilai >= min && nilai <= max;
}