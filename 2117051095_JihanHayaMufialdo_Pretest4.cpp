#include <iostream>
using namespace std;

int main (){
	
	/* 
	   NAMA  : JIHAN HAYA MUFIALDO
	   NPM   : 2117051095
	   KELAS : B
	*/
	
	/* 
	   SOAL : Buatlah sebuah program untuk menghitung total beserta rata-rata dari hasil penjumlahan
	          sejumlah N bilangan.
	          
	          Format Input  > Baris pertama berisi inputan N jumlah bilangan
	                          Baris kedua sampai ke N berisi inputan bilangan yang akan dihitung rata"nya
							 
			  Format Output > Baris pertama berisi output total penjumlahan N bilangan
			                  Baris kedua berisi output rata-rata dari penjumlahan N bilangan
			                  
			  Contoh Input  > 4
			                  30
			                  30
			                  20
			                  20
			                 
			  Contoh Output > total penjumlahan : 100
			                  rata-rata         : 25
	*/
	
	cout << "============================================" << endl;
	cout << " PROGRAM MENGHITUNG TOTAL BESERTA RATA-RATA " << endl;
	cout << "============================================" << endl;
	cout <<                                                   endl;
	cout << " +++ MASUKKAN DATA +++ "                      << endl;
	cout << "_______________________"                      << endl;
	cout <<                                                   endl;
	
	//TIPEDATA//
	int n;
	int x;
	float total = 0;
	float rata;
	
	//INPUT//
	cout << "Jumlah Bilangan : " ; cin >> n ;
	cout << endl;
	
	//LOOPING//    
	for ( int a=0 ; a<n ; a++ ){
	 	
	 	cout << "Bilangan        : " ; cin >> x ;
	    
		total = total+x;
	}
	    rata  = total/n;
	
	cout << endl;
	cout << "++++++++++++++++++++++" << endl;
	cout << " HASIL PENGHITUNGAN : " << endl;
	cout << "++++++++++++++++++++++" << endl;
	cout << endl;
	
	//OUTPUT//
	cout << "Total Penjumlahan : " << total << endl;
	cout << "Rata-Rata         : " << rata << endl;
	
	cout <<                                                  endl;
	cout << "---------------------------------------------" << endl;
	cout << "       TERIMA KASIH DAN TETAP BERJUANG       " << endl;
	cout << "---------------------------------------------" << endl;
	
	return 0;
		
}
