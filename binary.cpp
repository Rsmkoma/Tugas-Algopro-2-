#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	
	int angka [10] ;
	int awal=0;
	int akhir=9;
	int isian=11;
	int tengah, cari;
	char pilih;
	
	cout << "\nMasukan Data Yang di Cari = ";
	cin >> cari;
	
	pilihan:
	cout<<"Pilihan"<<endl;
	cout<<"-----------------------\n";
	cout<<"a. Menaik\n";
	cout<<"b. Menurun\n";
	cout<<"Masukan Pilihan : "; cin>>pilih;
	
	
	switch(pilih) {
		case 'a' :
		case 'A' :
			for (int o = 0; o < 10; o++){
					angka[o]=o+1;
				}
			for (int i=0;i<10;i++){
			 tengah = awal+akhir;
			 tengah = tengah/2;
				if (angka[tengah]==cari){
					cout << "Data Berhasil Ditemukan";
					return 0;
				}
					else if (angka[tengah]<cari){
						awal=tengah+1;
					}
						else akhir=tengah-1;
			}
			break;
		
		case 'b' :
		case 'B' :
			isian = 11;
			
			for (int o = 0; o < 10; o++){
					angka[o]=isian-1;
				}
			for (int i=0;i<10;i++){
			 tengah = awal+akhir;
			 tengah = tengah/2;
				if (angka[tengah]==cari){
					cout << "Data Berhasil Ditemukan!!!";
					return 0;
				}
					else if (angka[tengah]>cari){
						awal=tengah+1;
					}
						else akhir=tengah-1;
			}
		
			break;
			
		default :
			cout<<"Tidak ada pilihan"<<endl;
			goto pilihan;
			break;
	}
	
		cout<<"Maaf Data Tidak Ditemukkan";
		return 0;
		
	
}