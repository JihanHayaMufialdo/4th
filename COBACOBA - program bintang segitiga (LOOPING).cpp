#include <iostream>
using namespace std;
int main()
{
	for (int a=0 ; a<5 ; a++){
		for (int b=0 ; b<a+1 ; b++){
			cout << "*" ;	
		}
	     	cout << endl;
	}
	
	for (int a=5 ; a>0 ; a--){
        for (int b=0 ; b<a-1 ; b++){
			cout << "*" ;
		}
		    cout << endl;
	}
	

}
