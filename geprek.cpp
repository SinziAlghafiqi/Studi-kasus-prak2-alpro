#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

void line2(int n){
	for(int i=0;i<n;i++){
		cout << "=";
	}
	cout <<endl;
}

int main(){
	int choice, more, jumlah, hasil1, hasil2, hasil3, hasil4, hasil5, total;
	bool loop = true;
	ofstream header;
	header.open("struk.txt");
	header << "\tHISTORY PESANAN"<<endl;
	header << "-----------------------------------------------"<<endl;
	header.close();
	cout << "Warung Makan Praktikum" <<endl;
	line2(55);
	while(loop){
		cout << "Menu Makanan : " <<endl;
		cout << "1. Ayam Geprek : Rp.21000,00" <<endl;
		cout << "2. Ayam Goreng : Rp.17000,00" <<endl;
		cout << "3. Udang Goreng : Rp.19000,00" <<endl;
		cout << "4. Cumi Goreng : Rp.20000,00" <<endl;
		cout << "5. Ayam Bakar : Rp.25000,00" <<endl;
		cout << "Pilih Menu : ";
		cin >> choice;
		line2(55);
		if(choice == 1){
			cout << "Masukkan Jumlah : ";
			cin >> jumlah;
			cout << "Ayam Geprek berhasil ditambahkan di pesanan..." <<endl;
			hasil1 = 21000 * jumlah;
			total += hasil1;
			line2(55);
			cout << "Apakah anda ingin menambah pesanan?" <<endl;
			cout << "1. Ya" <<endl;
			cout << "2. Tidak" <<endl;
			cout << "Masukkan Pilihan : ";
			cin >> more;
			switch(more){
				case 1:
					break;
				case 2:
					cout << "Keluar Dari Program...";
					loop = false;
			}
			ofstream pFile;
			pFile.open("struk.txt", ios::app);
			pFile << "-----------------------------------------------" <<endl;
			pFile << "Nama Barang\t\t: Ayam Geprek"<<endl;
			pFile << "Jumlah Barang\t: " << jumlah <<endl;
			pFile << "Harga Barang\t: Rp." << hasil1 << ",00" <<endl;
			pFile.close();
		}else if(choice == 2){
			cout << "Masukkan Jumlah : ";
			cin >> jumlah;
			cout << "Ayam Goreng berhasil ditambahkan di pesanan..." <<endl;
			hasil2 = 17000 * jumlah;
			total += hasil2;
			line2(55);
			cout << "Apakah anda ingin menambah pesanan?" <<endl;
			cout << "1. Ya" <<endl;
			cout << "2. Tidak" <<endl;
			cout << "Masukkan Pilihan : ";
			cin >> more;
			switch(more){
				case 1:
					break;
				case 2:
					cout << "Keluar Dari Program...";
					loop = false;
					getch();
			}
			ofstream pFile;
			pFile.open("struk.txt", ios::app);
			pFile << "-----------------------------------------------" <<endl;
			pFile << "Nama Barang\t\t: Ayam Goreng"<<endl;
			pFile << "Jumlah Barang\t: " << jumlah <<endl;
			pFile << "Harga Barang\t: Rp." << hasil2 << ",00" <<endl;
			pFile.close();
		}else if(choice == 3){
			cout << "Masukkan Jumlah : ";
			cin >> jumlah;
			cout << "Udang Goreng berhasil ditambahkan di pesanan..." <<endl;
			hasil3 = 19000 * jumlah;
			total += hasil3;
			line2(55);
			cout << "Apakah anda ingin menambah pesanan?" <<endl;
			cout << "1. Ya" <<endl;
			cout << "2. Tidak" <<endl;
			cout << "Masukkan Pilihan : ";
			cin >> more;
			switch(more){
				case 1:
					break;
				case 2:
					cout << "Keluar Dari Program...";
					loop = false;
			}
			ofstream pFile;
			pFile.open("struk.txt", ios::app);
			pFile << "-----------------------------------------------" <<endl;
			pFile << "Nama Barang\t\t: Udang Goreng"<<endl;
			pFile << "Jumlah Barang\t: " << jumlah <<endl;
			pFile << "Harga Barang\t: Rp." << hasil3 << ",00" <<endl;
		}else if(choice == 4){
			cout << "Masukkan Jumlah : ";
			cin >> jumlah;
			cout << "Cumi Goreng berhasil ditambahkan di pesanan..." <<endl;
			hasil4 = 20000 * jumlah;
			total += hasil4;
			line2(55);
			cout << "Apakah anda ingin menambah pesanan?" <<endl;
			cout << "1. Ya" <<endl;
			cout << "2. Tidak" <<endl;
			cout << "Masukkan Pilihan : ";
			cin >> more;
			switch(more){
				case 1:
					break;
				case 2:
					cout << "Keluar Dari Program...";
					loop = false;
			}
			ofstream pFile;
			pFile.open("struk.txt", ios::app);
			pFile << "-----------------------------------------------" <<endl;
			pFile << "Nama Barang\t\t: Cumi Goreng"<<endl;
			pFile << "Jumlah Barang\t: " << jumlah <<endl;
			pFile << "Harga Barang\t: Rp." << hasil4 << ",00" <<endl;
			pFile.close();
		}else if(choice == 5){
			cout << "Masukkan Jumlah : ";
			cin >> jumlah;
			cout << "Ayam Bakar berhasil ditambahkan di pesanan..." <<endl;
			hasil5 = 25000 * jumlah;
			total += hasil5;
			line2(55);
			cout << "Apakah anda ingin menambah pesanan?" <<endl;
			cout << "1. Ya" <<endl;
			cout << "2. Tidak" <<endl;
			cout << "Masukkan Pilihan : ";
			cin >> more;
			switch(more){
				case 1:
					break;
				case 2:
					cout << "Keluar Dari Program...";
					loop = false;
			}
			ofstream pFile;
			pFile.open("struk.txt", ios::app);
			pFile << "-----------------------------------------------" <<endl;
			pFile << "Nama Barang\t\t: Ayam Bakar"<<endl;
			pFile << "Jumlah Barang\t: " << jumlah <<endl;
			pFile << "Harga Barang\t: Rp." << hasil5 << ",00" <<endl;
			pFile.close();
		}
	}
	ofstream footer;
	footer.open("struk.txt", ios::app);
	footer << "-----------------------------------------------" <<endl;
	footer << "Total Harga = Rp." << total <<",00";
	getch();
	return 0;
}
