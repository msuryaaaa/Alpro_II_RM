#include <iostream>
#include <stdlib.h>

using namespace std;

void data ();
void pilih ();
void schedule ();
void cetak ();

typedef struct{
	string namaDep;
	string namaBel;
	string hp;
	string alamat;
	} user;
	
typedef struct{
	string hari;
	string bulan;
	string tahun;
	} tanggal;
	
typedef struct{
	int jam;
	int menit;
	int detik;
	} waktu;
	
typedef struct{
	int noKA;
	user orang;
	string kotaAsal;
	waktu jamBerangkat;
	tanggal tanggalBerangkat;
	string kotaTujuan;
	waktu jamTiba;
	tanggal tanggalTiba;
	} Jadwal;
	
Jadwal JadwalKA;
int biaya,total,ppn;

void data () {
	
	cout << "===============================================================================" << endl <<endl;
	cout << "\t\t\t PROGRAM PEMESANAN TIKET KA" 		<< endl<< endl;
	cout << "===============================================================================" << endl <<endl;
	cout << "\t\t\t Masukkan data di bawah ini!" 		<< endl << endl;
	cout << "\t\tNama depan\t:  " 	; cin >> JadwalKA.orang.namaDep;
	cout << "\t\tNama belakang\t:  "; cin >> JadwalKA.orang.namaBel;
	cout << "\t\tNo HP\t\t:  " 		; cin >> JadwalKA.orang.hp	;
	cout << "\t\tAlamat\t\t:  " 	; cin >> JadwalKA.orang.alamat;
	cout << endl;
}


void pilih () {
	int pilih1,pilih2;
	
	cout << "===============================================================================" << endl <<endl;
	cout << "\t\t\t    Pilih Stasiun Asal :" << endl << endl;
	cout << "\t\t\t\t1. Bandung" 	<< endl;
	cout << "\t\t\t\t2. Jakarta" 	<< endl;
	cout << "\t\t\t\t3. Semarang" 	<< endl;
	cout << "\t\tPilih : " ; 	cin >> pilih1;	

		if(pilih1==1){
			JadwalKA.kotaAsal="Bandung";
		}
		if(pilih1==2){
			JadwalKA.kotaAsal="Jakarta";
		}
		if(pilih1==3){
			JadwalKA.kotaAsal="Semarang" 	;
		}
		
	cout << "===============================================================================" << endl <<endl;
	cout << "\t\t\t    Pilih Stasiun Tujuan :" << endl << endl;
	cout << "\t\t\t\t1. Surabaya" 	<< endl;
	cout << "\t\t\t\t2. Malang" 	<< endl;
	cout << "\t\t\t\t3. Solo" << endl;
	cout << "\t\tPilih : " ; 	cin >> pilih2;	

		if(pilih2==1){
			JadwalKA.kotaTujuan="Surabaya";
		}
		if(pilih2==2){
			JadwalKA.kotaTujuan="Malang" ;
		}
		if(pilih2==3){
			JadwalKA.kotaTujuan="Solo";
		}

	if(pilih1==1,pilih2==1){
		biaya=250000;
	}	
	if(pilih1==1,pilih2==2){
		biaya=240000;
	}
	if(pilih1==1,pilih2==3){
		biaya=200000;
	}
	if(pilih1==2,pilih2==1){
		biaya=345000;
	}
	if(pilih1==2,pilih2==2){
		biaya=335000;
	}
	if(pilih1==2,pilih2==3){
		biaya=325000;
	}
	if(pilih1==3,pilih2==1){
		biaya=150000;
	}
	if(pilih1==3,pilih2==2){
		biaya=150000;
	}
	if(pilih1==3,pilih2==3){
		biaya=145000;
	}
	ppn = biaya*0.1;
	total=biaya;
}

