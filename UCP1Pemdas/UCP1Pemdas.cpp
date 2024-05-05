#include <iostream>
using namespace std;

string CekKualitasUdara(int polutan1, int polutan2, int polutan3) {
	int rerata = (polutan1 + polutan2 + polutan3) / 3;
	return (rerata > 75 || polutan1 == 45 || polutan2 == 45 || polutan3 == 45);

}

int main() {
	int polutanTangerang1 = 80, polutanTangerang2 = 70, polutanTangerang3 = 85;
	int polutanBekasi1 = 60, polutanBekasi2 = 55, polutanBekasi3 = 50;
	int sehat = 0, tidakSehat = 0;

	cout << "Daftar Status Kualtas Udara" << endl;

string statusTangerang = CekKualitasUdara(polutanTangerang1, polutanTangerang2, polutanTangerang3);
	cout << "Nama Kota Tangerang, Status " << statusTangerang << endl;
	(statusTangerang == "Tidak sehat") ? tidakSehat++ : sehat++;

string statusBekasi = CekKualitasUdara(polutanBekasi1, polutanBekasi2, polutanBekasi3);
	cout << "Nama Kota Bekasi, Status " << statusBekasi << endl;
	(statusBekasi == "Tidak sehat") ? tidakSehat++ : sehat++;

	cout << "Total lokasi yang Sehat: " << sehat << endl;
	cout << "Total lokasi yang Tidak Sehat: " << tidakSehat << endl;

	char ulangi;
	cout << "Apakah Anda ingin mengulangi program? (y/n): ";
	cin >> ulangi;
	if (ulangi == 'y' || ulangi == 'Y') main();
	else cout << "Terima kasih telah menggunakan program ini." << endl;

	return 0;
}



//1.A). int i, n, temp, j;
//	 int arr[11];

//	 void input() {

// 	 while (true) {
//		cout << "masukkan banyaknya elemen pada array : ";
//		cin >> n;
//		if (n <= 11)
//			break;

//		else {
//			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";

//		 }
//	 }
//	 cout << endl;
//	 cout << "=====================" << endl;
//	 cout << "Masukkan Elemen Array" << endl;
//	 cout << "=====================" << endl;

//	 for (int i = 0; i < n; i++) {
//		 cout << "Data ke-" << (i + 1) << ": ";
//		 cin >> arr[i];

//	    }
//   }
 
//b). void input dengan tipe data INT mendeklarasikan variable dengan cout dan cin
//c). deklarasi variable string yang digunakan untuk menyimpan teks misal nama.

//2. deklarasikan prosedur dengan void sapa() {
//	 cout << "halo, selamat datang" << endl; }
//   kemudian panggil prosedur dengan int main() {
//   sapa() ;
//   return 0;

//3. looping while digunakan untuk mengulang angka selama dalam kondisi benar dengan int main() {
//   int i = 1;
//   while (i <= 5) {
//       cout << i << " ";
//       ++i; }
//   cout << endl;
//   return0; }

//4  implementasi conditional statement if-else-if-else adalah program untuk mengecek sebuah variable misal seperti bilangan tersebut positif,negatif atau bisa jadi nol kemudian mencetak dan menampilkan pesan dengan kondisi yg sesuai

//5. struct digunakan untuk menampilkan informasi mengenai data misalnya mahasiswa biasanya didefinisikan dengan 3 data yaitu nama, umur, jurusan kemudian variable mahasiswa dideklarasikan dan diisi dengan informasi mengenai mahasiswa tersebut kemduian ditampilkan menggunakan perintah cout

