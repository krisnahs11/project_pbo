#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h> 
using namespace std;

class buku { //buku sebagai sebagai class
public :
	//atribut-atribut yang ada
	int id;
	string pengarang, judul;
	int stok;
	int tahun; 
	};
	buku m;
	
int a;

void Createbuku(){
	fstream sdata;
	sdata.open("buku.txt", ios::app);
	sdata << m.id << endl;
	sdata << m.judul <<endl;
	sdata << m.pengarang <<endl;
	sdata << m.stok << endl;
	sdata << m.tahun <<endl<<endl;
	
	sdata.close();
}

void Readbuku() {
	ifstream ydata;
	ydata.open("buku.txt");
	
	ydata >> m.id;
	ydata >> m.judul;
	ydata >> m.pengarang;
	ydata >> m.stok;
	ydata >> m.tahun;
	
	while(!ydata.eof()){
		cout << "ID BUKU \t :"<< m.id << endl;
		cout << "JUDUL BUKU \t :"<< m.judul << endl;
		cout << "PENGARANG BUKU \t :"<< m.pengarang << endl;
		cout << "TAHUN BUKU \t :"<< m.tahun << endl;
		cout << "STOK BUKU \t :"<< m.stok << endl;
		
		cout <<"=====================================" <<endl;
		
	ydata >> m.id;
	ydata >> m.judul;
	ydata >> m.pengarang;
	ydata >> m.stok;
	ydata >> m.tahun;
	}
	ydata.close();
	
}
class perpustakaan{
	
public :
	string tgl_pinjam,tgl_kembali;
	string nm_pinjam,alamat,id_buku;
	string kd_pinjam,kd_kembali;
};
perpustakaan c;
int b;

void peminjam(){
	fstream pdata;
	pdata.open("daftar pinjam.txt",ios::app);
	pdata<< c.kd_pinjam<<endl;
	pdata<< c.nm_pinjam<<endl;
	pdata<< c.alamat<<endl;
	pdata<< c.id_buku<<endl;
	pdata<< c.tgl_pinjam<<endl;
	pdata<< c.tgl_kembali<<endl<<endl;
	
	pdata.close();
}

void pengembalian(){
	fstream kdata;
	kdata.open("daftar kembali.txt",ios::app);
	kdata<< c.kd_kembali<<endl;
	kdata<< c.nm_pinjam<<endl;
	kdata<< c.alamat<<endl;
	kdata<< c.id_buku<<endl;
	kdata<< c.tgl_kembali<<endl;
	
	kdata.close();
}

void laporan_p(){
	ifstream ldata;
	ldata.open("daftar pinjam.txt");
	
	ldata >> c.kd_pinjam;
	ldata >> c.nm_pinjam;
	ldata >> c.alamat;
	ldata >> c.id_buku;
	ldata >> c.tgl_pinjam;
	ldata >> c.tgl_kembali;
	
	while(!ldata.eof()){
		cout << "KODE PINJAM \t :"<< c.kd_pinjam << endl;
		cout << "NAMA PINJAM \t :"<< c.nm_pinjam << endl;
		cout << "ALAMAT PINJAM \t :"<< c.alamat << endl;
		cout << "KODE BUKU \t :"<< c.id_buku << endl;
		cout << "TANGGAL PINJAM \t :"<< c.tgl_pinjam << endl;
		cout << "TANGGAL KEMBALI \t :"<< c.tgl_kembali << endl;
		cout <<"=====================================" <<endl;
		
	ldata >> c.kd_pinjam;
	ldata >> c.nm_pinjam;
	ldata >> c.alamat;
	ldata >> m.judul;
	ldata >> c.tgl_pinjam;
	ldata >> c.tgl_kembali;
}
ldata.close();
}

