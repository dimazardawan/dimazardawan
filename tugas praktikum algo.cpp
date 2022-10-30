#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	string a;
	int pil;
	double keliling, luas, panjang, lebar;
	do {
		cout << "Nama:Dimaz Ardawan\nNim:22343042" << endl;
		cout << "Praktikum Algoritma Pemograman" << endl;
		cout << "1.Mencari Keliling Persegi Panjang\n2.Luas Persegi Panjang" << endl;
		cout <<"Masukkan Pilihan" << endl;
		cin >> pil;fflush(stdin);
		if (pil == 1){
			cout << "Mencari keliling persegi panjang\n" << endl;
			cout << "Masukkan panjang" << endl;
			cin >> panjang;fflush(stdin);
			cout << "Masukkan lebar" << endl;
			cin >> lebar;fflush(stdin);
			keliling=2*(panjang+lebar);
			cout << "Keliling persegi panjang adalah" << keliling << endl;
			}
		else if (pil == 2){
			cout << "Mencari luas persegi panjang\n" << endl;
			cout << "Masukkan panjang " << endl;
			cin >> panjang;fflush(stdin);
			cout << "Masukkan lebar " << endl;
			cin >> lebar;fflush(stdin);
			luas=panjang*lebar;
			cout << "Luas persegi panjang adalah" << luas << endl;
		}
		else cout << "Input tidak tersedia\n" << endl;
		cout << "Ingin menghitung ulang?(Y/T)" << endl;
		getline (cin, a);
		cout << "\n\n" << endl;
		} while (a!="t");
		return 0;
		
		}
