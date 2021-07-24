#include<iostream> //Ini komentar
using namespace std; // baris 1 dan 2 penting;>

int main (){
/* Block Implementasi Array */
	string kulkas[] {"AQUA AQR-D251", "Rp.2.400.000,-"};
	string tv[] {"Samsung 43 in. 43K5002", "Rp.4.000.000,-"};
 	string laptop[] {"Macbook Pro 2020 13\" 512GB 8GB MXK52 Space Grey", "Rp.15.800.000,-"};
 	string ps[] {"PlayStation 5 Console Disc Version", "Rp.8.800.000,-"};
	string hp[] {"HUAWEI P40 Pro+ 5G [8GB/512GB] Ceramic White", "Rp.17.500.000,-"};

	string Nama, name[] {"Kulkas", "Televisi", "Laptop", "PlayStation", "SmartPhone"}, namaBarang[] {kulkas[0], tv[0], laptop[0], ps[0], hp[0]}, harga[] {kulkas[1], tv[1], laptop[1], ps[1], hp[1]};
/* EndBlock Implementasi Array */

	int HargaBarang,Tempo, UangMuka, Bunga, Sisa, Angsuran;
	float Persen;
menu:
	cout<<".------------------->\nMENGHITUNG CICILAN BARANG ELEKTRONIK\n";
nama:
	cout<<".------------------->\nPilih 1-5 dari barang di bawah ini!!\n💘⥃⥃⥃⥃⥃⥃⥃⥃⥃⥃"<< endl;

/* Block Implementasi For Loops */
	for (int i = 0; i < sizeof(namaBarang)/sizeof(namaBarang[0]); i++){
			cout << "[[0" << i +1 <<"]]➟➟➟ "<< name[i] << endl<< namaBarang[i] << endl << harga[i] << "\n\n";}
/* EndBlock Implementasi For Loops */

	cout<<"`------------------->\n\tInput Nomer Barang: "; cin >> Nama;
	
/* Block Implementasi If, Else if, Else Statement */
	if (Nama == "1") HargaBarang = 2400000, Nama = namaBarang[0];
	else if (Nama == "2") HargaBarang = 4000000, Nama = namaBarang[1];
	else if (Nama == "3") HargaBarang = 15800000, Nama = namaBarang[2];
	else if (Nama == "4")	HargaBarang = 8800000, Nama = namaBarang[3];
	else if (Nama == "5") HargaBarang = 17500000, Nama = namaBarang[4];
	else{goto nama;}
/* EndBlock Implementasi If, Else if, Else Statement */

		cout<<"`------------------->\n\tInput Lama Bulan Cicilan (*Harus berupa angka): "; cin >> Tempo;
	cout<<endl;

/* Block Implementasi If, Else if, Else Statement */
	if(Tempo >= 60) Persen = 0.1;
	else if(Tempo >= 54) Persen = 0.09;
	else if(Tempo >= 48) Persen = 0.08;
	else if(Tempo >= 42) Persen = 0.07;
	else if(Tempo >= 36) Persen = 0.06;
	else if(Tempo >= 30) Persen = 0.05;
	else if(Tempo >= 24) Persen = 0.04;
	else if(Tempo >= 18) Persen = 0.03;
	else if(Tempo >= 12) Persen = 0.02;
	else if(Tempo >= 6) Persen = 0.01;
	else{ Persen = 0.01;}
/* EndBlock Implementasi If, Else if, Else Statement */

	cout<< "Berdasarkan Tempo Waktu Cicilan selama "<< Tempo<< " Bulan,\nmaka akan dikenakan cicilan("<< Persen*100<< "%)";

	// Operator aritmatika uy
	UangMuka = HargaBarang*0.2;
	Bunga = HargaBarang*Persen;
	Sisa = HargaBarang + Bunga - UangMuka;
	Angsuran = Sisa / Tempo;

	cout<< "\n\n.----------------------------->\nDetail Pembelian\n.----------------------------->";
	cout<< "\nNama Barang:\t"<< Nama;
	cout<< "\nHarga Barang:\tRp."<< HargaBarang<< ",-\t>>> Lama Kredit:\t"<< Tempo<< " Bulan";
	cout<< "\nJumlah Bunga:\tRp."<< Bunga<< ",-";
	cout<< "\nUang Muka:\tRp."<< UangMuka<< ",-";
	cout<< "\nSisa Cicilan:\tRp."<< Sisa<< ",-";
	cout<< "\nAngsuran:\tRp."<< Angsuran<< ",- Perbulan\n";

	system("PAUSE");

	cout<< "\n\n.--------------------->\nTabel Angsuran\n*-------->\n|Pembayaran\t| Angsuran\t| Sisa\n";
	for (int i = 1; i<= Tempo; i++){
	Sisa -= Angsuran;
	cout<< "|\tKe-"<< i<< "\t|Rp." << Angsuran<< "\t|Rp."<< Sisa<< endl;
	}

	cout<< "\nData ini dapat diubah sesuai situasi dan kondisi toko terkait!*\n";

	system("PAUSE");
	string goMenu;
	cout<< "Ingin melakukan transaksi lain? (y/n)";cin >> goMenu;
	if (goMenu == "y") goto menu;
	return 0;
}
