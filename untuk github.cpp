#include <iostream>
using namespace std;

int main(){

	string s;
	int nyawa = 3;
	
	for (int i=0 ; i<3; i++){
		cout << "TEBAK KATA\n\n";
		cout << "nyawa : " << nyawa;
		cout << "\n\nlawan kata malas : ";
		cin >> s;
		if (s=="rajin" || s=="Rajin" || s=="RAJIN"){
			cout << "MENANG\n\n";
		}
		else{
			nyawa-=1;
		}
	}
}