void laporan_pengembalian(){
	ifstream pdata;
	pdata.open("daftar kembali.txt");
	
	pdata >> c.kd_kembali;
	pdata >> c.nm_pinjam;
	pdata >> c.alamat;
	pdata >> c.id_buku;
	pdata >> c.tgl_kembali;
	
	while(!pdata.eof()){
		cout << "KODE PINJAM \t :"<< c.kd_kembali << endl;
		cout << "NAMA KEMBALI \t :"<< c.nm_pinjam << endl;
		cout << "ALAMAT KEMBALI \t :"<< c.alamat << endl;
		cout << "KODE BUKU \t :"<< c.id_buku << endl;
		cout << "TANGGAL KEMBALI \t :"<< c.tgl_kembali << endl;
		cout <<"=====================================" <<endl;
		
	pdata >> c.kd_kembali;
	pdata >> c.nm_pinjam;
	pdata >> c.alamat;
	pdata >> c.id_buku;
	pdata >> c.tgl_kembali;
	
	}
	pdata.close();
}
	
	
int main()
{
	char yn,ch,temp;
	
	login:
	string user = "";
	string pass = "";
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\t\t ------- APLIKASI PERPUSTAKAAN LEMPEH --------\n\n";
	cout << "\t\t\t  Username : "; cin>>user;
	cout << "\t\t\t  Password : ";
	ch = _getch();
    while(ch != 13){ //character 13 is enter
    pass.push_back(ch);
    cout << '*';
    ch = _getch();
    }

    cout<<endl;
	if(user == "krisna" && pass == "111"){
		cout << "\n\n Anda berhasil login. \n" << endl;
		system("pause");
		system("cls");
		goto mulaimenu;
	}else{
		cout<<" Password Anda Salah \n";
   	    system("pause");
   	    system("cls");
	 	goto login;
	}
	loop:
	mulaimenu:
    cout << "***  SELAMAT DATANG DI PERPUSTAKAAN LEMPEH  ***"<<endl;
    cout << "--------------------------------------------------"<<endl;

    cout << "1. Input Data Buku" << endl;
    cout << "2. Lihat Data Buku" << endl;  
    cout << "3. Peminjaman Buku" <<endl;
    cout << "4. Pengembalian Buku" <<endl;
    cout << "5. Laporan Peminjaman dan Pengembalian" <<endl;
    cout << "6. Exit" <<endl;

    
    cout << " Masukan Pilih Menu : ";
    cin >> a;
    
    switch(a){
    	case 1 : {
    		
    		int masukkanlagi = 1;
    		
			while (masukkanlagi !=0) {
			
			
    		system ("cls");
    		cout << " ***INPUT DATA BUKU***" <<endl;
    		cout << " Masukan ID buku \t :" ; 
			cin>> m.id;
    		cout << " Masukan Judul Buku \t :" ; 
			cin>> m.judul;
    		cout << " Masukan Pengarang Buku \t :" ; 
			cin>> m.pengarang;
    		cout << " Masukan Tahun Buku \t :" ;
    		cin >> m.tahun;
    		cout << " Masukan Stok Buku \t :" ;
    		cin >> m.stok;
    		
    		Createbuku();
    		
    		cout << "Apakah Ingin input data buku lagi ? [0] tidak || [1] Iya:";
    		cin >> masukkanlagi;
    	}
    		system ("cls");
    		
    		goto loop;
    		
			break;
		}
		case 2 :{
			int masukkanlagi = 0;
				
			 {
			system("cls");
			cout<< "===LIHAT DATA BUKU===" <<endl;
			Readbuku();
			cout<< "[0] untuk kembali ke menu utama :";
				cin >> masukkanlagi;
					{
					system("cls");
					goto loop;
			break;
		}
	}
}
		case 3 :{
			int masukkanlagi = 1;
    		
			while (masukkanlagi !=0) {
				
			system ("cls");
			cout <<"==PEMINJAMAN BUKU==" <<endl;
			cout <<"Kode Peminjam Buku \t :";
			cin>> c.kd_pinjam;
			cout << "Nama Peminjam \t :"; 
			cin>> c.nm_pinjam;
			cout <<"Alamat Peminjam \t :";
			cin>> c.alamat,
			cout << "Kode buku dipinjam \t :"; 
			cin>> c.id_buku; 
			cout << "Tanggal Perminjaman Buku \t :";
			cin>> c.tgl_pinjam;
			cout << "Tanggal Kembalikan Buku \t :";
			cin>> c.tgl_kembali; 
			                                      
			peminjam();
			
			cout << "Apakah Ingin meminjam buku lagi ? [0] tidak || [1] Iya:";
    		cin >> masukkanlagi;
    	}
    		goto loop;
    		
			break;
		}
		case 4 :{
			
			int masukkanlagi = 1;
    		
			while (masukkanlagi !=0) {
				
			system ("cls");
		
			cout <<"==PENGEMBALIAN BUKU== " <<endl;
			cout <<"Kode Pengembalian Buku :\t";
			cin>> c.kd_kembali;
			cout <<"Nama Pengembali Buku \t :";
			cin>>  c.nm_pinjam;
			cout <<"Alamat Pengembali Buku \t :";
			cin>> c.alamat;
			cout <<"Kode Buku Yang Kembaikan \t :";
			cin>> c.id_buku;
			cout<< "Tanggal Kembalikan Buku \t :";
			cin>> c.tgl_kembali;
			
			pengembalian();
			
			cout << "Apakah Ingin mengembalikan buku lagi ? [0] tidak || [1] Iya:";
    		cin >> masukkanlagi;
    	}
    	goto loop;
    	
			break;
		}
		
		case 5 : {
			int b;
			system ("cls");
			cout << "===LAPORAN PEMINJAMAN DAN PENGEMBALIAN==="<<endl;
			cout << "1. Laporan Peminjaman Buku "<<endl;
			cout << "2. Laporan Pengembalian Buku"<<endl;
			
			cout << "Masukan Pilihan :"<<endl;
			cin >> b;
			
			switch (b){
				case 1: {
					int masukan = 0;
					{
					
					system ("cls");
					cout << "===LAPORAN PEMINJAMAN BUKU==="<<endl;
					laporan_p();
					cout << "[0] untuk kembali ke menu utama :";
					cin >> masukan;
					{
						goto loop;
					}
					break;
				}
			}
		
		
				case 2: {
				int masukan = 0;
				{
					system ("cls");
					cout << "===LAPORAN PENGEMBALIAN BUKU==="<<endl;
					laporan_pengembalian();
					cout << "[0] untuk kembali ke menu utama :";
					cin >> masukan;
				}
				{
					goto loop;
				}
				break;
			}
			break;
		}
		}	
		
		case 6 : {
			system("cls");
			cout<< "===Anda Telah Logout=== \t"<<endl;
			break;
		}	
		
		}    
	
	return 0;
}
