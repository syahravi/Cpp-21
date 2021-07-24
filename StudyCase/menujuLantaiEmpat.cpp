#include <iostream>
using namespace std;
int main(){
	int posisiLantai = 1;bool liftBerfungsi;string keputusan;
	cout << "Posisi di lantai 1;>" << endl; // Mengetahui posisi saat ini

label:
	printf("============>>>>>>>>>>>>>>>>>\nApakah lift berfungsi? (y/n)\n============>>>>>>>>>>>>>>>>>");
	cin >> keputusan; cout << endl;
	
	if(keputusan == "y"){
			liftBerfungsi == true;
			cout << "============>>>>>>>>>>>>>>>>>\n" << "Yey!! sudah di lantai 4 - menggunakan lift;>" << endl;
	}

	else{liftBerfungsi == false;
		while(posisiLantai <3){
		posisiLantai += 1;
		cout << "============>>>>>>>>>>>>>>>>>" << "Sudah di lantai " << posisiLantai << " dengan menggunakan tangga;>" << endl << "============>>>>>>>>>>>>>>>>>" << endl;
		goto label;
		}
	cout << "============>>>>>>>>>>>>>>>>>\nYey!! sudah di lantai 4 - menggunakan tangga;>" <<endl;
	}
	return 0;
}
