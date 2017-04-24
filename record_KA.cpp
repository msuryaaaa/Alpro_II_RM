#include <iostream>

using namespace std;

typedef struct{
	string hari;
	string bulan;
	string tahun;
	} tanggal;
typedef struct{
	int jam;
	int menit;
	int detik;
	}jam;
typedef struct{
	int noKA;
	string kotaAsal;
	jam jamBerangkat;
	tanggal tanggalBerangkat;
	string kotaTujuan;
	jam jamTiba;
	tanggal tanggalTiba;
	}JadwalKA;
	
int main(){
	JadwalKA KA;
	
	KA.noKA =111;
	KA.kotaAsal="Bandung";
	KA.jamBerangkat.jam=2;
	KA.jamBerangkat.menit=00;
	KA.jamBerangkat.detik=00;
	KA.tanggalBerangkat.hari="Senin";
	KA.tanggalBerangkat.bulan="April";
	KA.tanggalBerangkat.tahun="2017";
	KA.kotaTujuan="Jakarta";
	KA.jamTiba.jam=5;
	KA.jamTiba.menit=00;
	KA.jamTiba.detik=00;
	KA.tanggalTiba.hari="Senin";
	KA.tanggalTiba.bulan="April";
	KA.tanggalTiba.tahun="2017";
	
	cout<< "No KA 			: " << KA.noKA <<endl;
	cout<< "Kota Asal 		: " <<KA.kotaAsal <<endl;
	cout<< "Jam Berangkat		: " <<	KA.jamBerangkat.jam <<":"<< KA.jamBerangkat.menit <<":"<< KA.jamBerangkat.detik <<endl;
	cout<< "Tanggal Berangkat 	: " <<	KA.tanggalBerangkat.hari <<"/ "<< 	KA.tanggalBerangkat.bulan <<" - "<< 	KA.tanggalBerangkat.tahun <<endl;
	cout<< "Kota Tujuan 		: " <<KA.kotaTujuan <<endl;
	cout<< "Jam Tiba 		: " <<KA.jamTiba.jam <<":"<<KA.jamTiba.menit <<":"<< KA.jamTiba.detik <<endl;
	cout<< "Tanggal Tiba 		: " <<KA.tanggalTiba.hari <<"/ "<<KA.tanggalTiba.bulan<<" - "<<KA.tanggalTiba.tahun<<endl;
	
}