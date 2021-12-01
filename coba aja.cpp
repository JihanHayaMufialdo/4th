#include <iostream>
using namespace std;
int main(){
	
	//kode buku
	
	int a[3] = {1212,1313,1414};
	
	cout << "masukkan kode buku : ";
	cin >> a[3];
	
	if(a[3]==1212){
		cout << "KATA by Rintik Sedu";
	}
	else if(a[3]==1313){
		cout << "TENTANG KAMU by Tere Liye";
	}
	else if(a[3]==1414){
		cout << "NEGERI PARA BEDEBAH by Tere Liye";
	}
	else{
		cout << "!! BUKU TIDAK DITEMUKAN !!";
	}
	
}		
	
