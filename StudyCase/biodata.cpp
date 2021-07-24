/* HEADER dong */
#include <iostream>
#include <map>
using namespace std;

int main(){
string title = "\tBIODATA PRIBADI SAYA\n💘⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓⤓💘";

map<string, string> mm;
mm["01"] = "Januari";
mm["02"] = "Februari";
mm["03"] = "Maret";
mm["04"] = "April";
mm["05"] = "Mei";
mm["06"] = "Juni";
mm["07"] = "Juli";
mm["08"] = "Agustus";
mm["09"] = "September";
mm["10"] = "Oktober";
mm["11"] = "November";
mm["12"] = "Desember";

string name, place, date, address, telp;
cout << "Nama Lengkap\t\t:";
cin >> name;
cout << "\nKota Kelahiran\t\t:";

string aw = "01/02/2001";
string f;
f.append({aw[3],aw[4]});
cout << mm[f];
}
