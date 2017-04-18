#include <iostream>

using namespace std;

typedef struct 
{
	string 		nama;
	string		noKTP;

} Penumpang;

typedef struct 
{
	string 		noKA;
	string 		namaKA;

} Kereta;

typedef struct 
{
	string		hari;
	int 		tanggal;
	string 		bulan;
	int			tahun;
	string		jam_menit;

} Date;

typedef struct
{
	Penumpang 	penumpangKA;
	string		kota_asal;
	string		kota_tujuan;
	Date		date;
	string		biaya;

} Tiket;

int main()
{

	Kereta express = {"JPN-Parahyangan-1996", "Parahyangan"};
	Date tgl_berangkat = {"Rabu, ", 9, " Agustus ", 2017, "08 : 00 WIB"};
	Date tgl_datang = {"Jum'at, ", 18, " Agustus ", 2017, "16 : 30 WIB"};

	Tiket tiket;

	// Memasukan Nama Penumpang
	cout << endl;
	cout <<"Nama          : ";
	cin >> tiket.penumpangKA.nama;
	cout <<"NO KTP        : ";
	cin >> tiket.penumpangKA.noKTP;


	// Memilih Tiket Tujuan Keberangkatan
	cout << endl;
	cout << "            Tiket Tersedia" << endl;
	cout << endl;
	cout << "1. Bandung - Semarang    - Rp 250.000" << endl;
	cout << "2. Bandung - Malang	  - Rp 175.000" << endl;
	cout << "\n" << endl;


	int pilih = 0;
	cout << "pilih No : ";
	cin >> pilih;

	switch(pilih)
	{	
		case 1:
			tiket.kota_asal = "Bandung";
			tiket.kota_tujuan = "Semarang";
			tiket.biaya = "Rp. 250.000";
			break;
		case 2:
			tiket.kota_asal = "Bandung";
			tiket.kota_tujuan = "Malang";
			tiket.biaya = "Rp. 175.000";
			break;
		default:
			
			cout << "\nPilihan Tiket Tidak tersedia\n" <<  endl;	
			return -1; 
	};


	// Print Tiket
	cout << "           *=======================================================*" << endl;
	cout << "           *---------------------- DATA PERJALANAN ----------------*" << endl;
	cout << "           *=======================================================*" << endl;
	cout << "                NO Kereta Api            : " <<  express.noKA << endl;
	cout << "                Nama Kereta Api          : " << express.namaKA << endl;
	cout << endl;
	cout << "                Nama Penumpang           : " << tiket.penumpangKA.nama << endl;
	cout << "                NO KTP                   : " << tiket.penumpangKA.noKTP << endl;
	cout << endl;
	cout << "                Tujuan                   : " << tiket.kota_tujuan << endl;
	cout << "                Asal                     : " << tiket.kota_asal << endl;
	cout << endl;
	cout << "                Tanggal Berangkat        : " << tgl_berangkat.hari << tgl_berangkat.tanggal << tgl_berangkat.bulan << tgl_berangkat.tahun << endl;
	cout << "                Waktu                    : " << tgl_berangkat.jam_menit << endl;
	cout << endl;
	cout << "                Tanggal Tiba             : " << tgl_datang.hari << tgl_datang.tanggal << tgl_datang.bulan << tgl_datang.tahun << endl;
	cout << "                Waktu                    : " << tgl_datang.jam_menit << endl;
	cout << endl;
	cout << "                Biaya                    : " << tiket.biaya << endl;
	cout << "           *********************************************************" << endl;
	cout << "           *********************************************************" << endl;

	return 0;
}