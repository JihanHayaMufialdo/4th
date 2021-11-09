#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n; 
    
   if (n>0&&n<10){
   
       for(int a=n;a>0;a--){
           for (int b=0;b<a;b++){
              cout << a;
           }
           cout << endl;
        } 
    }
    
    else{
        cout << "Bilangan tidak sesuai" << endl;
    }
    
    return 0;
}
