#include <iostream>
using namespace std;

int main() {
   int bilangan;

   cout << "Masukkan bilangan: ";
   cin >> bilangan;

   if (bilangan % 2 == 0) {
      cout << bilangan << " adalah bilangan Genap." << endl;
   } else {
      cout << bilangan << " adalah bilangan Ganjil." << endl;
   }

   return 0;
}
