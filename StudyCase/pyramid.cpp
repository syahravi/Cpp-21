#include <iostream>
using namespace std;

int main(){
	int n, i, j;

	cout << "Berapa banyak?!!: ";
	cin >> n;
	
	for(i= 1; i <= n; i++){//Hitungan baris bawah n
	
		for(j = n; j >= i; j--){//Setiap barisnya akan berkurang 1 "*"
			cout << "* ";
		}
		
		cout << endl;//buat baris baru sampai batas n
	}
	
	return 0;//true;>
}
