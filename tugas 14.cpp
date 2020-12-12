#include <iostream>

using namespace std;

int main(){
	struct rumah{
		string tipe_rumah;
		int jumlah_kamar;
	};
	rumah rumah1;
	rumah1.tipe_rumah = "42A";
	rumah1.jumlah_kamar = 2;
	cout<<"Tipe rumah : "<<&rumah1.tipe_rumah<<endl;
	cout<<"Jumlah kamar : "<<&rumah1.jumlah_kamar<<endl;
}
