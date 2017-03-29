#include <iostream>
	using namespace std;

//Prototype
  bool isWithinRange(float ip, int min, int max);
  void ProsesCek(); /*Proses pengecekkan ip lulus dan tidak pada seluruh ip*/
  void ProsesTampil(); /*Proses menampilkan hasil*/

//variable global
  float ip, jumlah=0;
  int semua=0, lulus=0, tlulus=0;

//Program Utama
  int main() {
    do {
      cout << "Masukan Nilai IP : "; cin >> ip;
      ProsesCek();
    } while(ip!=-999);

        ProsesTampil();
    return 0;
  }

//Proses Validasi Nilai IP
   bool isWithinRange (float ip,int min, int max) {
   bool status;
  	if (ip>=min&&ip<=max) {
    status=true;
  }
    else {
      status=false;
    }
  return status;
  }
//Proses Pengecekan & Menghitung Jumlah Rata-rata
  void ProsesCek(){
    if (isWithinRange (ip, 0, 4)){
      if (ip>=2.75){
        lulus++;
      }
        else /*if (ip<=2.74)*/{
          tlulus++;
        }
    semua++;
    jumlah=jumlah+ip;
    }
  }
//Proses Tampil
    void ProsesTampil() {
      if (semua==0){
        cout<<"Tidak Ada Data";
      }
        else {

          cout<<""<<endl<<endl;
          cout<<"	Data Nilai IP Mahasiswa          "<<endl<<endl;
          cout<<"Jumlah Data Mahasiswa   : "<<semua<<endl;
          cout<<"Jumlah Mahasiswa yang Lulus : "<<lulus<<endl;
          cout<<"Jumlah Mahasiswa yang Tidak Lulus : "<<tlulus<<endl;
          cout<<"Rata-Rata Nilai IP : "<<jumlah/semua<<endl;
        }
    }