void schedule () {
	
	cout << "===============================================================================" << endl <<endl;
	cout << "\t\t\t Masukkan detail pemesanan :"<< endl << endl;
	cout << "\t\tNo Kereta\t:\t" 	; 	cin >> JadwalKA.noKA;
	cout << "\t\tTgl berangkat\t:\t" << endl;
									cout << "\t\t\t\t Tanggal (hh) : " ; cin >> JadwalKA.tanggalBerangkat.hari;
									cout << "\t\t\t\t Bulan   (bb) : " ; cin >> JadwalKA.tanggalBerangkat.bulan;
									cout << "\t\t\t\t Tahun (tttt) : " ; cin >> JadwalKA.tanggalBerangkat.tahun;
	cout << "\t\tJam berangkat\t:\t" << endl;
									cout << "\t\t\t\t Jam     (jj) : " ; cin >> JadwalKA.jamBerangkat.jam;
									cout << "\t\t\t\t Menit   (mm) : " ; cin >> JadwalKA.jamBerangkat.menit;
									cout << "\t\t\t\t Detik   (dd) : " ; cin >> JadwalKA.jamBerangkat.detik;
	cout << "\t\tTgl tiba\t:\t" << endl;
									cout << "\t\t\t\t Tanggal (hh) : " ; cin >> JadwalKA.tanggalTiba.hari;
									cout << "\t\t\t\t Bulan   (bb) : " ; cin >> JadwalKA.tanggalTiba.bulan;
									cout << "\t\t\t\t Tahun (tttt) : " ; cin >> JadwalKA.tanggalTiba.tahun;
	cout << "\t\tJam tiba\t:\t" << endl;
									cout << "\t\t\t\t Jam     (jj) : " ; cin >> JadwalKA.jamTiba.jam;
									cout << "\t\t\t\t Menit   (mm) : " ; cin >> JadwalKA.jamTiba.menit;
									cout << "\t\t\t\t Detik   (dd) : " ; cin >> JadwalKA.jamTiba.detik;	
	
}

void cetak() {
	system ("cls");
	cout << "===============================================================================" << endl <<endl;
	cout << "\t\t\t STRUK PEMBAYARAN TIKET KERETA API" 		<< endl<< endl; 
	cout << "===============================================================================" << endl;
	cout << "|  No Kereta         :  " 	<< JadwalKA.noKA << "\t";
	cout << "|  Nama     :  " 			<< JadwalKA.orang.namaDep << " " << JadwalKA.orang.namaBel	<< "\t\t      |" << endl;
	cout << "|                       " 	<< "\t";
	cout << "|  No HP    :  " 			<< JadwalKA.orang.hp << "\t\t\t      |" << endl;
	cout << "|                       " 	<< "\t";
	cout << "|  Alamat   :  " 			<< JadwalKA.orang.alamat << "\t\t      |" << endl;
	cout << "|  Tanggal Berangkat :  " 	<< JadwalKA.tanggalBerangkat.hari << "/ " << JadwalKA.tanggalBerangkat.bulan << " " << JadwalKA.tanggalBerangkat.tahun << "\t\t\t\t\t      |" << endl;
	cout << "|  Kota/Jam Berangkat:  " 	<< JadwalKA.kotaAsal << "/ " << JadwalKA.jamBerangkat.jam << ":" << JadwalKA.jamBerangkat.menit << ":" << JadwalKA.jamBerangkat.detik << "\t\t\t\t      |" << endl ;
	cout << "|  Tanggal Tiba      :  " 	<< JadwalKA.tanggalTiba.hari << "/ " << JadwalKA.tanggalTiba.bulan << " " << JadwalKA.tanggalTiba.tahun << "\t\t\t\t      |" << endl;
	cout << "|  Kota/Jam Tiba     :  " 	<< JadwalKA.kotaTujuan << "/ " << JadwalKA.jamTiba.jam << ":" << JadwalKA.jamTiba.menit << ":" << JadwalKA.jamTiba.detik << "\t\t\t\t      |" << endl ;
	cout << "===============================================================================" << endl;
	cout << "|  Biaya Antar Kota  :  " 	<< biaya << "\t\t\t\t\t\t      |" << endl;
	cout << "|  PPN         	  :  10%" << "\t\t\t\t\t\t      |" << endl;
	cout << "===============================================================================" << endl;
	cout << "|  Total Biaya       :  " 	<< total-ppn << "\t\t\t\t\t\t      |" << endl;
	cout << "===============================================================================" << endl;
}
int main () {
	system ("cls");
	data();
	pilih();
	schedule();
	cetak();
	
	return 0;
}
