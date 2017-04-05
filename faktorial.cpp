#include <iostream>
	using namespace std;


// program utama 
	int main (){
		int f, hasil=1,j;

		cout<<"Masukan Faktorial : ";
		cin>>f;

		cout<<f<<"=";
// proses menghitung nilai faktorial 
		for(j=f;j>0;j--){
			if(j!=1)
				cout<<j<<"x";
			else
				cout<<"1";
			hasil=hasil*j;
		} 
		cout<<"="<<hasil;
		return 0;
	}