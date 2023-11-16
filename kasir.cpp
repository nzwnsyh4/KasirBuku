#include <iostream>

using namespace std;

int main()
{ 

 int cb, hb, dc, wb, cl;
 float buku, stat, diskon, fixbuku, fixstat;
 
 // List harga
	 cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
	 cout<<"\t\t| C Programming Book : Rp 105.000,00 |"<<endl;
	 cout<<"\t\t| C Handbook         : Rp 188.000,00 |"<<endl;
	 cout<<"\t\t| Dictionary         : Rp  55.000,00 |"<<endl;
	 cout<<"\t\t| WhiteBoard Marker  : Rp  10.000,00 |"<<endl;
	 cout<<"\t\t| Calculator         : Rp  35.000,00 |"<<endl;
	 cout<<"\t\t======================================\n"<<endl;
 
 // inputan pemesanan
	 cout<<"Masukkan jumlah C Programming Book yang dibeli : "; cin>>cb;
	 cout<<"Masukkan jumlah C Handbook yang dibeli         : "; cin>>hb;
	 cout<<"Masukkan jumlah Dictionary yang dibeli         : "; cin>>dc;
	 cout<<"Masukkan jumlah Whiteboard Marker yang dibeli  : "; cin>>wb;
	 cout<<"Masukkan jumlah Calculator yang dibeli         : "; cin>>cl;
	 cout<<"\n"<<endl;
	 
 // menampilkan bills
	 cout<<"\t========================== Customer's BILL =========================="<<endl;
	 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
	 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
	 cout<<"\t|   "<<cb<<"\t\tC Programming Book \t105000 \t\t"<<cb*105000<<"\t    |"<<endl;
	 cout<<"\t|   "<<hb<<"\t\tC Handbook \t\t188000 \t\t"<<hb*188000<<"\t    |"<<endl;
	 cout<<"\t|   "<<dc<<"\t\tDictionary \t\t55000 \t\t"<<dc*55000<<"\t    |"<<endl;
	 cout<<"\t|   "<<wb<<"\t\tWhiteboard Marker \t10000 \t\t"<<wb*10000<<"\t    |"<<endl;
	 cout<<"\t|   "<<cl<<"\t\tCalculator \t\t35000 \t\t"<<cl*35000<<"\t    |"<<endl;
	 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 
			 buku = cb*105000+hb*188000;
			 diskon = 6.25/100*buku;
			 stat = dc*55000+wb*10000+cl*35000;
 
	 cout<<"\t|\t\t\tHarga Total Buku \t: "<<buku<<"\t    |"<<endl;
	 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<diskon<<"   \t    |"<<endl;
	 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<buku-diskon<<"\t    |"<<endl;
	 fixbuku = buku-diskon;
	 diskon = 3.00/100*stat;
	 cout<<"\t|\t\t\tHarga Total Stationary \t: "<<stat<<"  \t    |"<<endl;
	 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<diskon<<"   \t    |"<<endl;
	 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<stat-diskon<<"   \t    |"<<endl;
	 fixstat = stat-diskon;
	 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
	 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<fixbuku+fixstat<<"\t    |"<<endl;
	 cout<<"\t====================================================================="<<endl;
}

