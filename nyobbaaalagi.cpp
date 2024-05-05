#include <iostream>
#include <string>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   // Membuat Quiz Sederhana
   // Quiz 1
   
   string president;
   cout << "Soal 1" << endl;
   cout << "SIAPAKAH PRESIDEN REPUBLIK IDONESIA SEKARANG?" << endl;
   cout << "Pilih Opsi Di Bawah ini" << endl;
   cout << "- Soekarno" << endl;
   cout << "- Jokowi" << endl;
   cout << "- Megawati"<< endl;
   cin >> president;
   
   if(president == "Jokowi"){
     cout << "Kamu Benar, Horee!!" << endl;
   }
   else{
     cout << "Salah, Silahkan Coba Lagi!!" << endl;
   }
   
   cout << endl;
   
     // Membuat Quiz Sederhana
   // Quiz 2
   
   cout << "Soal 2" << endl;
   cout << "SIAPAKAH PRESIDEN PERTAMA REPUBLIK IDONESIA SEKARANG?" << endl;
   cout << "Pilih Opsi Di Bawah ini" << endl;
   cout << "- Soekarno" << endl;
   cout << "- Jokowi" << endl;
   cout << "- Megawati"<< endl;
   cin >> president;
   
   if(president == "Soekarno"){
     cout << "Kamu Benar, Horee!!" << endl;
   }
   else{
     cout << "Salah, Silahkan Coba Lagi!!" << endl;
   }
   return 0;
}