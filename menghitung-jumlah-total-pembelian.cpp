#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double harga_barang, total_bayar, diskon;
   int jumlah_barang;

   cout << "Harga barang: ";
   cin >> harga_barang;

   cout << "Jumlah barang: ";
   cin >> jumlah_barang;

   if (jumlah_barang > 100) {
      diskon = 0.15 * harga_barang * jumlah_barang;
   } else {
      diskon = 0.05 * harga_barang * jumlah_barang;
   }

   total_bayar = (harga_barang * jumlah_barang) - diskon;

   cout << fixed << setprecision(0); // set output dengan 0 angka di belakang koma
   cout << "Beli: " << harga_barang * jumlah_barang << endl;
   cout << "Diskon: " << diskon << endl;
   cout << "Total bayar: " << total_bayar << endl;

   return 0;
}
