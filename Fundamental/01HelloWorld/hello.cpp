#include <iostream>
using namespace std;
void hello(){
	string nama;
	cout << "Hello apa kabar?!! "; cin >> nama;

	cout << "Bagaimana kabar " << nama << endl;
}

int main(){
	cout << "Hello world!" << endl;
	hello();
	return 0;
}

