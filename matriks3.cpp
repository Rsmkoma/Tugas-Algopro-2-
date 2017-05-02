#include <iostream>
using namespace std; 

int main (){
	int M [3] [3];
	int i, j;
	
	for (int i=0; i < 3; i++)
	{
		for (int j=0; j < 3; j++) 
		{
			cout << "Masukan Angka pada Baris ke " << i <<" Kolom ke " << j <<" = ";
			cin >> M [i] [j];
		}
		cout << endl;
	}
	cout << " Matriks Ordo (3,3) " << endl << endl; 
	for (int i=0; i < 3; i++)
	{
		for (int j=0; j < 3; j++)
		{
			cout << M [i] [j] << " "; 
		}
		cout << endl;
	}
	return 0;
}