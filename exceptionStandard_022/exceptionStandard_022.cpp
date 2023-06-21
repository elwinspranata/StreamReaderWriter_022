#include <iostream> 
#include <exception> 
//untuk objek exception yanag akan digunakan 
#include <array> 
//untuk obyek array yang akan kita gunakan 
using namespace std; 
int main()
{
	cout << "Awal program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 3, 5, 7 };
		//pesan array integer 3 elemen 
		cout << data.at(5) << endl;
		//memanggil array elemen ke 5 
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exception 
		cout << e.what() << endl;
		/*akan dieksekusi karna array data hanya
		memiliki 3 elemen*/
	}
	cout << "Baris program yang terakhir" << endl;
	/*penanda 2: bahwa program berjalan tanpa berhenti
	meskipun terjadi kesalahan*/
	return 0;
} 
