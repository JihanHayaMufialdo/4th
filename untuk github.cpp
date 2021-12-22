#include <iostream>
using namespace std;

int main(){

	int x;
	
	cout << "f(x) = 2x^3 + 5x^2 - 7x +10\n\n";
	
	cout << "x = ";
	cin >> x;
	
	cout << "\nf(" << x << ") = " << 2*(x*x*x) + 5*(x*x) - 7*x +10;
	
	return 0;
	
}
